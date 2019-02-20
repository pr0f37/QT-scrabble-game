#ifndef LETTER_H
#define LETTER_H
#include <QString>
#include <QTableView>

/**
  * Klasa definiująca obikty reprezentujące litery, obiekt przechowuje literę i punktację za daną literę
  */
class Letter
{
public:
    Letter();
    Letter(QString);
    QString getBody();
    void setBody(QString);
    QString getPoints();
    void setPoints(QString);
private:
    QString body;
    QString points;
};

#endif // LETTER_H
