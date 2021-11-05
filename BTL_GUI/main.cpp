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
	// 지갑이 이미 있는 경우
	if (w.Checkwallet())
	{
		w.show();
		w.Loadwallet();
		w.setting();
	}
	// 지갑이 없는 경우
	else
	{
		w.show(); // 다른 화면
		
	}



	return a.exec();
}
