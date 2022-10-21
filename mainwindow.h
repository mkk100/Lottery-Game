#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QButtonGroup>
#include <QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private:
    Ui::MainWindow *ui;
    QPushButton *b;
    QButtonGroup *bg;
    int s[5][5];
};
#endif // MAINWINDOW_H
