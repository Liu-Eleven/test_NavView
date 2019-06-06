#ifndef NAVDELEGATE_H
#define NAVDELEGATE_H

#include <QStyledItemDelegate>

class NavDelegate : public QStyledItemDelegate
{
	Q_OBJECT

public:
	NavDelegate(QObject *parent);
	~NavDelegate();

public:
	QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const ;
	void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

	void SetPending(bool pending) { m_pending = pending; }
    void setHoverRow(int row);

private:
	bool m_pending;
    int hoverRow;
};

#endif // NAVDELEGATE_H
