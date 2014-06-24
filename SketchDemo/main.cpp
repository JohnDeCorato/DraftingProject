#include "sketchdemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{

	QApplication a(argc, argv);
	MainWindow w;

	/*
	HRESULT get_DefaultTablet(
			[out, retval] IInkTablet **DefaultTablet
	);
	*/
	
	w.show();
	return a.exec();
}
