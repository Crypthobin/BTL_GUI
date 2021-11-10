#define _CRT_SECURE_NO_WARNINGS

#include "BTL_GUI.h"

#include <string>

BTL_GUI::BTL_GUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("Crypthobin");
}

//////////////////////////////////////////////
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
//////////////////////////////////////



//QString BTL_GUI::CmdExe(QString cmd)
//{
//	QString ret = NULL;
//	QString buf;
//	FILE* file = NULL;
//	char output[500] = { 0x00, };
//	char str[500] = { 0, };
//	qsnprintf(str, sizeof(str), "%s", cmd.toUtf8().constData());
//	file = _popen(str, "r");
//	//file = _popen("dir /w", "r");
//	if (file == NULL) {
//		return ret;
//	}
//
//	/* Read pipe until end of file, or an error occurs. */
//	while (fgets(output, 128, file))
//	{
//		ret.append(output);
//	}
//
//	fclose(file);
//
//	ret.replace("\n", "\r\n");
//
//	return ret;
//}


QString BTL_GUI::CmdExe(QString cmd)
{
	QString ret = NULL;

	QByteArray ba = cmd.toLocal8Bit();
	const char *c_cmd = ba.data();

	std::string str; 
	runCmd(c_cmd, str);

	size_t s_size = str.size();
	if(str[s_size - 2] == '\r')
		str = str.substr(0, s_size - 2);

	//ret.append(str.c_str());

	//ret.replace("\n", "\r\n");

	return QString::fromStdString(str);
}

// 시스템 종료
void BTL_GUI::on_closeBtn_clicked()
{
	QString cmd = NODE "stop";
	//cmd.append();
	CmdExe(cmd);
	close();
}

// 지갑 생성 및 계좌 생성 ( 출력 포함 )
void BTL_GUI::on_createWallet_clicked()
{
	QString result;
	QString cmd;
	QString inputText;

	//BTL_GUI wallet;

	cmd = NODE "createwallet ";

	inputText = ui.walletname->text(); // text 가져오기

	cmd = cmd + inputText;/* + " 2>&1"*/

	result = CmdExe(cmd);

	wallet_name = parsing_data(result, "name");

	cmd = NODE "getnewaddress";
	CmdExe(cmd);

	setting();
}

// 주소 생성 버튼 ( 미 사용 )
void BTL_GUI::on_create_addr_clicked()
{
	QString temp = "Hello";
	ui.walletlabel->setText(temp);
}

// 잔액 새로 고침 버튼
void BTL_GUI::on_resetwallet_clicked()
{
	//QString cmd = "bitcoin-cli -pqcnet listaddressgroupings 2>&1";
	//QString result = CmdExe(cmd);
	//ui.addrlabel->setText(result);
	getbalance();
}

// 채굴 시작 버튼
void BTL_GUI::on_mining_clicked()
{
	QString mining_count = ui.miningcount->text();
	QString cmd = NODE "-generate " + mining_count/* + " 2>&1"*/;

	QString result = CmdExe(cmd);

	result = parsing_data(result, "blocks");

	cmd = NODE "getblock " + result/* + " 2>&1"*/;

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

	result = "Mining Success!\nBlock Hash : " + block_hash + "\nnonce : " + nonce + "\ndifficulty : " + difficulty + "\nTX : " + tx_count;

	ui.miningresult->setText(result);
}

// 송금 버튼
void BTL_GUI::on_send_clicked()
{
	QString address, amount, fee_rate;
	address = ui.sendaddr->text();
	amount = ui.amount->text();
	fee_rate = ui.fee_rate->text();

	QString cmd = NODE "-named sendtoaddress address=" + address + " amount=" + amount + " fee_rate=" + fee_rate;
	QString result = CmdExe(cmd);

	ui.sendresult->setText("correct!\nTXID : " + result);
}

// 거래 내역 리셋
void BTL_GUI::on_resettx_clicked()
{
	TX_info transaction[TX_LIST_COUNT] = { 0, };
	TX_info prev_tx[TX_LIST_COUNT] = { 0, };

	QLabel *tx_amount_group[TX_LIST_COUNT] = { ui.tx_amount,  ui.tx_amount_2 ,ui.tx_amount_3,ui.tx_amount_4, ui.tx_amount_5, ui.tx_amount_6, ui.tx_amount_7 };
	QLabel *tx_addr_group[TX_LIST_COUNT] = { ui.tx_addr,  ui.tx_addr_2 ,ui.tx_addr_3,ui.tx_addr_4, ui.tx_addr_5, ui.tx_addr_6, ui.tx_addr_7 };
	QLabel *tx_mining_group[TX_LIST_COUNT] = { ui.tx_mining,  ui.tx_mining_2 ,ui.tx_mining_3,ui.tx_mining_4, ui.tx_mining_5, ui.tx_mining_6, ui.tx_mining_7 };
	QLabel *tx_txid_group[TX_LIST_COUNT] = { ui.tx_id,  ui.tx_id_2 ,ui.tx_id_3,ui.tx_id_4, ui.tx_id_5, ui.tx_id_6, ui.tx_id_7 };
	QLabel *tx_send_group[TX_LIST_COUNT] = { ui.tx_send,  ui.tx_send_2 ,ui.tx_send_3,ui.tx_send_4, ui.tx_send_5, ui.tx_send_6, ui.tx_send_7 };

	prev_tx[0].save_tx = init_tx_list(prev_tx, tx_amount_group, tx_addr_group, tx_mining_group, tx_txid_group, tx_send_group);

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
				if (transaction[tx_list].send_receive == "send") // 송신
				{
					transaction[tx_list].address = tx_address_parsing(transaction[tx_list].txid, 0);
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
				transaction[tx_list].amount = fabs(tx_obj.value("amount").toDouble());
				// transaction[tx_list].amount = tx_obj.value("amount").toDouble();
				if (tx_obj.value("confirmations").toInt() == 0)
					transaction[tx_list].check_mining = "Mining Wait....";
				else
					transaction[tx_list].check_mining = "Mining Success!";

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
				char *current_time = asctime(gmtime(&epch));
				transaction[tx_list].time = current_time;

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
	view_tx_list(transaction, tx_list, tx_amount_group, tx_addr_group, tx_mining_group, tx_txid_group, tx_send_group);
	prev_tx[0].save_tx = tx_list;
}

// 대시보드 리셋
void BTL_GUI::on_resetinfo_clicked()
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

	QPushButton *block_group[BLOCK_LIST_COUNT] = { ui.block1, ui.block2, ui.block3, ui.block4, ui.block5, ui.block6, ui.block7,ui.block8, ui.block9, ui.block10 };
	QLabel *blocknum_group[BLOCK_LIST_COUNT] = { ui.blocknum1, ui.blocknum2, ui.blocknum3, ui.blocknum4, ui.blocknum5, ui.blocknum6, ui.blocknum7,ui.blocknum8, ui.blocknum9, ui.blocknum10 };

	QString blockhash[BLOCK_LIST_COUNT];
	QString prev_blockhash[BLOCK_LIST_COUNT];

	init_blockhash_list(prev_blockhash, blocklist, block_group);

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
			block_group[i]->setText(blockhash[i]);
			blocknum_group[i]->setText(QString::number(blockcount - i));
		}

		ui.blockcount->setText(getblockcount);
		ui.usercount->setText(getconnectioncount);
	}
}

void BTL_GUI::on_block1_clicked()
{
	QString block = ui.block1->text();
	blockinfo_parsing(block);
}

void BTL_GUI::on_block2_clicked()
{
	QString block = ui.block2->text();
	blockinfo_parsing(block);
}

void BTL_GUI::on_block3_clicked()
{
	QString block = ui.block3->text();
	blockinfo_parsing(block);
}

void BTL_GUI::on_block4_clicked()
{
	QString block = ui.block4->text();
	blockinfo_parsing(block);
}

void BTL_GUI::on_block5_clicked()
{
	QString block = ui.block5->text();
	blockinfo_parsing(block);
}

void BTL_GUI::on_block6_clicked()
{
	QString block = ui.block6->text();
	blockinfo_parsing(block);
}

void BTL_GUI::on_block7_clicked()
{
	QString block = ui.block7->text();
	blockinfo_parsing(block);
}

void BTL_GUI::on_block8_clicked()
{
	QString block = ui.block8->text();
	blockinfo_parsing(block);
}

void BTL_GUI::on_block9_clicked()
{
	QString block = ui.block9->text();
	blockinfo_parsing(block);
}

void BTL_GUI::on_block10_clicked()
{
	QString block = ui.block10->text();
	blockinfo_parsing(block);
}