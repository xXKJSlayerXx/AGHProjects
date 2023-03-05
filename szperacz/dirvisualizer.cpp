#include "dirvisualizer.h"
#include <QDebug>

DirVisualizer::DirVisualizer(QWidget *parent) : QWidget(parent)
{

}

/*! Metoda rysowania wizualizacji zapełnienia danego folderu
 */

void DirVisualizer::paintEvent(QPaintEvent *event)
{
    QVector <int> data;
    data << 60 << 180 << 270;
    int a;
    int s = 0;
    foreach (a, data)
     {   qDebug() << a;


    QPainter painter(this);
    painter.setBrush(Qt::red);
    painter.setPen(Qt::black);
    painter.drawPie(this->rect(),s*16,a*16);
    }

    QPainter painter(this);
    painter.drawRect(0,0,this->width()-1,this->height()-1);



    QRectF rectangle(0,0,this->width()-1,this->height()-1);
    int startAngle = 10*16;
    int spanAngle = 180 * 16;

}
