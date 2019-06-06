#ifndef NAVVIEW_H
#define NAVVIEW_H

#include <QListView>

class NavView : public QListView
{
	Q_OBJECT

public:
	NavView(QWidget *parent);
	~NavView();

private:
    int current_row ;
protected:
 void mouseMoveEvent ( QMouseEvent * event);
 void leaveEvent ( QEvent * event );
 void updateRow(int row);
};

#endif // NAVVIEW_H
