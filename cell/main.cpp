#include "cellmain.h"
#include "dlg_login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dlg_login dlg;

    int ret = dlg.exec();

        if (1==ret){
            CellMain w;
            w.show();
            return a.exec();
        }
        if(0 == ret){
            exit(0);
            return 0;
        }

        return 0;
}
