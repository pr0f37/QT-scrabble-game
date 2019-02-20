#ifndef LETTERLIST_H
#define LETTERLIST_H
#include <QStandardItemModel>

class LetterList : public QStandardItemModel
{
Q_OBJECT
public:
    LetterList();
    void initialize();
    void newGame();
    void operator=(LetterList&);
};

#endif // LETTERLIST_H
