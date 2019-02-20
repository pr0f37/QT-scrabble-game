#include "letterlist.h"
#include "letter.h"

LetterList::LetterList()
{
    setColumnCount(0);
    setRowCount(0);
}

void LetterList::initialize()
{
    setColumnCount(7);
    setRowCount(1);
    setData(index(0, 0, QModelIndex()), QVariant("Space"));
    setData(index(0, 1, QModelIndex()), QVariant("W"));
    setData(index(0, 2, QModelIndex()), QVariant("I"));
    setData(index(0, 3, QModelIndex()), QVariant("T"));
    setData(index(0, 4, QModelIndex()), QVariant("A"));
    setData(index(0, 5, QModelIndex()), QVariant("J"));
    setData(index(0, 6, QModelIndex()), QVariant("Space"));
}

void LetterList::newGame()
{
    setColumnCount(7);
    setRowCount(1);
    for (int i = 0; i < 7 ; i++)
    {
	Letter myLetter;
	setData(index(0, i, QModelIndex()), QVariant(myLetter.getBody()));

    }

}

void LetterList::operator=(LetterList &copiedList)
{
    this->setColumnCount(copiedList.columnCount());
    this->setRowCount(copiedList.rowCount());
    for (int row = 0; row < rowCount(); row++)
    {
	for (int col = 0; col < columnCount(); col++)
	{
	    QString value = qVariantValue<QString>(copiedList.index(row,col,QModelIndex()).data());
	    setData(index(row, col, QModelIndex()), QVariant(value));
	}
    }
}
