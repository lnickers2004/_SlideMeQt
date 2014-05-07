#ifndef __SLIDEMEQT_H
#define __SLIDEMEQT_H

#include <QtWidgets/QMainWindow>
#include "ui__slidemeqt.h"

class _SlideMeQt : public QMainWindow
{
	Q_OBJECT

public:
	_SlideMeQt(QWidget *parent = 0);
	~_SlideMeQt();

private:
	Ui::_SlideMeQtClass ui;
};

#endif // __SLIDEMEQT_H
