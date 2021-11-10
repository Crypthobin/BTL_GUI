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

#define BLOCK_LIST_COUNT 10 // 블록 목록 갱신 갯수 -> 변경 시 void BTL_GUI::on_resetinfo_clicked()의 출력 수 수정

#define TX_LIST_COUNT 7 // 거래 내역 갱신 갯수 -> 변경 시 출력을 위해 init_tx_list(TX_Info *tx)와 view_tx_list(TX_Info *tx) 함수 수정 필요
#define TX_SCAN_COUNT 10000 // 최근 TX_SCAN_COUNT개의 거래 내역을 조회( TX_SCAN_COUNT번을 주기로 TX_LIST_COUNT만큼 검색 될 때까지 반복 )

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
		//system("start /min bitcoind -pqcnet -txindex -port=1111 -datadir=../data -rpcport=1234");
		//system("start /min cmd");
		WinExec("bitcoind -pqcnet -txindex -port=1111 -datadir=../data -rpcport=1234", SW_HIDE);
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

		cmd = cmd + wallet_name;/* + " 2>&1"*/
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

	QString tx_address_parsing(QString _tx, int n)
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

	void init_blockhash_list(QString *blockhash, int blocklist, QPushButton **block_group)
	{
		for (int i = 0; i < blocklist; i++)
		{
			blockhash[i] = block_group[i]->text();
		}
	}

	int init_tx_list(TX_Info *tx, QLabel **tx_amount_group, QLabel **tx_addr_group, QLabel **tx_mining_group, QLabel **tx_txid_group, QLabel **tx_send_group)
	{
		int List_count = 0;

		for (int i = 0; i < TX_LIST_COUNT; i++)
		{
			tx[i].txid = tx_txid_group[i]->text();
			if (tx[i].txid == NULL) return i;

			tx[i].amount = tx_amount_group[i]->text().toDouble();
			tx[i].address = tx_addr_group[i]->text();
			tx[i].check_mining = tx_mining_group[i]->text();
			tx[i].send_receive = tx_send_group[i]->text();
		}
		return TX_LIST_COUNT;
	}

	void view_tx_list(TX_Info *tx, int tx_count, QLabel **tx_amount_group, QLabel **tx_addr_group, QLabel **tx_mining_group, QLabel **tx_txid_group, QLabel **tx_send_group)
	{
		for (int i = 0; i < tx_count; i++)
		{
			tx_amount_group[i]->setText(QString::number(tx[i].amount));
			tx_addr_group[i]->setText(tx[i].address);
			tx_mining_group[i]->setText(tx[i].check_mining);
			tx_txid_group[i]->setText(tx[i].txid);
			tx_send_group[i]->setText(tx[i].send_receive);
		}
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