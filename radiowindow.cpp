#include "radiowindow.h"

RadioWindow::RadioWindow(QWidget *parent)
    :QGraphicsView(parent)
{
    /* Настройка виджета  */
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // Отключим скроллбар по горизонтали
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);   // Отключим скроллбар по вертикали


    scene = new QGraphicsScene();
    this->setScene(scene); //Устанавливаем сцену в текущий виджет

    /*Инициализируем обьекты классов*/
    antenna  = new Antenna(25,125);
    receiver = new Receiver(550,125);
    connectingLine = new ConnectingLine(new QPen(Qt::red),45,63);





    scene->setSceneRect(0,0,800,600);
    scene->addItem(antenna);
    scene->addItem(receiver);
    scene->addItem(connectingLine);
}

RadioWindow::~RadioWindow() //Деструктор класса по дефолту
{

}

