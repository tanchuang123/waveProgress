#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "demo_waveprogress.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Demo_WaveProgress *Demo_Wave=new Demo_WaveProgress(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
