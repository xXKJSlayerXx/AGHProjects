/*!
 * Połączenie odpowiednich sygnałów oraz slotów ze sobą aby umożliwić widoczną reakcję aplikacji na zadane wartości.
 * Zdefiniowanie metody pozycji oraz limitów dla ustawionych zakresów temperatur
 */


#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    converter = new TempConverter(0, this);
    moneyconverter = new MoneyConverter (0, this);

    // Celsius grupbox
    connect(ui->dialCelsius, SIGNAL(valueChanged(int)),
            converter, SLOT(setTempCelsius(int)));
    connect(converter, SIGNAL(tempCelsiusChanged(double)),
            ui->lcdCelsius, SLOT(display(double)));
    connect(converter, SIGNAL(tempCelsiusChanged(double)),
            this, SLOT(setPosCelsius(double)));
    connect(ui->minCelsius, SIGNAL(editingFinished()),
            this, SLOT(setLimitsCelsius()));
    connect(ui->maxCelsius, SIGNAL(editingFinished()),
            this, SLOT(setLimitsCelsius()));

    // Farenheit groupbox
    connect(ui->dialFarenheit, SIGNAL(valueChanged(int)),
            converter, SLOT(setTempFarenheit(int)));
    connect(converter, SIGNAL(tempFarenheitChanged(double)),
            ui->lcdFarenheit, SLOT(display(double)));
    connect(converter, SIGNAL(tempFarenheitChanged(double)),
            this, SLOT(setPosFarenheit(double)));
    connect(ui->minFarenheit, SIGNAL(editingFinished()),
            this, SLOT(setLimitsFarenheit()));
    connect(ui->maxFarenheit, SIGNAL(editingFinished()),
            this, SLOT(setLimitsFarenheit()));

    // PLN groupbox
    connect(ui->dialPLN, SIGNAL(valueChanged(int)),
            moneyconverter, SLOT(setMoneyPLN(int)));
    connect(moneyconverter, SIGNAL(moneyPLNChanged(double)),
            ui->lcdPLN, SLOT(display(double)));

    // Euro groupbox
    connect(ui->dialEuro, SIGNAL(valueChanged(int)),
            moneyconverter, SLOT(setMoneyEuro(int)));
    connect(moneyconverter, SIGNAL(moneyEuroChanged(double)),
            ui->lcdEuro, SLOT(display(double)));
}
void MainWindow::setPosCelsius(double input)
{
    ui->dialCelsius->setSliderPosition((int)input);
}

void MainWindow::setPosFarenheit(double input)
{
    ui->dialFarenheit->setSliderPosition((int)input);
}


void MainWindow::setLimitsCelsius()
{
    int minCelsius = ui->minCelsius->value();
    int maxCelsius = ui->maxCelsius->value();
    int minFarenheit = 1.8 * minCelsius + 32;
    int maxFarenheit = 1.8 * maxCelsius + 32;
    setLimits(minCelsius, maxCelsius, minFarenheit, maxFarenheit);
}

void MainWindow::setLimitsFarenheit()
{
    int minFarenheit = ui->minFarenheit->value();
    int maxFarenheit = ui->maxFarenheit->value();
    int minCelsius = (5.0 / 9.0) * (minFarenheit - 32);
    int maxCelsius = (5.0 / 9.0) * (maxFarenheit - 32);
    setLimits(minCelsius, maxCelsius, minFarenheit, maxFarenheit);
}



void MainWindow::setLimits(int minCelsius, int maxCelsius, int minFarenheit, int maxFarenheit)
{
    ui->minCelsius->setValue(minCelsius);
    ui->maxCelsius->setValue(maxCelsius);
    ui->minFarenheit->setValue(minFarenheit);
    ui->maxFarenheit->setValue(maxFarenheit);
    ui->dialCelsius->setRange(minCelsius, maxCelsius);
    ui->dialFarenheit->setRange(minFarenheit, maxFarenheit);
}

MainWindow::~MainWindow()
{
    delete ui;
}
