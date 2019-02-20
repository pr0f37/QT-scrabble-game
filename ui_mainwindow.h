/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 19. Jan 14:30:39 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNowa_gra;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QTableView *tableView2;
    QGridLayout *gridLayout;
    QPushButton *draw;
    QPushButton *confirm;
    QPushButton *cancel;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *scorePlayer1;
    QLabel *label_2;
    QLineEdit *scorePlayer2;
    QMenuBar *menuBar;
    QMenu *menuGra;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(470, 656);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(470, 656));
        MainWindow->setMaximumSize(QSize(470, 656));
        MainWindow->setBaseSize(QSize(475, 640));
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        actionNowa_gra = new QAction(MainWindow);
        actionNowa_gra->setObjectName(QString::fromUtf8("actionNowa_gra"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 451, 581));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);
        tableView->setMaximumSize(QSize(452, 452));
        tableView->setBaseSize(QSize(452, 452));
        tableView->setMouseTracking(true);
        tableView->setAcceptDrops(true);
        tableView->setAutoFillBackground(false);
        tableView->setFrameShape(QFrame::StyledPanel);
        tableView->setLineWidth(1);
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed);
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setDragEnabled(false);
        tableView->setDragDropOverwriteMode(false);
        tableView->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableView->setDefaultDropAction(Qt::IgnoreAction);
        tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView->setShowGrid(true);
        tableView->setGridStyle(Qt::SolidLine);
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setDefaultSectionSize(30);
        tableView->horizontalHeader()->setMinimumSectionSize(30);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setDefaultSectionSize(30);
        tableView->verticalHeader()->setMinimumSectionSize(30);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableView2 = new QTableView(layoutWidget);
        tableView2->setObjectName(QString::fromUtf8("tableView2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableView2->sizePolicy().hasHeightForWidth());
        tableView2->setSizePolicy(sizePolicy2);
        tableView2->setMaximumSize(QSize(212, 32));
        tableView2->setBaseSize(QSize(212, 32));
        tableView2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView2->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed);
        tableView2->setProperty("showDropIndicator", QVariant(false));
        tableView2->setDragDropOverwriteMode(false);
        tableView2->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableView2->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView2->horizontalHeader()->setVisible(false);
        tableView2->horizontalHeader()->setDefaultSectionSize(30);
        tableView2->horizontalHeader()->setMinimumSectionSize(30);
        tableView2->verticalHeader()->setVisible(false);
        tableView2->verticalHeader()->setMinimumSectionSize(30);

        gridLayout_3->addWidget(tableView2, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        draw = new QPushButton(layoutWidget);
        draw->setObjectName(QString::fromUtf8("draw"));

        gridLayout->addWidget(draw, 0, 0, 1, 1);

        confirm = new QPushButton(layoutWidget);
        confirm->setObjectName(QString::fromUtf8("confirm"));

        gridLayout->addWidget(confirm, 1, 0, 1, 1);

        cancel = new QPushButton(layoutWidget);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        gridLayout->addWidget(cancel, 2, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        scorePlayer1 = new QLineEdit(layoutWidget);
        scorePlayer1->setObjectName(QString::fromUtf8("scorePlayer1"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scorePlayer1->sizePolicy().hasHeightForWidth());
        scorePlayer1->setSizePolicy(sizePolicy3);
        scorePlayer1->setMaximumSize(QSize(120, 16777215));
        scorePlayer1->setReadOnly(true);

        gridLayout_2->addWidget(scorePlayer1, 1, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        scorePlayer2 = new QLineEdit(layoutWidget);
        scorePlayer2->setObjectName(QString::fromUtf8("scorePlayer2"));
        sizePolicy3.setHeightForWidth(scorePlayer2->sizePolicy().hasHeightForWidth());
        scorePlayer2->setSizePolicy(sizePolicy3);
        scorePlayer2->setMaximumSize(QSize(120, 16777215));
        scorePlayer2->setReadOnly(true);

        gridLayout_2->addWidget(scorePlayer2, 3, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 470, 24));
        menuGra = new QMenu(menuBar);
        menuGra->setObjectName(QString::fromUtf8("menuGra"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGra->menuAction());
        menuGra->addAction(actionNowa_gra);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Scrabble!", 0, QApplication::UnicodeUTF8));
        actionNowa_gra->setText(QApplication::translate("MainWindow", "Nowa gra", 0, QApplication::UnicodeUTF8));
        draw->setText(QApplication::translate("MainWindow", "Losuj/Pas", 0, QApplication::UnicodeUTF8));
        confirm->setText(QApplication::translate("MainWindow", "Ok", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("MainWindow", "Anuluj", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Gracz pierwszy:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Gracz drugi:", 0, QApplication::UnicodeUTF8));
        menuGra->setTitle(QApplication::translate("MainWindow", "Gra", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
