/*!
 * Zdefiniowanie klasy TempConverter służącej do przeliczania wartości temperatur
 */

#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H

#include <QObject>

class TempConverter : public QObject
{
    Q_OBJECT

public:
    explicit TempConverter(double tempCelsius, QObject *parent = 0);

    double tempCelsius() const;
    double tempFarenheit() const;


    void newValue(double);


signals:
    void tempCelsiusChanged(double);
    void tempFarenheitChanged(double);


public slots:
    void setTempCelsius(int);
    void setTempFarenheit(int);

private:
    double m_tempCelsius;


};

#endif // TEMPCONVERTER_H
