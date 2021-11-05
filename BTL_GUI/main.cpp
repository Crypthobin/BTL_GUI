#include "BTL_GUI.h"
#include <QtWidgets/QApplication>
#include <Windows.h>

int main(int argc, char *argv[])
{
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	QApplication a(argc, argv);
	BTL_GUI w;

	QString json = "{\"error\":{\"errorcode\":0,\"errorstring\":\"\"},\"login\":1,\"logintoken\":\"4daaf6b3dd5a26a2ad2c436e564bfa4d6c439ce4d0d6cd66705a8bdadddddaa0\"}";
	QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
	QJsonObject JON = doc.object();
	QString error_code = JON.value("error").toObject().value("errorcode").toString();
	QString error_string = JON.value("error").toObject().value("errorcode").toString();
	int login = JON.value("login").toInt();
	QString login_token = JON.value("logintoken").toString();

	w.start_demon();
	Sleep(800);
	// ������ �̹� �ִ� ���
	if (w.Checkwallet())
	{
		w.show();
		w.Loadwallet();
		w.setting();
	}
	// ������ ���� ���
	else
	{
		w.show(); // �ٸ� ȭ��
		
	}



	return a.exec();
}
