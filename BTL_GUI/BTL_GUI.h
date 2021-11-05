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

class BTL_GUI : public QMainWindow
{
	Q_OBJECT

public:
	BTL_GUI(QWidget *parent = Q_NULLPTR);
	QString BTL_GUI::CmdExe(QString cmd);
	QString wallet_name;

	QList<QString> address; // 상대방의 계좌 주소
	QList<int> amount; // 송금 금액
	QList<int> senceive; // 송신 : 1, 수신 : 2

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


private slots:
	void on_closeBtn_clicked();
	void on_createWallet_clicked();
	void on_create_addr_clicked();
	void on_mining_clicked();
	void on_resetwallet_clicked();
	void on_send_clicked();
	void on_resettx_clicked();

private:
	Ui::BTL_GUIClass ui;
};