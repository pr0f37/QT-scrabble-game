#include <QtGui/QApplication>
#include <QtGlobal>
#include <QTranslator>
#include <QLocale>
#include <QTime>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QTranslator translator;
    translator.load("hellotr_"+QLocale().name());
    a.installTranslator(&translator);

    qsrand(0);
    MainWindow w;
    w.initialize();
    w.show();
    return a.exec();
}
