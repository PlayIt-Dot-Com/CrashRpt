/*
 * =====================================================================
 *
 *			CrashRpt
 *			Copyright Amlal El Mahrouss, all rights reserved.
 *
 * =====================================================================
 */

/**
 * @brief Crash Report main entrypoint.
 */

#include "crashrptwnd.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CrashRptWnd win;

    win.show();
    return a.exec();
}
