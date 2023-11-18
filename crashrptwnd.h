/*
 * =====================================================================
 *
 *			XAGE CrashRpt
 *			Copyright XPX Corporation, all rights reserved.
 *
 * =====================================================================
 */

/**
 * @brief Crash Report class
 */

#ifndef CRASHRPTWND_H
#define CRASHRPTWND_H

#include <QMainWindow>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkAccessManager>

QT_BEGIN_NAMESPACE
namespace Ui { class CrashRptWnd; }
QT_END_NAMESPACE

class CrashRptWnd : public QMainWindow
{
    Q_OBJECT

public:
    CrashRptWnd(QWidget *parent = nullptr);
    ~CrashRptWnd();

private slots:
    void on_pushButton_clicked(bool checked);

    void on_pushButton_2_clicked();

private:
    Ui::CrashRptWnd *ui;
    QNetworkAccessManager* manager;

};

#endif // CRASHRPTWND_H
