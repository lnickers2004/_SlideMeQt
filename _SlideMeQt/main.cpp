#include "stdafx.h"
#include "_slidemeqt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	_SlideMeQt w;
	w.show();
	return a.exec();
}
