/*!
 *  Zdefniniowanie klasy MainWindow odpowiedzialnej za powstanie głównego okna aplikacji.
 *  Zdefiniowanie metody do ustawiania zakresów
 */


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tempconverter.h"
#include "moneyconverter.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setLimits(int, int, int, int);


public slots:
    void setPosCelsius(double);
    void setPosFarenheit(double);
    void setLimitsCelsius();
    void setLimitsFarenheit();


private:
    Ui::MainWindow *ui;

    TempConverter *converter;

    MoneyConverter *moneyconverter;
};

#endif // MAINWINDOW_H
