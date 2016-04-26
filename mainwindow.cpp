#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString temp();
    temp.toLocal8Bit().data();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter MyPainter(this);
    MyPainter.setPen(Qt::blue);
    MyPainter.setFont(QFont("Arial", 30));
    MyPainter.drawText(rect(), Qt::AlignCenter, "Hello world!");
}
