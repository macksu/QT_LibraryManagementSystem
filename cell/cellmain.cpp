#include "cellmain.h"
#include "ui_cellmain.h"

CellMain::CellMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CellMain)
{
    ui->setupUi(this);
}

CellMain::~CellMain()
{
    delete ui;
}

