#include "receiver.h"

Receiver::Receiver(qreal posX,qreal posY,QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent)
{
    //Рисуем приемник
    setPixmap(QPixmap(":/new/images/receiver80x60.png"));
    setPos(posX,posY);
}
