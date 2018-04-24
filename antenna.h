#ifndef ANTENNA_H
#define ANTENNA_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Antenna : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Antenna(qreal posX,qreal posY,QGraphicsItem *parent = 0);
};

#endif // ANTENNA_H
