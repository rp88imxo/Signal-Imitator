#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <radiowindow.h>

#include "radiowindow.h" //Заголовочный файл окна с приемником и антенной

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    RadioWindow *radioWindow;
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
