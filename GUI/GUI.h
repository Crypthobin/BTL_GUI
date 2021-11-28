#pragma once


#include <QtWidgets/QMainWindow>
#include "ui_GUI.h"

#include "ui_blockinfo.h"
#include <Windows.h>
#include <QJsonObject>
#include <QJsonDocument>
#include <QByteArray>
#include <QJsonArray>
#include <QList>
#include <QDebug>
#include <QFile>
#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QWidget> 
#include <Qt>
#include <Qmessagebox.h>
#include <qfontdatabase.h>

#define PORT 1111
#define RPC_PORT 1234
#define NETWORK "-pqcnet"
#define DATA_DIR "C:\data"
#define NODE "bitcoin-cli -pqcnet -datadir=../data -rpcport=1234 "

#define BLOCK_LIST_COUNT 100 // 블록 목록 갱신 갯수 -> 변경 시 void BTL_GUI::on_resetinfo_clicked()의 출력 수 수정
#define MINING_LIST_COUNT 100

#define TX_PAGE_COUNT 10
#define TX_LIST_COUNT 100 // 거래 내역 갱신 갯수 -> 변경 시 출력을 위해 init_tx_list(TX_Info *tx)와 view_tx_list(TX_Info *tx) 함수 수정 필요
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

typedef struct mining_Info {
	int save_mining;

	double amount; // 금액
	QString category; // 
	QString time; // 시간
	QString blockhash;
}Mining_info;

typedef struct Block_Info_Struct {
	QString hash;
	QString confirmations;
	QString height;
	QString version;
	QString versionHex;
	QString merkleroot;
	QString time_string;
	QString versions;
	QString mediantime;
	QString nonce;
	QString bits;
	QString difficulty;
	QString chainwork;
	QString nTx;
	QString previousblockhash;
	QString strippedsize;
	QString size;
	QString weight;
	QJsonArray tx_array;

}Block_Info_Struct;






class BlockInfo : public QDialog
{
	Q_OBJECT
public:
	BlockInfo(QWidget * parent = 0);
	Ui::Dialog ui_blockninfo;

	//void ShowBlockInfo(QString* view);
	//void ShowBlockInfo(BlockInfo& block_view);
	void ShowBlockInfo(Block_Info_Struct block_info_struct);
	void Transaction_Info(QStringList* pub, QStringList* sign, QString txid, int* vin_count);
	void ShowTransactionInfo(QStringList pub, QStringList sign, int vin_count);
	QString CmdExe(QString cmd);
	void txinfo(QString txid);
public slots:
	void on_tx_cellClicked();
	void on_backspace_clicked();
	void on_backspace_3_clicked();
private:

};

class GUI : public QMainWindow
{
	Q_OBJECT

public:
	Ui::GUIClass ui;
	GUI(QWidget* parent = Q_NULLPTR);

	void start_demon();

	void Loadwallet();
	void getbalance();
	void addressview();
	void setting();
	//QString blockinfo_parsing(QString blockhash);
	Block_Info_Struct blockinfo_parsing(QString blockhash);
	bool init_blockhash_list(QString* blockhash, int blocklist, QTableWidget** block_group);
	void view_tx_list(TX_Info* tx, int tx_count, QLabel** tx_amount_group, QLabel** tx_addr_group, QLabel** tx_mining_group, QLabel** tx_txid_group, QLabel** tx_send_group);
	QString CmdExe(QString cmd);
	QString parsing_data(QString input, QString target);
	QString wallet_name;
	QString tx_address_parsing(QString _tx, int n);
	// int init_tx_list(TX_Info* tx, QTableWidget** tx_table_group);
	void view_tx_list(TX_Info* tx, int tx_count, QTableWidget** tx_table_group);
	bool Checkwallet();
	void view_mining_list(Mining_info* mining_info, int mining_count, QTableWidget** mining_group);
	int init_mining_list(Mining_info* mining_info, QTableWidget** mining_group);
	int init_tx_list(TX_Info* tx, QTableWidget** tx_table_group);
	void showBlockInfoStatus(QString block);
	void reset_tx()
	{
		ui.stackedWidget->setCurrentWidget(ui.tableWidget_1);
		TX_info transaction[TX_LIST_COUNT] = { 0, };
		TX_info prev_tx[TX_LIST_COUNT] = { 0, };

		QTableWidget* tx_table_group[TX_PAGE_COUNT] = { ui.tableWidget_1,  ui.tableWidget_2 ,ui.tableWidget_3,ui.tableWidget_4, ui.tableWidget_5, ui.tableWidget_6, ui.tableWidget_7,ui.tableWidget_8,ui.tableWidget_9,ui.tableWidget_10 };



		//ui.tableWidget->rowCount() = 지금 row 갯수 가져와줌
		//for ()
		//{
		//	for ()
		//	{
		//		ui.tableWidget_1->setItem(ui.tableWidget_1->rowCount() - 1, 0, new QTableWidgetItem(name));
		//		ui.tableWidget_1->setItem(ui.tableWidget_1->rowCount() - 1, 1, new QTableWidgetItem(name));
		//		ui.tableWidget_1->setRowHeight(ui.tableWidget_1->rowCount() - 1, 40);
		//	}
		//}
		//
		prev_tx[0].save_tx = init_tx_list(prev_tx, tx_table_group);

		int compare_count = 0;
		int tx_start_p = 0;
		int tx_list = 0;
		int tx_count = 0;

		QString cmd;
		QString result;
		QJsonDocument doc;
		QJsonObject tx_obj;
		QJsonArray tx_array;
		QJsonArray tx_array2;

		// 수신 일때, 송신자의 주소를 알기 위한 vin의 정보
		QJsonObject vin_obj;
		QJsonArray vin_array;
		int vin_n;
		QString vin_txid;

		bool iscontinue = true;
		while (iscontinue)
		{
			cmd = NODE "listtransactions \"*\" " + QString::number(TX_SCAN_COUNT) + " " + QString::number(tx_start_p);
			HWND hWndConsole = GetConsoleWindow();
			ShowWindow(hWndConsole, SW_HIDE);
			result = CmdExe(cmd);
			if (result == "[\r\n]")
				break;
			doc = QJsonDocument::fromJson(result.toUtf8());
			tx_array = doc.array();
			tx_count = tx_array.size();

			for (int i = tx_count - 1; i >= 0; i--)
			{
				tx_obj = tx_array[i].toObject();
				transaction[tx_list].send_receive = tx_obj.value("category").toString();
				if (transaction[tx_list].send_receive == "send" || transaction[tx_list].send_receive == "receive")
				{
					transaction[tx_list].txid = tx_obj.value("txid").toString();
					transaction[tx_list].amount = fabs(tx_obj.value("amount").toDouble());
					if (transaction[tx_list].send_receive == "send") // 송신
					{
						cmd = NODE "getrawtransaction " + transaction[tx_list].txid + " true";
						result = CmdExe(cmd);
						doc = QJsonDocument::fromJson(result.toUtf8());
						QJsonObject tx_obj2 = doc.object();

						tx_array2 = tx_obj2["vout"].toArray();

						int a = tx_array2.size();

						for (int k = 0; k < a; k++)
						{
							tx_obj2 = tx_array2[k].toObject();
							if (tx_obj2["value"].toDouble() == transaction[tx_list].amount)
							{
								tx_obj2 = tx_obj2["scriptPubKey"].toObject();
								break;
							}
						}
						transaction[tx_list].address = tx_obj2["address"].toString();
						//transaction[tx_list].address = tx_address_parsing(transaction[tx_list].txid, 0);
					}
					else // 수신
					{
						cmd = NODE "getrawtransaction " + transaction[tx_list].txid + " true";
						result = CmdExe(cmd);
						doc = QJsonDocument::fromJson(result.toUtf8());
						vin_obj = doc.object();

						vin_array = vin_obj["vin"].toArray();
						vin_obj = vin_array[0].toObject();
						vin_n = vin_obj["vout"].toInt();
						vin_txid = vin_obj["txid"].toString();

						transaction[tx_list].address = tx_address_parsing(vin_txid, vin_n);
					}

					// transaction[tx_list].amount = tx_obj.value("amount").toDouble();
					if (tx_obj.value("confirmations").toInt() == 0)
						transaction[tx_list].check_mining = "X";
					else
						transaction[tx_list].check_mining = "O";

					// 이전 최근 목록과 같으면.. 이후 TX copy
					if (transaction[tx_list].txid == prev_tx[compare_count].txid && transaction[tx_list].amount == prev_tx[compare_count].amount)
					{
						if (transaction[tx_list].check_mining != prev_tx[compare_count].check_mining) compare_count++;
						else
						{
							int count = 0;
							for (int j = tx_list; j < tx_list + prev_tx[0].save_tx - compare_count; j++)
							{
								transaction[j].txid = prev_tx[j - tx_list + compare_count].txid;
								transaction[j].address = prev_tx[j - tx_list + compare_count].address;
								transaction[j].amount = prev_tx[j - tx_list + compare_count].amount;
								transaction[j].send_receive = prev_tx[j - tx_list + compare_count].send_receive;
								transaction[j].check_mining = prev_tx[j - tx_list + compare_count].check_mining;
								transaction[j].time = prev_tx[j - tx_list + compare_count].time;
								if (j == TX_LIST_COUNT - 1)
								{
									tx_list++;
									break;
								}
								count++;
							}
							tx_list = tx_list + count;
							iscontinue = false;
							break;
						}
					}
					int time_int = tx_obj.value("time").toInt();
					time_t epch = time_int + 32400;





					std::map<std::string, std::string> Month =
					{ {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"} };



					std::string current_time = std::string(asctime(gmtime(&epch)));

					std::string month = current_time.substr(4, 3); // ex. Apr
					month = Month[month] + "/";
					std::string day = current_time.substr(8, 2) + " "; // ex. 13, 1
					std::string time_str = current_time.substr(11, 8); //+ "\n\0";
					std::string year = current_time.substr(22, 2) + "/";
					current_time = year + month + day + time_str;

					QString time_string = QString::fromStdString(current_time);





					//char* current_time = asctime(gmtime(&epch));
					transaction[tx_list].time = time_string;

					//if (tx_list == 0) transaction[0].tx_obj = tx_obj;
					tx_list++;
				}
				if (tx_list == TX_LIST_COUNT)
				{
					iscontinue = false;
					break;
				}
			}
			tx_start_p += TX_SCAN_COUNT;
		}
		view_tx_list(transaction, tx_list, tx_table_group);
		prev_tx[0].save_tx = tx_list;


	}

	void reset_mining()
	{
		Mining_info mining_info[MINING_LIST_COUNT] = { 0, };
		Mining_info prev_mining_info[MINING_LIST_COUNT] = { 0, };
		QTableWidget* mining_group[MINING_LIST_COUNT] = { ui.mining_table1, ui.mining_table2, ui.mining_table3, ui.mining_table4, ui.mining_table5, ui.mining_table6, ui.mining_table7, ui.mining_table8, ui.mining_table9, ui.mining_table10 };
		//QLabel *tx_mining_group[TX_LIST_COUNT] = { ui.tx_mining,  ui.tx_mining_2 ,ui.tx_mining_3,ui.tx_mining_4, ui.tx_mining_5, ui.tx_mining_6, ui.tx_mining_7 };
		//QLabel *tx_txid_group[TX_LIST_COUNT] = { ui.tx_id,  ui.tx_id_2 ,ui.tx_id_3,ui.tx_id_4, ui.tx_id_5, ui.tx_id_6, ui.tx_id_7 };
		//QLabel *tx_send_group[TX_LIST_COUNT] = { ui.tx_send,  ui.tx_send_2 ,ui.tx_send_3,ui.tx_send_4, ui.tx_send_5, ui.tx_send_6, ui.tx_send_7 };

		prev_mining_info[0].save_mining = init_mining_list(prev_mining_info, mining_group);

		int compare_count = 0;
		int mining_start_p = 0;
		int mining_list = 0;
		int mining_count = 0;

		QString cmd;
		QString result;
		QJsonDocument doc;
		QJsonObject mining_obj;
		QJsonArray mining_array;
		QJsonArray mining_array2;

		// 수신 일때, 송신자의 주소를 알기 위한 vin의 정보
		//QJsonObject vin_obj;
		//QJsonArray vin_array;
		//int vin_n;
		//QString vin_txid;

		bool iscontinue = true;
		while (iscontinue)
		{
			cmd = NODE "listtransactions \"*\" " + QString::number(MINING_LIST_COUNT) + " " + QString::number(mining_start_p);
			result = CmdExe(cmd);
			if (result == "[\r\n]")
				break;
			doc = QJsonDocument::fromJson(result.toUtf8());
			mining_array = doc.array();
			mining_count = mining_array.size();

			for (int i = mining_count - 1; i >= 0; i--)
			{
				mining_obj = mining_array[i].toObject();
				mining_info[mining_list].category = mining_obj.value("category").toString();
				if (mining_info[mining_list].category == "immature" || mining_info[mining_list].category == "generate")
				{
					if (mining_info[mining_list].category == "immature") mining_info[mining_list].category == "immature";
					else mining_info[mining_list].category == "generate";

					mining_info[mining_list].amount = fabs(mining_obj.value("amount").toDouble());
					mining_info[mining_list].blockhash = mining_obj.value("blockhash").toString();

					int time_int = mining_obj.value("time").toInt();
					time_t epch = time_int + 32400;


					std::map<std::string, std::string> Month =
					{ {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"} };


					std::string current_time = std::string(asctime(gmtime(&epch)));



					std::string month = current_time.substr(4, 3); // ex. Apr
					month = Month[month] + "/";
					std::string day = current_time.substr(8, 2) + " "; // ex. 13, 1
					std::string time_str = current_time.substr(11, 8);
					std::string year = current_time.substr(22, 2) + "/";
					current_time = year + month + day + time_str;

					QString time_string = QString::fromStdString(current_time);
					
					mining_info[mining_list].time = time_string;

					//if (t x_obj.value("confirmations").toInt() == 0)
					//	transaction[tx_list].check_mining = "Mining Wait....";
					//else
					//	transaction[tx_list].check_mining = "Mining Success!";

					// 이전 최근 목록과 같으면.. 이후 TX copy
					if (mining_info[mining_list].blockhash == prev_mining_info[compare_count].blockhash && mining_info[mining_list].time == prev_mining_info[compare_count].time)
					{
						if (mining_info[mining_list].category != prev_mining_info[compare_count].category) compare_count++;
						else
						{
							int count = 0;
							for (int j = mining_list; j < mining_list + prev_mining_info[0].save_mining - compare_count; j++)
							{
								mining_info[j].blockhash = prev_mining_info[j - mining_list + compare_count].blockhash;
								mining_info[j].category = prev_mining_info[j - mining_list + compare_count].category;
								mining_info[j].amount = prev_mining_info[j - mining_list + compare_count].amount;
								mining_info[j].time = prev_mining_info[j - mining_list + compare_count].time;
								// mining_info[j].check_mining = prev_mining_info[j - mining_list + compare_count].check_mining;
								if (j == MINING_LIST_COUNT - 1)
								{
									mining_list++;
									break;
								}
								count++;
							}
							mining_list = mining_list + count;
							iscontinue = false;
							break;
						}
					}
					//if (tx_list == 0) transaction[0].tx_obj = tx_obj;
					mining_list++;
				}
				if (mining_list == MINING_LIST_COUNT)
				{
					iscontinue = false;
					break;
				}
			}
			mining_start_p += TX_SCAN_COUNT;
		}
		view_mining_list(mining_info, mining_list, mining_group);
		prev_mining_info[0].save_mining = mining_list;
	}
	void reset_dashboard()
	{
		QString cmd = NODE "getblockcount"; // 블록 갯수
		QString getblockcount = CmdExe(cmd);
		cmd = NODE "getconnectioncount"; // Node 수
		QString getconnectioncount = CmdExe(cmd);

		int blocklist, temp, prev_hashcount = 0;
		int blockcount = getblockcount.toInt();
		if (blockcount < BLOCK_LIST_COUNT)
		{
			blocklist = blockcount;
			temp = -1;
		}
		else
		{
			blocklist = BLOCK_LIST_COUNT;
			temp = blockcount - BLOCK_LIST_COUNT;
		}

		QTableWidget* dashbaord_group[MINING_LIST_COUNT] = { ui.dashboard_table1, ui.dashboard_table2, ui.dashboard_table3, ui.dashboard_table4, ui.dashboard_table5, ui.dashboard_table6, ui.dashboard_table7, ui.dashboard_table8, ui.dashboard_table9, ui.dashboard_table10 };
		QString blockhash[BLOCK_LIST_COUNT];
		QString prev_blockhash[BLOCK_LIST_COUNT];

		init_blockhash_list(prev_blockhash, blocklist, dashbaord_group);

		if (blockcount != 0)
		{
			for (int i = blockcount; i > temp; i--)
			{
				cmd = NODE "getblockhash " + QString::number(i);
				blockhash[blockcount - i] = CmdExe(cmd);
				if (blockhash[blockcount - i] == prev_blockhash[prev_hashcount])
				{
					for (int j = i; j > temp; j--)
					{
						blockhash[blockcount - j] = prev_blockhash[prev_hashcount];
						prev_hashcount++;
					}
					break;
				}
			}
			for (int i = 0; i < blocklist; i++)
			{
				dashbaord_group[i / 10]->setItem(i % 10, 0, new QTableWidgetItem(QString::number(blockcount - i)));
				dashbaord_group[i / 10]->item(i % 10, 0)->setTextAlignment(Qt::AlignCenter);
				dashbaord_group[i / 10]->setItem(i % 10, 1, new QTableWidgetItem(blockhash[i]));
				dashbaord_group[i / 10]->item(i % 10, 1)->setTextAlignment(Qt::AlignCenter);
			}
			ui.blockcount->setText(getblockcount);
			ui.usercount->setText(getconnectioncount);
		}
		else if(blockcount == 0)
		{
			ui.blockcount->setText(getblockcount);
			ui.usercount->setText(getconnectioncount);
		}
	}
	
	bool block_scan()
	{
		QString cmd = NODE "getblockchaininfo"; // 블록 정보 불러오기
		QString getblockcount;

		QJsonDocument doc;
		QJsonObject JON;
		while (true)
		{
			getblockcount = CmdExe(cmd);

			doc = QJsonDocument::fromJson(getblockcount.toUtf8());
			JON = doc.object();

			if (JON.value("headers").toInt() == JON.value("blocks").toInt()) return true;
		}
	}

	void Loading()
	{
		ui.widget_2->show();
		getbalance();
		addressview();
		reset_tx();
		reset_mining();
		reset_dashboard();
	}
	void showBlockInfoStatus2(QString block); // 거래내역만 처리
		
private slots:

	void on_WalletButton_clicked();
	void on_TransactionButton_clicked();
	void on_MiningButton_clicked();
	void on_DashBoardButton_clicked();
	void on_amount_textChanged();
	void on_addr_textChanged();
	//void on_addButton_clicked();
	void on_CreateWalletButton_clicked();
	void on_RightButtonTransaction_clicked();
	void on_LeftButtonTransaction_clicked();
	void on_RightButtonMining_clicked();
	void on_LeftButtonMining_clicked();
	void on_RightButtonDashboard_clicked();
	void on_LeftButtonDashboard_clicked();
	void on_WalletRefresh_clicked();
	void on_GetMining_clicked();
	void on_SendButton_clicked();
	void on_resettx_clicked();
	void on_resetmining_clicked();
	void on_resetdashboard_clicked();
	void on_closeButton_clicked();

	void on_dashboard_table1_cellClicked();
	void on_dashboard_table2_cellClicked();
	void on_dashboard_table3_cellClicked();
	void on_dashboard_table4_cellClicked();
	void on_dashboard_table5_cellClicked();
	void on_dashboard_table6_cellClicked();
	void on_dashboard_table7_cellClicked();
	void on_dashboard_table8_cellClicked();
	void on_dashboard_table9_cellClicked();
	void on_dashboard_table10_cellClicked();


	void on_mining_table1_cellClicked();
	void on_mining_table2_cellClicked();
	void on_mining_table3_cellClicked();
	void on_mining_table4_cellClicked();
	void on_mining_table5_cellClicked();
	void on_mining_table6_cellClicked();
	void on_mining_table7_cellClicked();
	void on_mining_table8_cellClicked();
	void on_mining_table9_cellClicked();
	void on_mining_table10_cellClicked();

	void on_tableWidget_1_cellClicked();
	void on_tableWidget_2_cellClicked();
	void on_tableWidget_3_cellClicked();
	void on_tableWidget_4_cellClicked();
	void on_tableWidget_5_cellClicked();
	void on_tableWidget_6_cellClicked();
	void on_tableWidget_7_cellClicked();
	void on_tableWidget_8_cellClicked();
	void on_tableWidget_9_cellClicked();
	void on_tableWidget_10_cellClicked();
	
private:

};
