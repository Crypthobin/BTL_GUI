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
	address = ui.addresslabel->text();
	amount = ui.amount->text();
	fee_rate = ui.fee_rate->text();

	QString cmd = NODE "-named sendtoaddress address=" + address + " amount=" + amount + " fee_rate=" + fee_rate;
	QString result = CmdExe(cmd);

	ui.sendresult->setText("correct!\nTXID : " + result);
}

// 거래 내역 리셋
void BTL_GUI::on_resettx_clicked()
{
	QString cmd = NODE "listtransactions \"*\" 10000";
	QString result = CmdExe(cmd);

	QJsonDocument doc = QJsonDocument::fromJson(result.toUtf8());
	QJsonObject JON = doc.object();

	//QJsonValue value2 = JON.value("");
	//QJsonArray array2 = value2.toArray();

	//foreach(const QJsonValue & v, array2)
	//	qDebug() << v.toObject().value("ID").toInt();

	//QJsonArray jsonArray = JON[" "].toArray();
	//int a = jsonArray.size();

	//QString category = JON.value("time").toString();


}
