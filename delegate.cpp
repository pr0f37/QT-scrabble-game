#include "delegate.h"
#include "area.h"
#include "letter.h"
#include <QFont>

void Delegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QString value = qVariantValue<QString>(index.data());
    Letter myLetter(value);
    QFont fontBig("Arial", 15, 15, false);
    QFont fontSmall("Arial", 7, 15, false);
    
    if (value.compare("Empty") == 0 && (option.state & QStyle::State_Selected))
    {
	QPixmap pixmap(":/emptyClicked");
	painter->drawPixmap ( index.column()*30, index.row()*30, 30, 30, pixmap );
    }
    else if (value.compare("Empty") == 0)
    {
	QPixmap pixmap(":/empty");
	painter->drawPixmap ( index.column()*30, index.row()*30, 30, 30, pixmap );
    }
    else if (value.compare("Space") == 0 && (option.state & QStyle::State_Selected))
    {
	QPixmap pixmap(":/spaceClicked");
	painter->drawPixmap ( index.column()*30, index.row()*30, 30, 30, pixmap );
    }
    else if (value.compare("Space") == 0)
    {
	QPixmap pixmap(":/space");
	painter->drawPixmap ( index.column()*30, index.row()*30, 30, 30, pixmap );
    }
    else
    {
	if (option.state & QStyle::State_Selected)
	{
	    QPixmap pixmap(":/spaceClicked");
	    painter->drawPixmap ( index.column()*30, index.row()*30, 30, 30, pixmap );
	}
	else
	{
	    QPixmap pixmap(":/space");
	    painter->drawPixmap ( index.column()*30, index.row()*30, 30, 30, pixmap );
	}

	painter->setFont(fontBig);
	painter->drawText(index.column()*30 + 5, index.row()*30 + 20, myLetter.getBody());
	painter->setFont(fontSmall);
	painter->drawText(index.column()*30 + 20, index.row()*30 + 27, myLetter.getPoints());
    }
}
