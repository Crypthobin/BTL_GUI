#include "GUI.h"
#include <string>
#include <map>



GUI::GUI(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	start_demon();


	QPalette palette;
	QTableWidget* widget_group[10] = { ui.tableWidget_1 , ui.tableWidget_2 , ui.tableWidget_3 , ui.tableWidget_4 , ui.tableWidget_5 , ui.tableWidget_6, ui.tableWidget_7, ui.tableWidget_8, ui.tableWidget_9, ui.tableWidget_10 };
	QTableWidget* mining_group[10] = { ui.mining_table1, ui.mining_table2, ui.mining_table3, ui.mining_table4, ui.mining_table5, ui.mining_table6, ui.mining_table7, ui.mining_table8, ui.mining_table9, ui.mining_table10 };
	QTableWidget* dashboard_group[10] = { ui.dashboard_table1, ui.dashboard_table2, ui.dashboard_table3, ui.dashboard_table4, ui.dashboard_table5, ui.dashboard_table6, ui.dashboard_table7, ui.dashboard_table8, ui.dashboard_table9, ui.dashboard_table10 };

	palette.setColor(QPalette::Window, QColor(22, 27, 34));
	setAutoFillBackground(true);
	setPalette(palette);

	//placeholder 설정
	ui.WalletNameInput->setPlaceholderText(QString::fromLocal8Bit("지갑 이름 입력"));
	ui.addr->setPlaceholderText(QString::fromLocal8Bit("수신 주소 입력"));
	ui.amount->setPlaceholderText(QString::fromLocal8Bit("송금 금액 입력"));
	QTableWidgetItem dd;
	// Table 폰트 및 크기 설정
	QFont fnt;
	fnt.setPixelSize(16);
	fnt.setFamily(QString::fromLocal8Bit("빙그레체"));
	for (int i = 0; i < 10; i++)
	{
		widget_group[i]->setFont(fnt);
		widget_group[i]->verticalHeader()->setFont(fnt);
		widget_group[i]->horizontalHeader()->setFont(fnt);
		//widget_group[i]->columnWidth(100);
		widget_group[i]->setColumnWidth(0, 250);
		widget_group[i]->setColumnWidth(1, 100);
		widget_group[i]->setColumnWidth(2, 100);
		widget_group[i]->setColumnWidth(3, 620);
		widget_group[i]->setColumnWidth(4, 70);

		mining_group[i]->setFont(fnt);
		mining_group[i]->verticalHeader()->setFont(fnt);
		mining_group[i]->horizontalHeader()->setFont(fnt);
		mining_group[i]->setColumnWidth(0, 250);
		mining_group[i]->setColumnWidth(1, 150);
		mining_group[i]->setColumnWidth(2, 700);

		dashboard_group[i]->setFont(fnt);
		dashboard_group[i]->verticalHeader()->setFont(fnt);
		dashboard_group[i]->horizontalHeader()->setFont(fnt);
		dashboard_group[i]->setColumnWidth(0, 200);
		dashboard_group[i]->setColumnWidth(1, 850);

		for (int j = 0; j < 10; j++)
		{
			widget_group[i]->setRowHeight(j, 25);
			dashboard_group[i]->setRowHeight(j, 25);
			mining_group[i]->setRowHeight(j, 25);
		}

	}

	//acount 숫자만 받도록 설정
	ui.amount->setValidator(new QDoubleValidator(0.0, 100.0, 10, this));


	// 초기 페이지 설정
	ui.transactionBoard->setCurrentWidget(ui.transaction_page1);
	ui.miningBoard->setCurrentWidget(ui.mining_page1);
	ui.dashboard->setCurrentWidget(ui.dashboard_page1);
	ui.widget_2->hide();


}
int runCmd(const char* cmd, std::string& outOutput) {

	HANDLE g_hChildStd_OUT_Rd = NULL;
	HANDLE g_hChildStd_OUT_Wr = NULL;
	HANDLE g_hChildStd_ERR_Rd = NULL;
	HANDLE g_hChildStd_ERR_Wr = NULL;

	SECURITY_ATTRIBUTES sa;
	// Set the bInheritHandle flag so pipe handles are inherited.
	sa.nLength = sizeof(SECURITY_ATTRIBUTES);
	sa.bInheritHandle = TRUE;
	sa.lpSecurityDescriptor = NULL;
	if (!CreatePipe(&g_hChildStd_ERR_Rd, &g_hChildStd_ERR_Wr, &sa, 0)) { return 1; } // Create a pipe for the child process's STDERR.
	if (!SetHandleInformation(g_hChildStd_ERR_Rd, HANDLE_FLAG_INHERIT, 0)) { return 1; } // Ensure the read handle to the pipe for STDERR is not inherited.
	if (!CreatePipe(&g_hChildStd_OUT_Rd, &g_hChildStd_OUT_Wr, &sa, 0)) { return 1; } // Create a pipe for the child process's STDOUT.
	if (!SetHandleInformation(g_hChildStd_OUT_Rd, HANDLE_FLAG_INHERIT, 0)) { return 1; } // Ensure the read handle to the pipe for STDOUT is not inherited

	PROCESS_INFORMATION piProcInfo;
	STARTUPINFOA siStartInfo;
	bool bSuccess = FALSE;

	// Set up members of the PROCESS_INFORMATION structure.
	ZeroMemory(&piProcInfo, sizeof(PROCESS_INFORMATION));

	// Set up members of the STARTUPINFO structure.
	// This structure specifies the STDERR and STDOUT handles for redirection.
	ZeroMemory(&siStartInfo, sizeof(STARTUPINFO));
	siStartInfo.cb = sizeof(STARTUPINFO);
	siStartInfo.hStdError = g_hChildStd_ERR_Wr;
	siStartInfo.hStdOutput = g_hChildStd_OUT_Wr;
	siStartInfo.dwFlags |= STARTF_USESTDHANDLES;

	// Create the child process.
	bSuccess = CreateProcessA(
		NULL,             // program name
		(char*)cmd,       // command line
		NULL,             // process security attributes
		NULL,             // primary thread security attributes
		TRUE,             // handles are inherited
		CREATE_NO_WINDOW, // creation flags (this is what hides the window)
		NULL,             // use parent's environment
		NULL,             // use parent's current directory
		&siStartInfo,     // STARTUPINFO pointer
		&piProcInfo       // receives PROCESS_INFORMATION
	);

	CloseHandle(g_hChildStd_ERR_Wr);
	CloseHandle(g_hChildStd_OUT_Wr);

	// read output
#define BUFSIZE 4096
	DWORD dwRead;
	CHAR chBuf[BUFSIZE];
	bool bSuccess2 = FALSE;
	for (;;) { // read stdout
		bSuccess2 = ReadFile(g_hChildStd_OUT_Rd, chBuf, BUFSIZE, &dwRead, NULL);
		if (!bSuccess2 || dwRead == 0) break;
		std::string s(chBuf, dwRead);
		outOutput += s;
	}
	dwRead = 0;
	for (;;) { // read stderr
		bSuccess2 = ReadFile(g_hChildStd_ERR_Rd, chBuf, BUFSIZE, &dwRead, NULL);
		if (!bSuccess2 || dwRead == 0) break;
		std::string s(chBuf, dwRead);
		outOutput += s;
	}

	// The remaining open handles are cleaned up when this process terminates.
	// To avoid resource leaks in a larger application,
	// close handles explicitly.
	return 0;
}
QString GUI::CmdExe(QString cmd)
{
	QString ret = NULL;

	QByteArray ba = cmd.toLocal8Bit();
	const char* c_cmd = ba.data();

	std::string str;
	runCmd(c_cmd, str);

	size_t s_size = str.size();
	if (s_size > 2)
	{
		if (str[s_size - 2] == '\r')
			str = str.substr(0, s_size - 2);
	}

	//ret.append(str.c_str());

	//ret.replace("\n", "\r\n");

	return QString::fromStdString(str);
}
QString BlockInfo::CmdExe(QString cmd)
{
	QString ret = NULL;

	QByteArray ba = cmd.toLocal8Bit();
	const char* c_cmd = ba.data();

	std::string str;
	runCmd(c_cmd, str);

	size_t s_size = str.size();
	if (s_size > 2)
	{
		if (str[s_size - 2] == '\r')
			str = str.substr(0, s_size - 2);
	}

	//ret.append(str.c_str());

	//ret.replace("\n", "\r\n");

	return QString::fromStdString(str);
}
QString GUI::parsing_data(QString input, QString target)
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
void GUI::Loadwallet()
{
	QString cmd = NODE "loadwallet ";

	cmd = cmd + wallet_name;/* + " 2>&1"*/
	CmdExe(cmd);
	// ui.walletlabel->setText(wallet_name);
	setting();
}
void GUI::getbalance()
{
	QString cmd = NODE "getbalance ";
	QString result = CmdExe(cmd);
	ui.getbalance_info->setText(result);
}
void GUI::addressview()
{
	QString cmd = NODE "listreceivedbyaddress 1 true ";
	QString result = CmdExe(cmd);
	result = parsing_data(result, "address");
	ui.address_info->setText(result);
}
void GUI::setting()
{
	// Loadwallet();
	ui.WalletName->setText(wallet_name);
	getbalance();
	addressview();


}



Block_Info_Struct GUI::blockinfo_parsing(QString blockhash)
{//이부분 구조체 써서 다 넘겨주는거로 바꿔봅시다!
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

	time_t epoch = time_int + 32400;
	//char* current_time = asctime(gmtime(&epch));


	std::map<std::string, std::string> Month =
	{ {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"} };


	std::string current_time = std::string(asctime(gmtime(&epoch)));


	
	std::string month = current_time.substr(4, 3); // ex. Apr
	month = Month[month] + "/";
	std::string day = current_time.substr(8, 2) + " "; // ex. 13, 1
	std::string time_str = current_time.substr(11, 8) + "\n\0";
	std::string year = current_time.substr(22, 2) + "/";
	current_time = year + month + day + time_str;

	QString time_string = QString::fromStdString(current_time);



	//// 출력
	//QString view = "hash : " + hash + "\nconfirmations : " + confirmations + "\nheight : " + height + "\nversion : " + versions + \
	//	"\nversionHex : " + versionHex + "\nmerkleroot : " + merkleroot + "\ntime : " + time + "version : " + version + \
	//	"\nmediantime : " + mediantime + "\nnonce : " + nonce + "\nbits : " + bits + "\ndifficulty : " + difficulty + \
	//	"\nchainwork : " + chainwork + "\nnTx : " + nTx + "\npreviousblockhash : " + previousblockhash + "\nstrippedsize : " + strippedsize + \
	//	"\nsize : " + size + "\nweight : " + weight + "\nTX : \n";

	Block_Info_Struct block_info_struct = { hash, confirmations, height, version, versionHex, merkleroot, time_string, versions, mediantime, nonce, bits, difficulty, chainwork, nTx, previousblockhash, strippedsize, size, weight, tx_array };



	return block_info_struct;
}

QString GUI::tx_address_parsing(QString _tx, int n)
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



int GUI::init_tx_list(TX_Info* tx, QTableWidget** tx_table_group)
{
	int List_count = 0;


	for (int i = 0; i < TX_LIST_COUNT; i++)
	{
		if (tx_table_group[i / 10]->item(i % 10, 0) == NULL) return i;
		tx[i].time = (tx_table_group[i / 10]->item(i % 10, 0)->data(Qt::DisplayRole).toString());//날짜
		tx[i].amount = (tx_table_group[i / 10]->item(i % 10, 1)->data(Qt::DisplayRole).toDouble());//금액
		tx[i].send_receive = (tx_table_group[i / 10]->item(i % 10, 2)->data(Qt::DisplayRole).toString());//송수신
		tx[i].address = (tx_table_group[i / 10]->item(i % 10, 3)->data(Qt::DisplayRole).toString());//주소
		tx[i].check_mining = (tx_table_group[i / 10]->item(i % 10, 4)->data(Qt::DisplayRole).toString());//채굴여부
	}
	return TX_LIST_COUNT;
}
void GUI::view_tx_list(TX_Info* tx, int tx_count, QTableWidget** tx_table_group)
{

	for (int i = 0; i < tx_count; i++)
	{
		tx_table_group[i / 10]->setItem(i % 10, 0, new QTableWidgetItem(tx[i].time)); // 날짜
		tx_table_group[i / 10]->item(i % 10, 0)->setTextAlignment(Qt::AlignCenter);
		tx_table_group[i / 10]->setItem(i % 10, 1, new QTableWidgetItem(QString::number(tx[i].amount))); // 금액
		tx_table_group[i / 10]->item(i % 10, 1)->setTextAlignment(Qt::AlignCenter);
		tx_table_group[i / 10]->setItem(i % 10, 2, new QTableWidgetItem(tx[i].send_receive)); // 송/수신
		tx_table_group[i / 10]->item(i % 10, 2)->setTextAlignment(Qt::AlignCenter);
		tx_table_group[i / 10]->setItem(i % 10, 3, new QTableWidgetItem(tx[i].address)); // 주소
		tx_table_group[i / 10]->item(i % 10, 3)->setTextAlignment(Qt::AlignLeft);
		tx_table_group[i / 10]->setItem(i % 10, 4, new QTableWidgetItem(tx[i].check_mining)); // 채굴
		tx_table_group[i / 10]->item(i % 10, 4)->setTextAlignment(Qt::AlignCenter);
		
		ui.txlist->setItem(i, 0, new QTableWidgetItem(tx[i].txid));


	}
}

void GUI::view_mining_list(Mining_info* mining_info, int mining_count, QTableWidget** mining_group)
{
	for (int i = 0; i < mining_count; i++)
	{
		mining_group[i / 10]->setItem(i % 10, 0, new QTableWidgetItem(mining_info[i].time));
		mining_group[i / 10]->item(i % 10, 0)->setTextAlignment(Qt::AlignCenter);
		mining_group[i / 10]->setItem(i % 10, 1, new QTableWidgetItem(QString::number(mining_info[i].amount)));
		mining_group[i / 10]->item(i % 10, 1)->setTextAlignment(Qt::AlignCenter);
		mining_group[i / 10]->setItem(i % 10, 2, new QTableWidgetItem(mining_info[i].blockhash));
		mining_group[i / 10]->item(i % 10, 2)->setTextAlignment(Qt::AlignCenter);

	}
}















void GUI::on_WalletButton_clicked()
{
	ui.stackedWidget->setCurrentWidget(ui.page_1);
}
void GUI::on_TransactionButton_clicked()
{
	ui.stackedWidget->setCurrentWidget(ui.page_2);
}
void GUI::on_MiningButton_clicked()
{
	ui.stackedWidget->setCurrentWidget(ui.page_3);
}
void GUI::on_DashBoardButton_clicked()
{
	ui.stackedWidget->setCurrentWidget(ui.page_4);
}
void GUI::on_addr_textChanged()
{
	int length = ui.addr->toPlainText().length();
	if (length == 43 || length == 0)
	{
		ui.addrstatus->setText(QString::fromLocal8Bit(""));
	}
	else if (0 < length && length < 43)
	{
		ui.send_result->setText(QString::fromLocal8Bit(""));
		ui.addrstatus->setText(QString::fromLocal8Bit("주소가 너무 짧습니다"));
	}
	else if (length > 43)
	{
		ui.send_result->setText(QString::fromLocal8Bit(""));
		ui.addrstatus->setText(QString::fromLocal8Bit("주소가 너무 깁니다"));
	}


}
void GUI::on_amount_textChanged()
{
	FLOAT amount = ui.amount->text().toFloat();
	QString aa = ui.getbalance_info->text();
	FLOAT getbalanceinfo = ui.getbalance_info->text().toFloat();
	if (amount > getbalanceinfo)
	{
		ui.amountstatus->setText(QString::fromLocal8Bit("내가 가진 금액을 초과했습니다"));
	}
	else if (amount <= getbalanceinfo)
	{
		ui.amountstatus->setText(QString::fromLocal8Bit(""));
	}
}
void GUI::on_RightButtonTransaction_clicked()
{
	if ((ui.transactionBoard->currentIndex()) != 9)
	{
		ui.transactionBoard->setCurrentIndex(ui.transactionBoard->currentIndex() + 1);
	}
}
void GUI::on_LeftButtonTransaction_clicked()
{
	if ((ui.transactionBoard->currentIndex()) != 0)
	{
		ui.transactionBoard->setCurrentIndex(ui.transactionBoard->currentIndex() - 1);
	}

}
void GUI::on_RightButtonMining_clicked()
{
	if ((ui.miningBoard->currentIndex()) != 9)
	{
		ui.miningBoard->setCurrentIndex(ui.miningBoard->currentIndex() + 1);
	}
}
void GUI::on_LeftButtonMining_clicked()
{
	if ((ui.miningBoard->currentIndex()) != 0)
	{
		ui.miningBoard->setCurrentIndex(ui.miningBoard->currentIndex() - 1);
	}
}
void GUI::on_RightButtonDashboard_clicked()
{
	if ((ui.dashboard->currentIndex()) != 9)
	{
		ui.dashboard->setCurrentIndex(ui.dashboard->currentIndex() + 1);
	}
}
void GUI::on_LeftButtonDashboard_clicked()
{
	if ((ui.dashboard->currentIndex()) != 0)
	{
		ui.dashboard->setCurrentIndex(ui.dashboard->currentIndex() - 1);
	}
}
void GUI::start_demon()
{
	WinExec("bitcoind -pqcnet -txindex -port=1111 -datadir=../data -rpcport=1234", SW_HIDE);
	QString cmd = NODE "addnode \"192.168.0.27:1111\" \"add\"";
	Sleep(1000);
	CmdExe(cmd);
}



void GUI::on_CreateWalletButton_clicked()
{
	QString result;
	QString cmd;
	QString inputText;


	cmd = NODE "createwallet ";

	inputText = ui.WalletNameInput->toPlainText(); // text 가져오기

	cmd = cmd + inputText;

	result = CmdExe(cmd);

	wallet_name = parsing_data(result, "name");

	cmd = NODE "getnewaddress";
	CmdExe(cmd);

	setting();

	ui.WalletName->setText(inputText);
	ui.stackedWidget->setCurrentWidget(ui.page_1);

	Loading();

}
bool GUI::Checkwallet()
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

void GUI::on_WalletRefresh_clicked()
{
	getbalance();
	addressview();

}

void GUI::on_GetMining_clicked()
{
	QString cmd = NODE "-generate 1";

	QString result = CmdExe(cmd);

	result = parsing_data(result, "blocks");

	cmd = NODE "getblock " + result;

	result = CmdExe(cmd);

	QJsonDocument doc = QJsonDocument::fromJson(result.toUtf8());
	QJsonObject JON = doc.object();

	//QJsonArray jsonArray = JON["tx"].toArray();
	//int a = jsonArray.size();
	//QString category = jsonArray.toObject().value("ID").toInt();

	QString nonce = QString::number(JON.value("nonce").toInt());
	QString block_hash = JON.value("hash").toString();
	QString difficulty = QString::number(JON.value("difficulty").toDouble());
	QString tx_count = QString::number(JON.value("nTx").toInt());

	result = "Mining Success!\nBlock Hash : " + block_hash + "\nnonce : " + nonce + "\ndifficulty : " + difficulty;// +"\nTX : " + tx_count;
	ui.mining_result->setText(result);
	getbalance();
	on_resetmining_clicked();
}
void GUI::on_SendButton_clicked()
{

	int length = ui.addr->toPlainText().length();
	FLOAT amount = ui.amount->text().toFloat();
	QString aa = ui.getbalance_info->text();
	FLOAT getbalanceinfo = ui.getbalance_info->text().toFloat();
	if ((amount < getbalanceinfo) && (length == 43))
	{
		QString address, amount, fee_rate;
		address = ui.addr->toPlainText();
		amount = ui.amount->text();
		fee_rate = "25";

		QString cmd = NODE "-named sendtoaddress address=" + address + " amount=" + amount + " fee_rate=" + fee_rate;
		QString result = CmdExe(cmd);
		if (result.contains("error", Qt::CaseInsensitive))
		{
			ui.send_result->setText(QString::fromLocal8Bit("옳바른 주소 형식이 아닙니다"));
		}
		else
		{
			ui.send_result->setText(QString::fromLocal8Bit("송금완료"));
		}
		
		//ui.sendresult->setText("correct!\nTXID : " + result);
	}
	else
	{
		ui.send_result->setText(QString::fromLocal8Bit("옳바른 주소 또는 금액이 아닙니다"));
	}
	ui.addr->setText("");
	ui.amount->setText("");

}
void GUI::on_resettx_clicked()
{
	reset_tx();
}
void GUI::on_resetmining_clicked()
{
	reset_mining();
}
void BlockInfo::on_backspace_3_clicked()
{
	close();
}

void GUI::on_tableWidget_1_cellClicked()
{
	if (ui.tableWidget_1->item(ui.tableWidget_1->currentRow(), 1) != NULL)
	{
		QString block = ui.txlist->item(ui.tableWidget_1->currentRow(), 0)->data(Qt::DisplayRole).toString();
		BlockInfo* BI = new BlockInfo();
		BI->txinfo(block);
		BI->setModal(true);
		BI->ui_blockninfo.stackedWidget->setCurrentWidget(BI->ui_blockninfo.page_5);
		BI->show();
		BI->setFixedSize(1300, 900);

	}
}
void GUI::on_tableWidget_2_cellClicked()
{
	if (ui.tableWidget_2->item(ui.tableWidget_2->currentRow(), 1) != NULL)
	{
		QString block = ui.txlist->item(ui.tableWidget_2->currentRow() + 10, 0)->data(Qt::DisplayRole).toString();
		BlockInfo* BI = new BlockInfo();
		BI->txinfo(block);
		BI->setModal(true);
		BI->ui_blockninfo.stackedWidget->setCurrentWidget(BI->ui_blockninfo.page_5);
		BI->show();
		BI->setFixedSize(1300, 900);

	}
}
void GUI::on_tableWidget_3_cellClicked()
{
	if (ui.tableWidget_3->item(ui.tableWidget_3->currentRow(), 1) != NULL)
	{
		QString block = ui.txlist->item(ui.tableWidget_3->currentRow() + 20, 0)->data(Qt::DisplayRole).toString();
		BlockInfo* BI = new BlockInfo();
		BI->txinfo(block);
		BI->setModal(true);
		BI->ui_blockninfo.stackedWidget->setCurrentWidget(BI->ui_blockninfo.page_5);
		BI->show();
		BI->setFixedSize(1300, 900);

	}
}
void GUI::on_tableWidget_4_cellClicked()
{
	if (ui.tableWidget_4->item(ui.tableWidget_4->currentRow(), 1) != NULL)
	{
		QString block = ui.txlist->item(ui.tableWidget_4->currentRow() + 30, 0)->data(Qt::DisplayRole).toString();
		BlockInfo* BI = new BlockInfo();
		BI->txinfo(block);
		BI->setModal(true);
		BI->ui_blockninfo.stackedWidget->setCurrentWidget(BI->ui_blockninfo.page_5);
		BI->show();
		BI->setFixedSize(1300, 900);

	}
}
void GUI::on_tableWidget_5_cellClicked()
{
	if (ui.tableWidget_5->item(ui.tableWidget_5->currentRow(), 1) != NULL)
	{
		QString block = ui.txlist->item(ui.tableWidget_5->currentRow() + 40, 0)->data(Qt::DisplayRole).toString();
		BlockInfo* BI = new BlockInfo();
		BI->txinfo(block);
		BI->setModal(true);
		BI->ui_blockninfo.stackedWidget->setCurrentWidget(BI->ui_blockninfo.page_5);
		BI->show();
		BI->setFixedSize(1300, 900);

	}
}
void GUI::on_tableWidget_6_cellClicked()
{
	if (ui.tableWidget_6->item(ui.tableWidget_6->currentRow(), 1) != NULL)
	{
		QString block = ui.txlist->item(ui.tableWidget_6->currentRow() + 50, 0)->data(Qt::DisplayRole).toString();
		BlockInfo* BI = new BlockInfo();
		BI->txinfo(block);
		BI->setModal(true);
		BI->ui_blockninfo.stackedWidget->setCurrentWidget(BI->ui_blockninfo.page_5);
		BI->show();
		BI->setFixedSize(1300, 900);

	}
}
void GUI::on_tableWidget_7_cellClicked()
{
	if (ui.tableWidget_7->item(ui.tableWidget_7->currentRow(), 1) != NULL)
	{
		QString block = ui.txlist->item(ui.tableWidget_7->currentRow() + 60, 0)->data(Qt::DisplayRole).toString();
		BlockInfo* BI = new BlockInfo();
		BI->txinfo(block);
		BI->setModal(true);
		BI->ui_blockninfo.stackedWidget->setCurrentWidget(BI->ui_blockninfo.page_5);
		BI->show();
		BI->setFixedSize(1300, 900);

	}
}
void GUI::on_tableWidget_8_cellClicked()
{
	if (ui.tableWidget_8->item(ui.tableWidget_8->currentRow(), 1) != NULL)
	{
		QString block = ui.txlist->item(ui.tableWidget_8->currentRow() + 70, 0)->data(Qt::DisplayRole).toString();
		BlockInfo* BI = new BlockInfo();
		BI->txinfo(block);
		BI->setModal(true);
		BI->ui_blockninfo.stackedWidget->setCurrentWidget(BI->ui_blockninfo.page_5);
		BI->show();
		BI->setFixedSize(1300, 900);

	}
}
void GUI::on_tableWidget_9_cellClicked()
{
	if (ui.tableWidget_9->item(ui.tableWidget_9->currentRow(), 1) != NULL)
	{
		QString block = ui.txlist->item(ui.tableWidget_9->currentRow() + 80, 0)->data(Qt::DisplayRole).toString();
		BlockInfo* BI = new BlockInfo();
		BI->txinfo(block);
		BI->setModal(true);
		BI->ui_blockninfo.stackedWidget->setCurrentWidget(BI->ui_blockninfo.page_5);
		BI->show();
		BI->setFixedSize(1300, 900);

	}
}
void GUI::on_tableWidget_10_cellClicked()
{
	if (ui.tableWidget_10->item(ui.tableWidget_10->currentRow(), 1) != NULL)
	{
		QString block = ui.txlist->item(ui.tableWidget_10->currentRow() + 90, 0)->data(Qt::DisplayRole).toString();
		BlockInfo* BI = new BlockInfo();
		BI->txinfo(block);
		BI->setModal(true);
		BI->ui_blockninfo.stackedWidget->setCurrentWidget(BI->ui_blockninfo.page_5);
		BI->show();
		BI->setFixedSize(1300, 900);

	}
}

void GUI::on_dashboard_table1_cellClicked()
{
	if (ui.dashboard_table1->item(ui.dashboard_table1->currentRow(), 1) != NULL)
	{
		QString block = (ui.dashboard_table1->item(ui.dashboard_table1->currentRow(), 1)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_dashboard_table2_cellClicked()
{
	if (ui.dashboard_table2->item(ui.dashboard_table2->currentRow(), 1) != NULL)
	{
		QString block = (ui.dashboard_table2->item(ui.dashboard_table2->currentRow(), 1)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_dashboard_table3_cellClicked()
{
	if (ui.dashboard_table3->item(ui.dashboard_table3->currentRow(), 1) != NULL)
	{
		QString block = (ui.dashboard_table3->item(ui.dashboard_table3->currentRow(), 1)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_dashboard_table4_cellClicked()
{
	if (ui.dashboard_table4->item(ui.dashboard_table4->currentRow(), 1) != NULL)
	{
		QString block = (ui.dashboard_table4->item(ui.dashboard_table4->currentRow(), 1)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_dashboard_table5_cellClicked()
{
	if (ui.dashboard_table5->item(ui.dashboard_table5->currentRow(), 1) != NULL)
	{
		QString block = (ui.dashboard_table5->item(ui.dashboard_table5->currentRow(), 1)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_dashboard_table6_cellClicked()
{
	if (ui.dashboard_table6->item(ui.dashboard_table6->currentRow(), 1) != NULL)
	{
		QString block = (ui.dashboard_table6->item(ui.dashboard_table6->currentRow(), 1)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_dashboard_table7_cellClicked()
{
	if (ui.dashboard_table7->item(ui.dashboard_table7->currentRow(), 1) != NULL)
	{
		QString block = (ui.dashboard_table7->item(ui.dashboard_table7->currentRow(), 1)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_dashboard_table8_cellClicked()
{
	if (ui.dashboard_table8->item(ui.dashboard_table8->currentRow(), 1) != NULL)
	{
		QString block = (ui.dashboard_table8->item(ui.dashboard_table8->currentRow(), 1)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_dashboard_table9_cellClicked()
{
	if (ui.dashboard_table9->item(ui.dashboard_table9->currentRow(), 1) != NULL)
	{
		QString block = (ui.dashboard_table9->item(ui.dashboard_table9->currentRow(), 1)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_dashboard_table10_cellClicked()
{
	if (ui.dashboard_table10->item(ui.dashboard_table10->currentRow(), 1) != NULL)
	{
		QString block = (ui.dashboard_table10->item(ui.dashboard_table10->currentRow(), 1)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}




void GUI::on_mining_table1_cellClicked()
{ 
	if (ui.mining_table1->item(ui.mining_table1->currentRow(), 2) != NULL)
	{
		QString block = (ui.mining_table1->item(ui.mining_table1->currentRow(), 2)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_mining_table2_cellClicked()
{
	if (ui.mining_table2->item(ui.mining_table2->currentRow(), 2) != NULL)
	{
		QString block = (ui.mining_table2->item(ui.mining_table2->currentRow(), 2)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_mining_table3_cellClicked()
{
	if (ui.mining_table3->item(ui.mining_table3->currentRow(), 2) != NULL)
	{
		QString block = (ui.mining_table3->item(ui.mining_table3->currentRow(), 2)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_mining_table4_cellClicked()
{
	if (ui.mining_table4->item(ui.mining_table4->currentRow(), 2) != NULL)
	{
		QString block = (ui.mining_table4->item(ui.mining_table4->currentRow(), 2)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_mining_table5_cellClicked()
{
	if (ui.mining_table5->item(ui.mining_table5->currentRow(), 2) != NULL)
	{
		QString block = (ui.mining_table5->item(ui.mining_table5->currentRow(), 2)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_mining_table6_cellClicked()
{
	if (ui.mining_table6->item(ui.mining_table6->currentRow(), 2) != NULL)
	{
		QString block = (ui.mining_table6->item(ui.mining_table6->currentRow(), 2)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_mining_table7_cellClicked()
{
	if (ui.mining_table7->item(ui.mining_table7->currentRow(), 2) != NULL)
	{
		QString block = (ui.mining_table7->item(ui.mining_table7->currentRow(), 2)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_mining_table8_cellClicked()
{
	if (ui.mining_table8->item(ui.mining_table8->currentRow(), 2) != NULL)
	{
		QString block = (ui.mining_table8->item(ui.mining_table8->currentRow(), 2)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_mining_table9_cellClicked()
{
	if (ui.mining_table9->item(ui.mining_table9->currentRow(), 2) != NULL)
	{
		QString block = (ui.mining_table9->item(ui.mining_table9->currentRow(), 2)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}
void GUI::on_mining_table10_cellClicked()
{
	if (ui.mining_table10->item(ui.mining_table10->currentRow(), 2) != NULL)
	{
		QString block = (ui.mining_table10->item(ui.mining_table10->currentRow(), 2)->data(Qt::DisplayRole).toString());
		showBlockInfoStatus(block);
	}
}




void GUI::showBlockInfoStatus(QString block)
{
	/*QString block = ui.dashbutton1->text();*/


	//QString view = blockinfo_parsing(block);
	//BlockInfo& block_view = blockinfo_parsing(block);
	//BlockInfo* BI = new BlockInfo();
	//BI->ShowBlockInfo(block_view);
	Block_Info_Struct block_info_struct = blockinfo_parsing(block);
	BlockInfo* BI = new BlockInfo();

	BI->ShowBlockInfo(block_info_struct);
	BI->setModal(true);
	BI->show();
	BI->setFixedSize(1300, 900);
}

void GUI::showBlockInfoStatus2(QString block) // 거래내역만 처리
{
	/*QString block = ui.dashbutton1->text();*/


	//QString view = blockinfo_parsing(block);
	//BlockInfo& block_view = blockinfo_parsing(block);
	//BlockInfo* BI = new BlockInfo();
	//BI->ShowBlockInfo(block_view);
	Block_Info_Struct block_info_struct = blockinfo_parsing(block);
	BlockInfo* BI = new BlockInfo();

	BI->ShowBlockInfo(block_info_struct);
	BI->setModal(true);
	BI->show();
	BI->setFixedSize(1300, 900);
	ui.stackedWidget->setCurrentWidget(ui.page_5);
}
void BlockInfo::ShowBlockInfo(Block_Info_Struct block_info_struct)
{
	ui_blockninfo.hash->setText(block_info_struct.hash);
	ui_blockninfo.confirmations->setText(block_info_struct.confirmations);
	ui_blockninfo.height->setText(block_info_struct.height);
	ui_blockninfo.version->setText(block_info_struct.version);
	ui_blockninfo.versionHex->setText(block_info_struct.versionHex);
	ui_blockninfo.merkleroot->setText(block_info_struct.merkleroot);
	ui_blockninfo.time->setText(block_info_struct.time_string);
	ui_blockninfo.nonce->setText(block_info_struct.nonce);
	ui_blockninfo.bits->setText(block_info_struct.bits);
	ui_blockninfo.difficulty->setText(block_info_struct.difficulty);
	ui_blockninfo.chainwork->setText(block_info_struct.chainwork);
	ui_blockninfo.nTx->setText(block_info_struct.nTx);
	ui_blockninfo.previousblockhash->setText(block_info_struct.previousblockhash);
	ui_blockninfo.strippedsize->setText(block_info_struct.strippedsize);
	ui_blockninfo.size->setText(block_info_struct.size);
	ui_blockninfo.weight->setText(block_info_struct.weight);
	QString text = ui_blockninfo.height->text() + QString::fromLocal8Bit("번째 블록");// +QString::fromLocal8Bit("번째 블록");
	

	
	QFont fnt;
	fnt.setPointSize(16);
	fnt.setFamily(QString::fromLocal8Bit("빙그레체"));

	QString view;
	ui_blockninfo.tx->verticalHeader()->setFont(fnt);
	ui_blockninfo.tx->verticalHeader()->setStyleSheet("QHeaderView::section { background-color:rgb(36,42,50) }");
	ui_blockninfo.tx->horizontalHeader()->setFont(fnt);
	ui_blockninfo.tx->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color:rgb(36,42,50) }");
	for (int i = 0; i < block_info_struct.nTx.toInt(); i++)
	{
		if (block_info_struct.merkleroot.data() != block_info_struct.tx_array[i].toString())
		{
			ui_blockninfo.tx->insertRow(ui_blockninfo.tx->rowCount());
			ui_blockninfo.tx->setItem(0, i, new QTableWidgetItem(block_info_struct.tx_array[i].toString()));
			ui_blockninfo.tx->setColumnWidth(i, 880);
			ui_blockninfo.tx->setFont(fnt);
		}
		
		

	}
	

}

void BlockInfo::ShowTransactionInfo(QStringList pub, QStringList sign, int vin_count)
{


	QFont fnt;
	QString view;
	fnt.setPointSize(16);
	fnt.setFamily(QString::fromLocal8Bit("빙그레체"));
	for (int i = 0; i < vin_count; i++)
	{


		view = view + QString::number(i + 1) + (QString::fromLocal8Bit(" 번째 값\n\n"));
		view = view + "Pubkey\n----------------------------------------------------------------------------------------------------";
		view = view + pub[i] + "\n\n";
		view = view + "Signature\n----------------------------------------------------------------------------------------------------";
		view = view + sign[i] + "\n\n====================================================================================================\n\n";


		//ui_TransactionInfo.SigPub->insertRow(ui_TransactionInfo.SigPub->rowCount());
		//ui_TransactionInfo.SigPub->setItem(i, 0, new QTableWidgetItem(pub[i]));
		//ui_TransactionInfo.SigPub->setItem(i, 1, new QTableWidgetItem(sign[i]));


	}

	ui_blockninfo.SigPubBrowser->setText(view);
	ui_blockninfo.SigPubBrowser_3->setText(view);

}


void BlockInfo::Transaction_Info(QStringList* pub, QStringList* sign, QString txid, int* vin_count)
{
	QJsonObject tx_obj;
	QJsonDocument doc;
	QJsonArray tx_array;
	QJsonArray tx_array2;

	QString cmd = NODE "getrawtransaction " + txid + " true";

	QString result = CmdExe(cmd);
	doc = QJsonDocument::fromJson(result.toUtf8());

	tx_obj = doc.object();
	tx_array = tx_obj["vin"].toArray();
	*vin_count = tx_array.size();
	if (((tx_array[0].toObject()).keys())[0] == "coinbase")
	{
		pub->append("coinbase!");
		sign->append("coinbase!");
	}
	else
	{
		if (((tx_array[0].toObject()).keys())[3] == "txinwitness")
		{
			for (int i = 0; i < *vin_count; i++)
			{
				tx_obj = tx_array[i].toObject();
				tx_array2 = tx_obj["txinwitness"].toArray();


				pub->append(tx_array2[1].toString());
				sign->append(tx_array2[0].toString());
			}
		}
		else
		{
			for (int i = 0; i < *vin_count; i++)
			{
				tx_obj = tx_array[i].toObject();
				tx_obj = tx_obj["scriptSig"].toObject();


				QStringList temp = (tx_obj["asm"].toString()).split(" ");
				pub->append(temp[1]);
				sign->append(temp[0]);
			}
		}
	}

}


// TransactionInfo::TransactionInfo(QWidget* parent)
//	: QDialog(parent)
//{
//	//ui_blockninfo = new Ui::Dialog;
//	 ui_TransactionInfo.setupUi(this);
//	this->setWindowTitle("TransactionInfo");
//	QPalette palette;
//	palette.setColor(QPalette::Window, QColor(255, 255, 255, 255));
//	setAutoFillBackground(true);
//	setPalette(palette);
//
//}

BlockInfo::BlockInfo(QWidget* parent)
	: QDialog(parent)
{
	//ui_blockninfo = new Ui::Dialog;
	ui_blockninfo.setupUi(this);
	this->setWindowTitle("BlockInfo");
	QPalette palette;
	palette.setColor(QPalette::Window, QColor(255, 255, 255, 255));
	setAutoFillBackground(true);
	setPalette(palette);

}
void BlockInfo::on_backspace_clicked()
{
	ui_blockninfo.stackedWidget->setCurrentWidget(ui_blockninfo.page);
}
void BlockInfo::on_tx_cellClicked()
{

	if (ui_blockninfo.tx->item(ui_blockninfo.tx->currentRow(), 0) != NULL)
	{
		QStringList pub;
		QStringList sign;
		int vin_count;
		QString txid = (ui_blockninfo.tx->item(ui_blockninfo.tx->currentRow(), 0)->data(Qt::DisplayRole).toString());
		Transaction_Info(&pub, &sign, txid , &vin_count);

		ShowTransactionInfo(pub, sign, vin_count);
	}
	ui_blockninfo.stackedWidget->setCurrentWidget(ui_blockninfo.page_2);
	



}
void BlockInfo::txinfo(QString txid)
{


		QStringList pub;
		QStringList sign;
		int vin_count;
		Transaction_Info(&pub, &sign, txid, &vin_count);

		ShowTransactionInfo(pub, sign, vin_count);
	
	ui_blockninfo.stackedWidget->setCurrentWidget(ui_blockninfo.page_2);




}
int GUI::init_mining_list(Mining_info* mining_info, QTableWidget** mining_group)
{
	int List_count = 0;
	for (int i =0; i < MINING_LIST_COUNT; i++)
	{
		if (mining_group[i / 10]->item(i % 10, 0) == NULL) return i;
		mining_info[i].time = (mining_group[i / 10]->item(i % 10, 0)->data(Qt::DisplayRole).toString());
		mining_info[i].amount = (mining_group[i / 10]->item(i % 10, 1)->data(Qt::DisplayRole).toDouble());
		mining_info[i].blockhash = (mining_group[i / 10]->item(i % 10, 2)->data(Qt::DisplayRole).toString());
		//mining_info[i].blockhash = mining_group[i]->text();

		//if (mining_info[i].blockhash == NULL) return i;
	/*mining_info[i].category = mining_group[i / 10]->itemAt(i % 10, 1)->data(Qt::DisplayRole).toString();
	mining_info[i].amount = mining_group[i / 10]->itemAt(i % 10, 2)->data(Qt::DisplayRole).toDouble();
	mining_info[i].blockhash = mining_group[i / 10]->itemAt(i % 10, 3)->data(Qt::DisplayRole).toString();*/
	//mining_info[i].check_mining = tx_mining_group[i]->text();
	//txmining_infoi].send_receive = tx_send_group[i]->text();
	
	}
	return MINING_LIST_COUNT;
}

bool GUI::init_blockhash_list(QString* blockhash, int blocklist, QTableWidget** dashbaord_group)
{
	for (int i = 0; i < blocklist; i++)
	{
		if (dashbaord_group[i / 10]->item(i % 10, 0) == NULL) return false;
		blockhash[i] = (dashbaord_group[i / 10]->item(i % 10, 1)->data(Qt::DisplayRole).toString());
	}
}

void GUI::on_resetdashboard_clicked()
{
	reset_dashboard();
}
void GUI::on_closeButton_clicked()
{
	QString cmd = NODE "stop";
	//cmd.append();
	CmdExe(cmd);
	close();
}



