#ifndef AREA_H
#define AREA_H

#include <QStandardItemModel>
#include <QTableView>
#include <QStandardItem>
#include <QModelIndex>
#define ROW 15
#define COL 15

/**
  * Klasa opisująca model planszy do gry w Scrabble, jest to klasa dziedzicząca po QStandardItemModel
  * przechowuje obiekty klasy QString
  */

class Area : public QStandardItemModel
{
Q_OBJECT
public:
    Area(); // konstruktor domyślny ustawiający wielkość planszy (ROW x COL)
    void newGame(); // metoda przygotowująca planszę do rozpoczęcia nowej gry
    void initialize(); // metoda inicjalizująca planszę podczas uruchomienia aplikacji
    void operator=(Area&); // operator przyrównania - kopiuje wszystkie przechowywane elementy z przyrównywanego obiektu klasy Area
    bool isAble(QModelIndex); // metoda sprawdzająca czy można zmodyfikować element pod podanym indeksem, zwraca true jeśli istnieje taka możliwość, w przeciwnym przypadku zwraca false
};

#endif // AREA_H
