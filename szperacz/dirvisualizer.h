#ifndef DIRVISUALIZER_H
#define DIRVISUALIZER_H

#include <QWidget>
#include <QRectF>
#include <QPainter>

/*! Deklaracja zmiennych wizualizera
 */

using namespace std;
class DirVisualizer : public QWidget
{
    Q_OBJECT
public:
    explicit DirVisualizer(QWidget *parent = 0);


signals:

public slots:

protected:
void paintEvent(QPaintEvent*event);
};

#endif // DIRVISUALIZER_H
