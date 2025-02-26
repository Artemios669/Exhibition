#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "owners.h"
#include "exhibits.h"
#include "exhibitions.h"
#include "executionorders.h"
#include "entrances.h"
#include "transfers.h"
#include "returnexhibits.h"
#include "roadmap.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_owners_clicked();

    void on_pushButton_exhibits_clicked();

    void on_pushButton_exhibitions_clicked();

    void on_pushButton_ExecutionOrders_clicked();

    void on_pushButton_entrances_clicked();

    void on_pushButton_transfers_clicked();

    void on_pushButton_ReturnExhibits_clicked();

    void on_pushButton_roadMaps_clicked();

private:
    Ui::MainWindow *ui;
    Owners *owners;
    Exhibits *exhibits;
    Exhibitions *exhibitions;
    ExecutionOrders *executionOrders;
    Entrances *entrances;
    Transfers *transfers;
    ReturnExhibits *returnExhibits;
    RoadMap *roadMap;
};
#endif // MAINWINDOW_H
