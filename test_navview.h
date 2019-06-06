#ifndef TEST_NAVVIEW_H
#define TEST_NAVVIEW_H

#include <QMainWindow>
#include "ui_test_navview.h"

class test_NavView : public QMainWindow
{
	Q_OBJECT

public:
    test_NavView(QWidget *parent = 0, Qt::WindowFlags flags = 0); //Qt::WFlags
	~test_NavView();

private:
	Ui::test_NavViewClass ui;
};

#endif // TEST_NAVVIEW_H
