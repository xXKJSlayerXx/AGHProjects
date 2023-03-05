/*!
 * Zdefiniowanie metody przeliczania temperatur
 */
#include "tempconverter.h"

TempConverter::TempConverter(double tempCelsius, QObject *parent) : QObject(parent)
{
    m_tempCelsius = tempCelsius;
}


// Settery

void TempConverter::newValue(double tempCelsius)
{
    if (m_tempCelsius == tempCelsius)
    {
        return;
    }
    m_tempCelsius = tempCelsius;

    emit tempCelsiusChanged(m_tempCelsius);
    emit tempFarenheitChanged(tempFarenheit());
}


void TempConverter::setTempCelsius(int tempCelsius)
{
    newValue(tempCelsius);
}


void TempConverter::setTempFarenheit(int tempFahrenheit)
{
    double tempCelsius = (5.0 / 9.0) * ((double) tempFahrenheit - 32.0);
    newValue(tempCelsius);
}

// Gettery

double TempConverter::tempCelsius() const
{
    return m_tempCelsius;
}


double TempConverter::tempFarenheit() const
{
    double tempFahrenheit = m_tempCelsius * (9.0 / 5.0) + 32.0;
    return tempFahrenheit;
}

