#include "GUI.h"
#include <QtWidgets/QApplication>
#include <windows.h>

int main(int argc, char *argv[])
{
	/*int argcc = 3;
	char* argvv[] = { (char*)"Appname", (char*)"-platform", (char*)"windows:dpiawareness=0,1,2" };
	(void) new QApplication(argcc, argvv);*/
	QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps); // DPI support

    QApplication a(argc, argv);

	int id = QFontDatabase::addApplicationFont(qApp->applicationDirPath() + "/fonts/Binggrae.ttf");
	QString family = QFontDatabase::applicationFontFamilies(id).at(0);

	QFont SerifFont(family);
	a.setFont(SerifFont);

    GUI w;
	w.setFixedSize(1550, 900);
	w.ui.stackedWidget->setCurrentWidget(w.ui.loading_page);
    Sleep(800);

    w.show();
	
	if (w.Checkwallet() == true)
	{
		w.Loadwallet();
		w.ui.loading_label->setText("지갑 로딩완료");
		w.ui.stackedWidget->setCurrentWidget(w.ui.loading_page);
		//qApp->processEvents();
		w.block_scan();
		w.Loading();
		w.ui.stackedWidget->setCurrentWidget(w.ui.page_1);
	}else
	{
		
		w.ui.stackedWidget->setCurrentWidget(w.ui.start_page);
	}
	


    return a.exec();
} 
