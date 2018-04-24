#include "antenna.h"

Antenna::Antenna(qreal posX,qreal posY,QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent)
{
    //Рисуем антенну
    setPixmap(QPixmap(":/new/images/antenna80x80.jpg"));
    setPos(posX,posY);
}
