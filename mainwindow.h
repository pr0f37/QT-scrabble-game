#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "area.h"
#include "delegate.h"
#include "letter.h"
#include "letterlist.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initialize();
public slots:
    void newgame();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    Area gameBoard;
    Area gameBoardCopy;
    LetterList letterRack;
    LetterList letterRackCopy;
    LetterList player1Rack;
    LetterList player2Rack;
    QString clickedValue;
    bool clicked;
    QModelIndex clickedIndexes[7];
    int clickedIndexesCount;
    bool player1;
    bool rowConstant;
    bool colConstant;


private slots:
    void on_draw_clicked();
    void on_cancel_clicked();
    void on_confirm_clicked();
    void on_tableView2_clicked(QModelIndex index);
    void on_tableView_clicked(QModelIndex index);
};

#endif // MAINWINDOW_H
