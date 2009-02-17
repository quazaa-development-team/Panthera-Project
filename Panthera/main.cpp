#include <QtGui/QApplication>
#include "panthera.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Panthera w;
	w.show();
	return a.exec();
}
