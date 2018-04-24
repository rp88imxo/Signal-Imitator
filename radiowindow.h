#ifndef RADIOWINDOW_H
#define RADIOWINDOW_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItemGroup>
#include <QTimer>

/*
   Заголовочные файлы наших классов:
   Передатчика
   Антенны
   Линии сигнала
*/
#include "receiver.h"
#include "antenna.h"
#include "connectingline.h"

class RadioWindow : public QGraphicsView
{
    Q_OBJECT
public:
    explicit RadioWindow(QWidget *parent = 0);
    ~RadioWindow();
signals:

//private slots:
//    void slotAlarmTimer();
private:
    QGraphicsScene      *scene;     // Объявляем сцену для отрисовки
    Receiver            *receiver;  // Объявляем обьект класса Приемник
    Antenna             *antenna;   // Объявляем обьект класса антенна
    QTimer              *timer;     //Таймер для верной отрисовки
public:
    ConnectingLine      *connectingLine; // Обьявляем обьект класса Линии (имитация соеденения)


};
#endif // RADIOWINDOW_H
