#include "test_navview.h"

#include "navmodel.h"
#include "navdelegate.h"

test_NavView::test_NavView(QWidget *parent, Qt::WindowFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	NavModel* model = new NavModel(this);
	model->ReadDataFromConfig(QCoreApplication::applicationDirPath() + "/config.xml");
	NavDelegate* delegate = new NavDelegate(this);
	ui.listView->setModel(model);
	ui.listView->setItemDelegate(delegate);
    //connect(ui.listView, SIGNAL(doubleClicked(const QModelIndex &)), model, SLOT(Collapse(const QModelIndex&)));
    connect(ui.listView, SIGNAL(clicked(const QModelIndex &)), model, SLOT(Collapse(const QModelIndex&)));
}

test_NavView::~test_NavView()
{

}
