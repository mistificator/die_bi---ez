#include "die_bitchez.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DieBitchez w;
	w.show();
	return a.exec();
}
