#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BTL_GUI.h"
#include <Windows.h>
#include <QJsonObject>
#include <QJsonDocument>
#include <QByteArray>
#include <QJsonArray>
#include <QList>
#include <QDebug>
#include <QFile>

#define PORT 1111
#define RPC_PORT 1234
#define NETWORK "-pqcnet"
#define DATA_DIR "../data"
#define NODE "bitcoin-cli -pqcnet -datadir=../data -rpcport=1234 "

#define TX_LIST_COUNT 7 // 거래 내역 갱신 갯수 -> 변경 시 출력을 위해 init_tx_list(TX_Info *tx)와 view_tx_list(TX_Info *tx) 함수 수정 필요
#define TX_SCAN_COUNT 100 // 최근 TX_SCAN_COUNT개의 거래 내역을 조회( TX_SCAN_COUNT번을 주기로 TX_LIST_COUNT만큼 검색 될 때까지 반복 )

typedef struct TX_Info {
	int save_tx;

	QJsonObject tx_obj;
	QString txid;
	QString address; // 송수신자의 계좌 주소
	double amount; // 금액
	QString send_receive; // "send" "receive"
	QString time; // 시간
	QString check_mining;
}TX_info;

class BTL_GUI : public QMainWindow
{
	Q_OBJECT

public:
	BTL_GUI(QWidget *parent = Q_NULLPTR);
	QString BTL_GUI::CmdExe(QString cmd);
	QString wallet_name;

	void start_demon()
	{
		system("start cmd /c bitcoind -pqcnet -txindex -port=1111 -datadir=../data -rpcport=1234");
		QString cmd = NODE "addnode \"192.168.0.40:1111\" \"add\"";
		Sleep(1000);
		CmdExe(cmd);
	}

	QString parsing_data(QString input, QString target)
	{
		//std::string temp = input;
		int start_p = input.indexOf(target, Qt::CaseInsensitive);
		if (start_p == -1)
			return false;
		start_p = start_p + target.length() + 1;

		QString result = input.mid(start_p);

		result = result.mid(result.indexOf("\"", Qt::CaseInsensitive) + 1);

		return result.section("\"", 0, 0);
	}

	bool Checkwallet()
	{
		QString result;
		QString cmd = NODE "listwalletdir ";

		cmd = cmd + " 2>&1";
		result = CmdExe(cmd);

		// 지갑이 이미 존재
		if (result.contains("name", Qt::CaseInsensitive))
		{
			wallet_name = parsing_data(result, "name");
			return true;
		}
		return false;
	}

	void Loadwallet()
	{
		QString cmd = NODE "loadwallet ";

		cmd = cmd + wallet_name + " 2>&1";
		CmdExe(cmd);
		// ui.walletlabel->setText(wallet_name);
	}

	void getbalance()
	{
		QString cmd = NODE "getbalance ";
		QString result = CmdExe(cmd);
		ui.balancelabel->setText(result);
	}

	void addressview()
	{
		QString cmd = NODE "listreceivedbyaddress 1 true ";
		QString result = CmdExe(cmd);
		result = parsing_data(result, "address");
		ui.addresslabel->setText(result);
	}

	void setting()
	{
		// Loadwallet();
		ui.walletlabel->setText(wallet_name);
		getbalance();
		addressview();
	}

	void blockinfo_parsing(QString blockhash)
	{
		QString cmd = NODE "getblock " + blockhash;
		QString result = CmdExe(cmd);

		QJsonDocument doc = QJsonDocument::fromJson(result.toUtf8());
		QJsonObject JON = doc.object();

		QString hash = JON.value("hash").toString();
		QString confirmations = QString::number(JON.value("confirmations").toInt());
		QString height = QString::number(JON.value("height").toInt());
		QString version = QString::number(JON.value("version").toInt());
		QString versionHex = JON.value("versionHex").toString();
		QString merkleroot = JON.value("merkleroot").toString();
		int time_int = JON.value("time").toInt();
		QString versions = QString::number(JON.value("version").toInt());
		QString mediantime = QString::number(JON.value("mediantime").toInt());
		QString nonce = QString::number(JON.value("nonce").toInt());
		QString bits = JON.value("bits").toString();
		QString difficulty = QString::number(JON.value("difficulty").toDouble());
		QString chainwork = JON.value("chainwork").toString();
		QString nTx = QString::number(JON.value("nTx").toInt());
		QString previousblockhash = JON.value("previousblockhash").toString();
		QString strippedsize = QString::number(JON.value("strippedsize").toInt());
		QString size = QString::number(JON.value("size").toInt());
		QString weight = QString::number(JON.value("weight").toInt());

		QJsonArray tx_array = JON["tx"].toArray();
		// QJsonObject tx_obj = tx_array[0].toObject();
		QString tx;
		int tx_count = tx_array.size();

		time_t epch = time_int + 32400;
		char *current_time = asctime(gmtime(&epch));
		
		QString time = current_time;

		// 출력
		QString view = "hash : " + hash + "\nconfirmations : " + confirmations + "\nheight : " + height + "\nversion : " + versions + \
			"\nversionHex : " + versionHex + "\nmerkleroot : " + merkleroot + "\ntime : " + time + "version : " + version + \
			"\nmediantime : " + mediantime + "\nnonce : " + nonce + "\nbits : " + bits + "\ndifficulty : " + difficulty + \
			"\nchainwork : " + chainwork + "\nnTx : " + nTx + "\npreviousblockhash : " + previousblockhash + "\nstrippedsize : " + strippedsize + \
			"\nsize : " + size + "\nweight : " + weight + "\nTX : \n";

		for (int i = 0; i < tx_count; i++)
			view = view + tx_array[i].toString() + "\n";

		ui.blockinfo->setText(view);
	}

	QString tx_address_parsing(QString _tx ,int n)
	{
		QString cmd = NODE "getrawtransaction " + _tx + " true";
		QString result = CmdExe(cmd);
		QJsonDocument doc = QJsonDocument::fromJson(result.toUtf8());
		QJsonObject tx_obj = doc.object();
		
		QJsonArray tx_array = tx_obj["vout"].toArray();

		int a = tx_array.size();
		
		tx_obj = tx_array[0].toObject();
		tx_obj = tx_obj["scriptPubKey"].toObject();
		QString res = tx_obj["address"].toString();
		return res;
	}

	void init_tx_list(TX_Info *tx)
	{
		// amount copy
		tx[0].amount = ui.tx_amount->text().toDouble(); tx[1].amount = ui.tx_amount_2->text().toDouble();
		tx[2].amount = ui.tx_amount_3->text().toDouble(); tx[3].amount = ui.tx_amount_4->text().toDouble();
		tx[4].amount = ui.tx_amount_5->text().toDouble(); tx[5].amount = ui.tx_amount_6->text().toDouble();
		tx[6].amount = ui.tx_amount_7->text().toDouble();

		// address copy
		tx[0].address = ui.tx_addr->text(); tx[1].address = ui.tx_addr_2->text();
		tx[2].address = ui.tx_addr_3->text(); tx[3].address = ui.tx_addr_4->text();
		tx[4].address = ui.tx_addr_5->text(); tx[5].address = ui.tx_addr_6->text();
		tx[6].address = ui.tx_addr_7->text();

		// mining copy
		tx[0].check_mining = ui.tx_mining->text(); tx[1].check_mining = ui.tx_mining_2->text();
		tx[2].check_mining = ui.tx_mining_3->text(); tx[3].check_mining = ui.tx_mining_4->text();
		tx[4].check_mining = ui.tx_mining_5->text(); tx[5].check_mining = ui.tx_mining_6->text();
		tx[6].check_mining = ui.tx_mining_7->text();

		// txid copy
		tx[0].txid = ui.tx_id->text(); tx[1].txid = ui.tx_id_2->text();
		tx[2].txid = ui.tx_id_3->text(); tx[3].txid = ui.tx_id_4->text();
		tx[4].txid = ui.tx_id_5->text(); tx[5].txid = ui.tx_id_6->text();
		tx[6].txid = ui.tx_id_7->text();

		// send/receive copy
		tx[0].send_receive = ui.tx_send->text(); tx[1].send_receive = ui.tx_send_2->text();
		tx[2].send_receive = ui.tx_send_3->text(); tx[3].send_receive = ui.tx_send_4->text();
		tx[4].send_receive = ui.tx_send_5->text(); tx[5].send_receive = ui.tx_send_6->text();
		tx[6].send_receive = ui.tx_send_7->text();
	}

	void view_tx_list(TX_Info *tx)
	{
		// amount copy
		ui.tx_amount->setText(QString::number(tx[0].amount)); ui.tx_amount_2->setText(QString::number(tx[1].amount));
		ui.tx_amount_3->setText(QString::number(tx[2].amount)); ui.tx_amount_4->setText(QString::number(tx[3].amount));
		ui.tx_amount_5->setText(QString::number(tx[4].amount)); ui.tx_amount_6->setText(QString::number(tx[5].amount));
		ui.tx_amount_7->setText(QString::number(tx[6].amount));

		// address copy
		ui.tx_addr->setText(tx[0].address); ui.tx_addr_2->setText(tx[1].address);
		ui.tx_addr_3->setText(tx[2].address); ui.tx_addr_4->setText(tx[3].address);
		ui.tx_addr_5->setText(tx[4].address); ui.tx_addr_6->setText(tx[5].address);
		ui.tx_addr_7->setText(tx[6].address);

		// mining copy
		ui.tx_mining->setText(tx[0].check_mining); ui.tx_mining_2->setText(tx[1].check_mining);
		ui.tx_mining_3->setText(tx[2].check_mining); ui.tx_mining_4->setText(tx[3].check_mining);
		ui.tx_mining_5->setText(tx[4].check_mining); ui.tx_mining_6->setText(tx[5].check_mining);
		ui.tx_mining_7->setText(tx[6].check_mining);

		// txid copy
		ui.tx_id->setText(tx[0].txid); ui.tx_id_2->setText(tx[1].txid);
		ui.tx_id_3->setText(tx[2].txid); ui.tx_id_4->setText(tx[3].txid);
		ui.tx_id_5->setText(tx[4].txid); ui.tx_id_6->setText(tx[5].txid);
		ui.tx_id_7->setText(tx[6].txid);

		// send/receive copy
		ui.tx_send->setText(tx[0].send_receive); ui.tx_send_2->setText(tx[1].send_receive);
		ui.tx_send_3->setText(tx[2].send_receive); ui.tx_send_4->setText(tx[3].send_receive);
		ui.tx_send_5->setText(tx[4].send_receive); ui.tx_send_6->setText(tx[5].send_receive);
		ui.tx_send_7->setText(tx[6].send_receive);
	}


private slots:
	void on_closeBtn_clicked();
	void on_createWallet_clicked();
	void on_create_addr_clicked();
	void on_mining_clicked();
	void on_resetwallet_clicked();
	void on_send_clicked();
	void on_resettx_clicked();
	void on_resetinfo_clicked();

	void on_block1_clicked();
	void on_block2_clicked();
	void on_block3_clicked();
	void on_block4_clicked();
	void on_block5_clicked();
	void on_block6_clicked();
	void on_block7_clicked();
	void on_block8_clicked();
	void on_block9_clicked();
	void on_block10_clicked();

private:
	Ui::BTL_GUIClass ui;
};