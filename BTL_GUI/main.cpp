#include "BTL_GUI.h"
#include <QtWidgets/QApplication>
#include <windows.h>

int main(int argc, char *argv[])
{
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	QApplication a(argc, argv);
	BTL_GUI w;

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
