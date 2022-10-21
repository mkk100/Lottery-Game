#include "mainwindow.h"
#include <cstdlib>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(500,500);
    srand(0);
    bg = new QButtonGroup(this);
    for(int i = 0;i < 5;i++){
        for(int j = 0; j< 5;j++){
            s[i][j] = rand() % 10;
            b = new QPushButton("$$$",this);
            bg->addButton(b,(i*5)+j);
            b->setGeometry(j*50,(i+1)*50,50,50);
        }
    }
}


