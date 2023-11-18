/*
 * =====================================================================
 *
 *			XAGE CrashRpt
 *			Copyright XPX Corporation, all rights reserved.
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
