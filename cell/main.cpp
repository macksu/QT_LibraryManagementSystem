#include "cellmain.h"
#include "dlg_login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dlg_login D;
    D.show();
    return a.exec();
}
