#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QTransform>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    clickedValue(" "),
    clicked(false),
    clickedIndexesCount(0),
    player1(true),
    rowConstant(false),
    colConstant(false)
{
    this->setWindowTitle(QString(tr("Scrabble")));
    ui->setupUi(this);
    ui->tableView->setModel(&gameBoard);
    ui->tableView->setItemDelegate(new Delegate());
    ui->tableView2->setModel(&letterRack);
    ui->tableView2->setItemDelegate(new Delegate());
    QObject::connect(this->ui->actionNowa_gra, SIGNAL(triggered()), this, SLOT(newgame()));
    ui->cancel->setDisabled(true);
    ui->draw->setDisabled(true);
    ui->confirm->setDisabled(true);
    ui->scorePlayer1->setText("0");
    ui->scorePlayer2->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::initialize()
{
    gameBoard.initialize();
    letterRack.initialize();
    gameBoardCopy = gameBoard;
    letterRackCopy = letterRack;
    clickedIndexesCount = 0;
}

void MainWindow::newgame()
{
    ui->cancel->setEnabled(true);
    ui->confirm->setEnabled(true);
    ui->draw->setEnabled(true);
    gameBoard.newGame();
    player1Rack.newGame();
    player2Rack.newGame();
    letterRack = player1Rack;
    gameBoardCopy = gameBoard;
    letterRackCopy = letterRack;
    ui->scorePlayer1->setText("0");
    ui->scorePlayer2->setText("0");
}

void MainWindow::on_tableView2_clicked(QModelIndex index)
{
    if (clicked == false || (clickedValue.compare(qVariantValue<QString>(index.data())) != 0))
    {
	clickedValue = qVariantValue<QString>(index.data());
	clicked = true;
    }
}

void MainWindow::on_tableView_clicked(QModelIndex index)
{

    if (clicked == true && gameBoard.isAble(index))
    {
	if (clickedIndexesCount == 1)
	{
	    if (clickedIndexes[0].row() == index.row())
		rowConstant = true;
	    else if (clickedIndexes[0].column() == index.column())
		colConstant = true;
	}
	if (clickedIndexesCount < 2 || (rowConstant == true && clickedIndexes[0].row() == index.row()) || (colConstant == true && clickedIndexes[0].column() == index.column()))
	{
	    gameBoard.setData(index, QVariant(clickedValue));
	    clicked = false;
	    for (int i = 0; i < letterRack.columnCount(); i++)
	    {
		QString chosenLetter = qVariantValue<QString>(letterRack.index(0, i, QModelIndex()).data());
		if (chosenLetter.compare(clickedValue) == 0)
		{
		    letterRack.takeColumn(i);
		    break;
		}
	    }
	    clickedValue = "";
	    clickedIndexes[clickedIndexesCount] = index;
	    clickedIndexesCount++;
	}
    }
}

void MainWindow::on_confirm_clicked()
{
    gameBoardCopy = gameBoard;
    letterRackCopy = letterRack;
    if (clickedIndexesCount > 0)
    {
	QString valueUp;
	QString valueDown;
	QString valueLeft;
	QString valueRight;
	Letter word[30];
	int letterCount = 0;
	int score = 0;
	int row = clickedIndexes[0].row();
	int col = clickedIndexes[0].column();
	if (clickedIndexesCount == 1)
	{
	    if (row > 0)
		valueUp = qVariantValue<QString>(gameBoard.index(row - 1, col, QModelIndex()).data());
	    else valueUp = "Empty";
	    if (row < gameBoard.rowCount() - 1)
		valueDown = qVariantValue<QString>(gameBoard.index(row + 1, col, QModelIndex()).data());
	    else valueDown = "Empty";
	    if (col > 0)
		valueLeft = qVariantValue<QString>(gameBoard.index(row, col - 1, QModelIndex()).data());
	    else valueLeft = "Empty";
	    if (col < gameBoard.columnCount() - 1)
		valueRight = qVariantValue<QString>(gameBoard.index(row, col + 1, QModelIndex()).data());
	    else valueRight = "Empty";
	    Letter first(qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data()));
	    word[letterCount++] = first;
	    // liczenie słowa do góry
	    while (valueUp.compare("Empty") != 0 && row > 0) // jeśli powyżej literki wstawionej przez gracza znajduje się jakaś inna literka, leć do początku słowa
	    {
		row--;
		Letter temp(qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data()));
		word[letterCount++] = temp;
		//row--;
		valueUp = qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data());
	    }
	    // przywracanie poprawnych wartości zmiennych startowych
	    row = clickedIndexes[0].row();
	    col = clickedIndexes[0].column();
	    while (valueDown.compare("Empty") != 0 && row < gameBoard.rowCount() - 1) // jeśli poniżej literki wstawionej przez gracza znajduje się jakaś inna literka, leć do początku słowa
	    {
		row++;
		Letter temp(qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data()));
		word[letterCount++] = temp;
		valueDown = qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data());
	    }
	    row = clickedIndexes[0].row();
	    col = clickedIndexes[0].column();
	    while (valueLeft.compare("Empty") != 0 && col > 0) // jeśli po lewej stronie literki wstawionej przez gracza znajduje się jakaś inna literka, leć do początku słowa
	    {
		col--;
		Letter temp(qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data()));
		word[letterCount++] = temp;
		valueLeft = qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data());
	    }
	    row = clickedIndexes[0].row();
	    col = clickedIndexes[0].column();
	    while (valueRight.compare("Empty") != 0 && col < gameBoard.columnCount() - 1) // jeśli po lewej stronie literki wstawionej przez gracza znajduje się jakaś inna literka, leć do początku słowa
	    {
		col++;
		Letter temp(qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data()));
		word[letterCount++] = temp;
		valueRight = qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data());
	    }

	}
	else if (clickedIndexesCount > 1)
	{
	    if (clickedIndexes[0].column() == clickedIndexes[1].column()) // słowo pionowe
	    {
		if (row > 0)
		    valueUp = qVariantValue<QString>(gameBoard.index(row + 1, col, QModelIndex()).data());
		while (valueUp.compare("Empty") != 0 && row > 0) // cofam się na początek słowa
		{
		    row--;
		    valueUp = qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data());
		}
		do{
		    Letter temp(valueUp);
		    word[letterCount++] = temp;
		    row++;
		    valueUp = qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data());
		}while(valueUp.compare("Empty") !=0 && row < gameBoard.rowCount() - 1);
	    }
	    else if (clickedIndexes[0].row() == clickedIndexes[1].row()) // słowo poziome
	    {
		if (col > 0)
		    valueLeft = qVariantValue<QString>(gameBoard.index(row, col - 1, QModelIndex()).data());
		while (valueLeft.compare("Empty") != 0 && col > 0) // cofam się na początek słowa
		{
		    col--;
		    valueLeft = qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data());
		}
		do{
		    Letter temp(valueLeft);
		    word[letterCount++] = temp;
		    col++;
		    valueLeft = qVariantValue<QString>(gameBoard.index(row, col, QModelIndex()).data());
		}while(valueLeft.compare("Empty") !=0 && col < gameBoard.columnCount() - 1);
	    }
	}
	for (int i = 0; i < letterCount; i++)
	{
	    score += qVariantValue<int>(word[i].getPoints());
	}
	if (player1 == true)
	{
	    score += qVariantValue<int>(ui->scorePlayer1->text());
	    ui->scorePlayer1->setText(qVariantValue<QString>(score));
	}
	else
	{
	    score += qVariantValue<int>(ui->scorePlayer2->text());
	    ui->scorePlayer2->setText(qVariantValue<QString>(score));
	}
	letterCount = 0;
    }
    clickedIndexesCount = 0;
    if (player1 == true)
    {
	player1Rack = letterRack;
	player1 = false;
	letterRack = player2Rack;
    }
    else
    {
	player2Rack = letterRack;
	player1 = true;
	letterRack = player1Rack;
    }
    gameBoardCopy = gameBoard;
    letterRackCopy = letterRack;
    rowConstant = false;
    colConstant = false;

}

void MainWindow::on_cancel_clicked()
{
    gameBoard = gameBoardCopy;
    letterRack = letterRackCopy;
    rowConstant = false;
    colConstant = false;

}

void MainWindow::on_draw_clicked()
{ 
    gameBoard = gameBoardCopy;
    letterRack = letterRackCopy;
    rowConstant = false;
    colConstant = false;

    if (letterRack.columnCount() < 7)
    {
	Letter temp;
	letterRack.setColumnCount(letterRack.columnCount() + 1);
	letterRack.setData(letterRack.index(0, letterRack.columnCount() -1, QModelIndex()), QVariant(temp.getBody()));
    }
    if (player1 == true)
    {
	player1Rack = letterRack;
	player1 = false;
	letterRack = player2Rack;
    }
    else
    {
	player2Rack = letterRack;
	player1 = true;
	letterRack = player1Rack;
    }
    letterRackCopy = letterRack;
}
