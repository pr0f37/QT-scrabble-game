#ifndef DELEGATE_H
#define DELEGATE_H

#include <QStyledItemDelegate>
#include <QPainter>
/**
  * Klasa definiująca obiekt delegata odrysowującego model
  */

class Delegate : public QStyledItemDelegate
{
Q_OBJECT
public:
    Delegate(QWidget *parent = 0) : QStyledItemDelegate(parent) {}; // Konstruktor domyślny
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const; // Metoda odrysowująca pola na planszy w zależności od wartości jaką przechowują
};

#endif // DELEGATE_H
