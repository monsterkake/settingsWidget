#include "settingswindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SettingsWindow settingsWindow;
    settingsWindow.show();
    return a.exec();
}
