#ifndef DEMO_WAVEPROGRESS_H
#define DEMO_WAVEPROGRESS_H

#include <QDialog>

namespace Ui {
class Demo_WaveProgress;
}

class Demo_WaveProgress : public QDialog
{
    Q_OBJECT

public:
    explicit Demo_WaveProgress(QWidget *parent = 0);
    ~Demo_WaveProgress();

private:
    Ui::Demo_WaveProgress *ui;
};

#endif // DEMO_WAVEPROGRESS_H
