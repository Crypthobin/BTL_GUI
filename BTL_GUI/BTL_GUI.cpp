#include "BTL_GUI.h"



BTL_GUI::BTL_GUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("Crypthobin");
}

QString BTL_GUI::CmdExe(QString cmd)
{
	QString ret = NULL;
	QString buf;
	FILE* file = NULL;
	char output[500] = { 0x00, };
	char str[500] = { 0, };
	qsnprintf(str, sizeof(str), "%s", cmd.toUtf8().constData());
	file = _popen(str, "r");
	//file = _popen("dir /w", "r");
	if (file == NULL) {
		return ret;
	}

	/* Read pipe until end of file, or an error occurs. */
	while (fgets(output, 128, file))
	{
		ret.append(output);
	}

	fclose(file);

	ret.replace("\n", "\r\n");

	return ret;
}

// 시스템 종료
void BTL_GUI::on_closeBtn_clicked()
{
	QString cmd = NODE"stop";
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

	cmd = cmd + inputText + " 2>&1";

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
	QString cmd = NODE "-generate " + mining_count + " 2>&1";

	QString result = CmdExe(cmd);

	result = parsing_data(result, "blocks");

	cmd = NODE "getblock " + result + " 2>&1";

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
	/*
	QString address; // 송수신자의 계좌 주소
	int amount; // 금액
	int send_receive; // 송신(1), 수신(2)
	QString time; // 시간
	*/
	TX_info transaction[TX_LIST_COUNT];
	TX_info prev_tx[TX_LIST_COUNT];

	init_tx_list(prev_tx);

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
		result = CmdExe(cmd);
		if (result == "[\r\n]\r\n")
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
				transaction[tx_list].amount = tx_obj.value("amount").toDouble();
				// transaction[tx_list].amount = tx_obj.value("amount").toDouble();
				if (tx_obj.value("confirmations").toInt() == 0)
					transaction[tx_list].check_mining = "Mining Fail!";
				else
					transaction[tx_list].check_mining = "Mining Success!";

				// 이전 최근 목록과 같으면.. 이후 TX copy
				if (transaction[tx_list].txid == prev_tx[compare_count].txid && transaction[tx_list].amount == prev_tx[compare_count].amount)
				{
					if (transaction[tx_list].check_mining != prev_tx[compare_count].check_mining) compare_count++;
					else
					{
						for (int j = tx_list; j < tx_list + prev_tx[0].save_tx; j++)
						{
							transaction[j].txid = prev_tx[j - tx_list].txid;
							transaction[j].address = prev_tx[j - tx_list].address;
							transaction[j].amount = prev_tx[j - tx_list].amount;
							transaction[j].send_receive = prev_tx[j - tx_list].send_receive;
							transaction[j].check_mining = prev_tx[j - tx_list].check_mining;

							if (j == TX_LIST_COUNT - 1) break;
						}
						tx_list++;
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

	view_tx_list(transaction);

	// prev_tx[0].tx_obj = tx_array[0].toObject();
	// memcpy(prev_tx, transaction, sizeof(transaction));
	// prev_tx[0].tx_obj = transaction[0].tx_obj;
	prev_tx[0].save_tx = tx_list;
}

// 대시보드 리셋
void BTL_GUI::on_resetinfo_clicked()
{
	QString cmd = NODE "getblockcount"; // 블록 갯수
	QString getblockcount = CmdExe(cmd);
	cmd = NODE "getconnectioncount"; // Node 수
	QString getconnectioncount = CmdExe(cmd);

	int blockcount = getblockcount.toInt();

	QString blockhash[10];

	for (int i = blockcount; i > blockcount - 10; i--)
	{
		cmd = NODE "getblockhash " + QString::number(i);
		blockhash[blockcount - i] = CmdExe(cmd);
	}

	ui.block1->setText(blockhash[0]); ui.block2->setText(blockhash[1]);
	ui.block3->setText(blockhash[2]); ui.block4->setText(blockhash[3]);
	ui.block5->setText(blockhash[4]); ui.block6->setText(blockhash[5]);
	ui.block7->setText(blockhash[6]); ui.block8->setText(blockhash[7]);
	ui.block9->setText(blockhash[8]); ui.block10->setText(blockhash[9]);

	ui.blocknum1->setText(QString::number(blockcount)); ui.blocknum2->setText(QString::number(blockcount - 1));
	ui.blocknum3->setText(QString::number(blockcount - 2)); ui.blocknum4->setText(QString::number(blockcount - 3));
	ui.blocknum5->setText(QString::number(blockcount - 4)); ui.blocknum6->setText(QString::number(blockcount - 5));
	ui.blocknum7->setText(QString::number(blockcount - 6)); ui.blocknum8->setText(QString::number(blockcount - 7));
	ui.blocknum9->setText(QString::number(blockcount - 8)); ui.blocknum10->setText(QString::number(blockcount - 9));

	ui.blockcount->setText(getblockcount);
	ui.usercount->setText(getconnectioncount);
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