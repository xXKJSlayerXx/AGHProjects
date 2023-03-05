/*!
 * Zdefiniowanie metody przeliczania walut
 */
#include "moneyconverter.h"

MoneyConverter::MoneyConverter(double moneyPLN, QObject *parent) :
    QObject(parent)
{
        m_PLN = moneyPLN;
}

// Settery

void MoneyConverter::newMoneyValue(double moneyPLN)
{
    if (m_PLN == moneyPLN)
    {
        return;
    }
    m_PLN = moneyPLN;

    emit moneyPLNChanged(m_PLN);
    emit moneyEuroChanged(moneyEuro());
}

void MoneyConverter::setMoneyPLN(int moneyPLN)
{
    newMoneyValue(moneyPLN);
}

void MoneyConverter::setMoneyEuro(int moneyEuro)
{
    double moneyPLN = (1.0 / 4.8) * ((double) moneyEuro);
    newMoneyValue(moneyPLN);
}

//Gettery

double MoneyConverter::moneyPLN() const
{
    return m_PLN;
}

double MoneyConverter::moneyEuro() const
{
    double moneyEuro = m_PLN * (4.8);
    return moneyEuro;
}
