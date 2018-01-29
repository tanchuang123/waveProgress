#include "mainwindow.h"
#include <QApplication>
#include "demo_waveprogress.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Demo_WaveProgress w;
    w.show();

    return a.exec();
}
