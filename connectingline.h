#ifndef CONNECTINGLINE_H
#define CONNECTINGLINE_H

#include <QGraphicsLineItem>
#include <QObject>
#include <QTimer>
#include <QPen>
//#include "QPainter"
//#include "QtGui"

class ConnectingLine : public QObject, public QGraphicsLineItem
{
    Q_OBJECT
public:
    ConnectingLine(QPen *pen,qreal x,qreal y,QGraphicsItem *parent = 0);
    void setToStart();
public slots:
    void move();
public:
    qreal x,y,xto;
    bool isReached;
    QTimer *timer;
private:
    QPen *pen;

};

#endif // CONNECTINGLINE_H
