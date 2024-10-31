#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
// #include <QHttpMultiPart>
// #include <QJsonDocument>
// #include <QJsonObject>
// #include <QUrl>
// #include <QJsonArray>
#include <QNetworkInterface>
#include <QDebug>
class DataBaseHandler : public QObject
{
    Q_OBJECT
public:
    DataBaseHandler(QObject *parent = nullptr);

    ~DataBaseHandler();

    // Q_INVOKABLE void connectDB();

public slots:
    void networkReplyReadyRead();


private:
    QNetworkAccessManager * m_networkManager;
    QNetworkReply* m_networkReply;
};

#endif // DATABASEHANDLER_H
