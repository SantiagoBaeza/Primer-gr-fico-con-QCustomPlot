#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cmath"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, [this](){
        funcion1();
    });
    connect(ui->pushButton_2, &QPushButton::clicked, this, [this](){
        funcion2();
    });

}
void MainWindow::funcion1(){
    QVector<double> x(100), y(100);
    for(int i=0; i<100; i++){
        x[i]= i/10.0;
        y[i]= sin(x[i]);
    }
    //preparo la grafica
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x,y); //aca le pasamos los datos al grafico
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("sin(x)");
    ui->customPlot->rescaleAxes();
    ui->customPlot->replot();
}
void MainWindow::funcion2(){
    QVector<double> x(100), y(100);
    for(int i=0; i<100; i++){
        x[i]= i/10.0;
        y[i]= cos(x[i]);
    }

    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x,y);
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("cos(x)");
    ui->customPlot->rescaleAxes();
    ui->customPlot->replot();
}
MainWindow::~MainWindow()
{
    delete ui;
}
