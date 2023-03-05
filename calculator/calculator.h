#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

/*! Deklaracja klas
 */
namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{

    Q_OBJECT

/*! Deklaracja slotów sygnałów
 */
public slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void ChangeNumberSign();

/*! Deklaracja zmiennych publicznych i prywatnych
 */
public:

    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private:
    Ui::Calculator *ui;


};

#endif // CALCULATOR_H
