#include "mainwindow.h"
#include <QApplication>

/*! Konstruktor okna głównego aplikacji
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}