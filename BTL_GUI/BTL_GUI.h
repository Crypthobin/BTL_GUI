#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BTL_GUI.h"
#include <QJsonObject>
#include <QJsonDocument>

class BTL_GUI : public QMainWindow
{
	Q_OBJECT

public:
	BTL_GUI(QWidget *parent = Q_NULLPTR);
	QString BTL_GUI::CmdExe(QString cmd);
	QString wallet_name;
	void start_demon()
	{
		system("start cmd /c bitcoind -pqcnet");
		//STARTUPINFO StartupInfo = { 0 };
		//PROCESS_INFORMATION ProcessInfo;
		//char * cmd = "bitcoind -pqcnet";
		//wchar_t wtext[20];
		//mbstowcs(wtext, cmd, strlen(cmd) + 1);
		//LPWSTR ptr = wtext;
		//StartupInfo.cb = sizeof(STARTUPINFO);
		//CreateProcess(NULL, ptr, NULL, NULL, 0, 0, NULL, NULL, &StartupInfo, &ProcessInfo);
		//QString cmd = "bitcoind -pqcnet ";
		//CmdExe(cmd);
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
		QString cmd = "bitcoin-cli -pqcnet listwalletdir ";

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
		QString cmd = "bitcoin-cli -pqcnet loadwallet ";

		cmd = cmd + wallet_name + " 2>&1";
		CmdExe(cmd);
		// ui.walletlabel->setText(wallet_name);
	}

	void getbalance()
	{
		QString cmd = "bitcoin-cli -pqcnet getbalance ";
		QString result = CmdExe(cmd);
		ui.balancelabel->setText(result);
	}

	void addressview()
	{
		QString cmd = "bitcoin-cli -pqcnet listreceivedbyaddress 1 true ";
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

private:
	Ui::BTL_GUIClass ui;
};