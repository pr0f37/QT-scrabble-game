#include "area.h"
#include "letter.h"
#include <QModelIndex>

Area::Area()
{
    setColumnCount(ROW);
    setRowCount(COL);
}

void Area::initialize()
{
    for (int row = 0; row < ROW; row++)
    {
	for (int col = 0; col < COL; col++)
	{
	    setData(index(row, col, QModelIndex()), QVariant("Empty"));

	}
    }
    setData(index(6,3,QModelIndex()), QVariant("A"));
    setData(index(6,4,QModelIndex()), QVariant("D"));
    setData(index(6,5,QModelIndex()), QVariant("A"));
    setData(index(6,6,QModelIndex()), QVariant("M"));
    setData(index(6,7,QModelIndex()), QVariant("Space"));
    setData(index(6,8,QModelIndex()), QVariant("N"));
    setData(index(6,9,QModelIndex()), QVariant("O"));
    setData(index(6,10,QModelIndex()), QVariant("W"));
    setData(index(6,11,QModelIndex()), QVariant("I"));
    setData(index(6,12,QModelIndex()), QVariant("K"));
    setData(index(8,5,QModelIndex()), QVariant("S"));
    setData(index(8,6,QModelIndex()), QVariant("C"));
    setData(index(8,7,QModelIndex()), QVariant("R"));
    setData(index(8,8,QModelIndex()), QVariant("A"));
    setData(index(8,9,QModelIndex()), QVariant("B"));
    setData(index(8,10,QModelIndex()), QVariant("B"));
    setData(index(8,11,QModelIndex()), QVariant("L"));
    setData(index(8,12,QModelIndex()), QVariant("E"));
}

void Area::newGame()
{
    for (int row = 0; row < ROW; row++)
    {
	for (int col = 0; col < COL; col++)
	{
	    setData(index(row, col, QModelIndex()), QVariant("Empty"));
	}
    }
    Letter custom;
    setData(index(7,7,QModelIndex()), QVariant(custom.getBody()));
}

void Area::operator=(Area &copiedArea)
{
    this->setColumnCount(copiedArea.columnCount());
    this->setRowCount(copiedArea.rowCount());
    for (int row = 0; row < rowCount(); row++)
    {
	for (int col = 0; col < columnCount(); col++)
	{
	    QString value = qVariantValue<QString>(copiedArea.index(row,col,QModelIndex()).data());
	    setData(index(row, col, QModelIndex()), QVariant(value));
	}
    }
}

bool Area::isAble(QModelIndex indexView)
{
    QString value = qVariantValue<QString>(this->index(indexView.row(),indexView.column(), QModelIndex()).data());
    if (value.compare("Empty") == 0)
    {
	if (indexView.column() - 1 > 0 )
	{
	    int col = indexView.column() - 1;
	    int row = indexView.row();
	    QString value = qVariantValue<QString>(this->index(row,col, QModelIndex()).data());
	    if (value.compare("Empty") != 0)
		return true;
	}
	if (indexView.column() + 1 < columnCount())
	{
	    int col = indexView.column() + 1;
	    int row = indexView.row();
	    QString value = qVariantValue<QString>(this->index(row,col, QModelIndex()).data());
	    if (value.compare("Empty") != 0)
		return true;
	}
	if (indexView.row() - 1 > 0 )
	{
	    int col = indexView.column();
	    int row = indexView.row() - 1;
	    QString value = qVariantValue<QString>(this->index(row,col, QModelIndex()).data());
	    if (value.compare("Empty") != 0)
		return true;
	}
	if (indexView.row() + 1 < rowCount())
	{
	    int col = indexView.column();
	    int row = indexView.row() + 1;
	    QString value = qVariantValue<QString>(this->index(row,col, QModelIndex()).data());
	    if (value.compare("Empty") != 0)
		return true;
	}
    }
    return false;
}
