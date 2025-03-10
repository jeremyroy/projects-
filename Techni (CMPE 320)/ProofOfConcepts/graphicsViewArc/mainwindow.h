#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>

namespace Ui {
class mainWindow;
}

class mainWindow : public QGraphicsView
{
    Q_OBJECT
public:
    explicit mainWindow(QWidget *parent = 0);
    int x_init, y_init, x_end, y_end, width, height;

signals:

public slots:
   void mousePressEvent(QMouseEvent * e);
    void mouseReleaseEvent(QMouseEvent * e);
    // void mouseDoubleClickEvent(QMouseEvent * e);
   void mouseMoveEvent(QMouseEvent * e);
private:
    QGraphicsScene * scene;
};

#endif // MAINWINDOW_H
