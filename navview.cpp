
#include "navview.h"
#include "colordefines.h"
#include <QMouseEvent>
#include "navdelegate.h"

NavView::NavView(QWidget *parent)
	: QListView(parent)
{
    setStyleSheet(
        QString(
        "QListView{background-color:%1;"
        "border:0px solid %2;"
        "border-right-width:1px;}")
        .arg(ColorToString(color_child_normal))
        .arg(ColorToString(color_line)));

   setMouseTracking(true);
}


NavView::~NavView()
{
}

void NavView::mouseMoveEvent ( QMouseEvent * event)
{
    int row = indexAt(event->pos()).row();
    updateRow(row);
}

void NavView::updateRow(int row)
{
    if (row == current_row)
        return;
    NavDelegate* iDelegate = qobject_cast<NavDelegate *>(itemDelegate());
    if(iDelegate) {
        iDelegate->setHoverRow(row);
    }
    update(model()->index(current_row, 0));
    update(model()->index(row, 0));
    current_row = row;
}


void NavView::leaveEvent ( QEvent * event )
{
    NavDelegate* iDelegate = qobject_cast<NavDelegate *>(itemDelegate());
    if(iDelegate) {
        iDelegate->setHoverRow(-1);
    }
    update(model()->index(current_row, 0));
    current_row = -1;
}


