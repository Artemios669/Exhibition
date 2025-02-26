#include "mainwindow.h"
#include "databasemanager.h"
#include <QApplication>
#include <QDir>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString appDir = QApplication::applicationDirPath();
    QString dbPath = QDir(appDir).filePath("exhibitionDB.db");
    qDebug() << dbPath;
    if (DatabaseManager::instance().connect(dbPath))
    {
        QSqlQuery query = DatabaseManager::instance().createQuery();
    }
    MainWindow w;
    w.show();
    return a.exec();
}
