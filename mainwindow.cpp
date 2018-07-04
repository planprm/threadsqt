#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    thread1 = new mythread();
    thread2 = new mythread();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    thread1->start();
    thread2->start();
    thread1->generate();
    thread2->generate();
    QString str;
    QString str2;
    for(int i=0;i<k;++i)
    {
        str += QString::number(thread1->a[i]) + " ";
        str2 += QString::number(thread2->a[i]) + " ";
    }
    ui->lineEdit->setText(str);
}

void MainWindow::on_pushButton_clicked()
{
    QString str;
    QString str2;
    thread1->start();

    for(int i=0;i<k;++i)
    {
        str += QString::number(thread1->a[i]) + " ";
    }
    thread2->start();
    thread2->sort = true;
    for(int i=0;i<k;++i)
    {
        str2 += QString::number(thread2->a[i]) + " ";
    }
    ui->lineEdit_2->setText(str);
    ui->lineEdit_3->setText(str2);

}

void MainWindow::sortbubble()
{
    ui->lineEdit_2->setText("1");
}

void MainWindow::searchmax()
{
    ui->lineEdit_3->setText("2");
}
