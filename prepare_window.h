#ifndef PREPARE_WINDOW_H
#define PREPARE_WINDOW_H

#include <QMainWindow>

namespace Ui {
class prepare_window;
}

class prepare_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit prepare_window(QWidget *parent = nullptr);
    ~prepare_window();

private:
    Ui::prepare_window *ui;
};

#endif // PREPARE_WINDOW_H
