#include "test_navview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_NavView w;
	w.show();
	return a.exec();
}
