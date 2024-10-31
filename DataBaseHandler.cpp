#include "DataBaseHandler.h"

DataBaseHandler::DataBaseHandler(QObject *parent)
    : QObject(parent)
{
    qDebug()<<"DataBaseHandler::DataBaseHandler";
    m_networkManager = new QNetworkAccessManager(this);
    m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://trackerdatabase-d2dcb-default-rtdb.asia-southeast1.firebasedatabase.app/Users.json")));

    connect(m_networkReply,&QNetworkReply::readyRead,this,&DataBaseHandler::networkReplyReadyRead);
    qDebug()<<"DataBaseHandler::DataBaseHandler [2] ";
}

DataBaseHandler::~DataBaseHandler()
{
    m_networkManager->deleteLater();
}

void DataBaseHandler::networkReplyReadyRead()
{
    qDebug()<<m_networkReply->readAll();
}
// asia-south1.firebasedatabase.app

//trackerdatabase-d2dcb
