#include "qtguitest1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiTest1 w;
	w.show();
	return a.exec();
}
