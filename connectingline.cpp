#include "connectingline.h"


ConnectingLine::ConnectingLine(QPen *pen,qreal x, qreal y, QGraphicsItem *parent): QObject(), QGraphicsLineItem(parent)
{
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));


    //Устанавливаем начальное положение линии и цвет
    xto = x;
    isReached = false;
    this->pen = pen;
    setPen(*(this->pen));

    this->x = x;
    this->y = y;
    setPos(this->x,this->y);
}

void ConnectingLine::setToStart()
{
    xto = x;
    pen = new QPen(Qt::red);
    setPen(*(this->pen));
    setLine(x,y,xto,y);
}

void ConnectingLine::move()
{
    xto += 4;
    setLine(x,y,xto,y);

    if (xto > 515)
    {
        isReached = true;
        timer->stop();
        pen = new QPen(Qt::green);
        setPen(*(this->pen));
        setLine(x,y,xto,y);
    }
}
