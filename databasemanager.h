#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include <QTableWidgetItem>
#include <QCoreApplication>
#include <QDir>

class DatabaseManager {
public:
    static DatabaseManager& instance() {
        static DatabaseManager instance;
        return instance;
    }

    QSqlDatabase getDatabase() {
        return db;
    }
    bool connect(const QString& dbPath) {
        if (db.isOpen()) {
            qDebug() << "База данных уже подключена.";
            return true;
        }

        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(dbPath);

        if (!db.open()) {
            qDebug() << "Ошибка подключения к базе данных:" << db.lastError().text();
            return false;
        }

        qDebug() << "Успешное подключение к базе данных!";
        return true;
    }

    QSqlQuery createQuery() {
        if (!db.isOpen()) {
            qDebug() << "База данных не подключена!";
        }
        return QSqlQuery(db);
    }

    void close() {
        if (db.isOpen()) {
            db.close();
            qDebug() << "Подключение к базе данных закрыто.";
        }
    }

private:
    QSqlDatabase db;

    DatabaseManager() {}

    DatabaseManager(const DatabaseManager&) = delete;
    DatabaseManager& operator=(const DatabaseManager&) = delete;

    ~DatabaseManager() {
        close();
    }
};

#endif // DATABASEMANAGER_H
