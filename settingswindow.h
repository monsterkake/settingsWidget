#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>

namespace Ui {
class SettingsWindow;
}

class SettingsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SettingsWindow(QWidget *parent = nullptr);
    ~SettingsWindow();

    virtual void paintEvent(QPaintEvent *event);
private slots:

    void on_CloseButton_clicked();

private:
    Ui::SettingsWindow *ui;
};

#endif // MAINWINDOW_H
