#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_owners_clicked()
{
    owners = new Owners(this);
    owners->show();
}


void MainWindow::on_pushButton_exhibits_clicked()
{
    exhibits = new Exhibits(this);
    exhibits->show();
}


void MainWindow::on_pushButton_exhibitions_clicked()
{
    exhibitions = new Exhibitions(this);
    exhibitions->show();
}


void MainWindow::on_pushButton_ExecutionOrders_clicked()
{
    executionOrders = new ExecutionOrders(this);
    executionOrders->show();
}


void MainWindow::on_pushButton_entrances_clicked()
{
    entrances = new Entrances(this);
    entrances->show();
}


void MainWindow::on_pushButton_transfers_clicked()
{
    transfers = new Transfers(this);
    transfers->show();
}


void MainWindow::on_pushButton_ReturnExhibits_clicked()
{
    returnExhibits = new ReturnExhibits(this);
    returnExhibits->show();
}


void MainWindow::on_pushButton_roadMaps_clicked()
{
    roadMap = new RoadMap(this);
    roadMap->show();
}

