#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    QString data = QString::number(this->geometry().size().width()) + "x" + QString::number(this->geometry().size().height());
    ui->data->setText(data);
    QWidget::resizeEvent(event);
}
