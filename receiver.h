#ifndef RECEIVER_H
#define RECEIVER_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Receiver : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Receiver(qreal posX,qreal posY,QGraphicsItem *parent = 0);
};

#endif // RECEIVER_H
