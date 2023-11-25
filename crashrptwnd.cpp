/*
 * =====================================================================
 *
 *			CrashRpt
 *			Copyright Amlal El Mahrouss, all rights reserved.
 *
 * =====================================================================
 */

/**
 * @brief Crash Report class
 */

#include "crashrptwnd.h"
#include "ui_crashrptwnd.h"
#include <QMessageBox>

CrashRptWnd::CrashRptWnd(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CrashRptWnd)
    , manager(new QNetworkAccessManager())
{
    ui->setupUi(this);
    ui->textEdit->setAcceptRichText(false);

    QObject::connect(manager, &QNetworkAccessManager::finished,
        this, [=](QNetworkReply *reply)
        {
            if (reply->error())
            {
                QMessageBox::information(this, "CrashRpt", "Someting went wrong...");

                QCoreApplication::quit();
                return;
            }

            QMessageBox::information(this, "CrashRpt", "Sent debug with success!");
            QCoreApplication::quit();
        }
    );
}

CrashRptWnd::~CrashRptWnd()
{
    delete ui;
}


void CrashRptWnd::on_pushButton_clicked(bool checked)
{
    (void)checked;
    QNetworkRequest request;

    request.setUrl(QUrl("https://play-xplicit.com/bug-report"));
    request.setRawHeader("Content-Bug", ui->textEdit->toPlainText().toUtf8());

    manager->get(request);
}


void CrashRptWnd::on_pushButton_2_clicked()
{
    QCoreApplication::quit();
}

