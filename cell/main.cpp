#include "cellmain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CellMain w;
    w.show();
    return a.exec();
}
