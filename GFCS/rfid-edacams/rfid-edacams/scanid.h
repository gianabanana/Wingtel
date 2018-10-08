#ifndef SCANID_H
#define SCANID_H

#include <QWidget>
#include <PCSC/winscard.h>
#include <QDebug>
#include <QThread>

namespace Ui {
class scanID;
}

class scanID : public QWidget
{
    Q_OBJECT

public:
    explicit scanID(QWidget *parent = 0);
    void start(QString name);
    QString cardUID = NULL;
    bool mStop;

private:
    Ui::scanID *ui;
    QString         nfccard = NULL;
    SCARDCONTEXT    hSC;
    SCARDHANDLE     hCardHandle;
    SCARDCONTEXT    hContext;
//    LPTSTR          pCard = NULL;
//    LPTSTR          pReader = NULL;

signals:

    void on_number(QString cardName);

public slots:
    void stop();
    void CardEstablishContext();
    void CardListReaders();
    void CardConnect(QString s);
    void CardListReaderGroups();
    void CardListCards();
    void CardIntroduceCardType();
    void CardReleaseContext();
    void CardStatus();
    void CardTransmit();
    void CardDisconnect();
    void CardFreeMemory();


};

#endif // SCANID_H
