/*!
 * Zdefiowanie klasy MoneyConverter służącej do przeliczania walut
 *
 */
#ifndef MONEYCONVERTER_H
#define MONEYCONVERTER_H

#include <QObject>

class MoneyConverter : public QObject
{
    Q_OBJECT

public:
    explicit MoneyConverter(double moneyPLN, QObject *parent = 0);

    double moneyPLN() const;
    double moneyEuro() const;
    void newMoneyValue(double);

signals:
    void moneyPLNChanged(double);
    void moneyEuroChanged(double);

public slots:
    void setMoneyPLN(int);
    void setMoneyEuro(int);

private:
    double m_PLN;

};


#endif // MONEYCONVERTER_H
