#include "settingswindow.h"
#include "ui_mainwindow.h"
#include "QPainter"
#include <QtGui>

SettingsWindow::SettingsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}

//Не до конца разрбрался с QPainter, но его можно использовать здесь для отрисовки
void SettingsWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    QRect rect(QPoint(40,100),QPoint(100,160));
    painter.drawRect(rect);
    painter.drawEllipse( QRect( QPoint(65,125), QPoint(75,135) ) );

}

void SettingsWindow::on_CloseButton_clicked()
{
    this->close();
}

