#ifndef CELLMAIN_H
#define CELLMAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CellMain; }
QT_END_NAMESPACE

class CellMain : public QMainWindow
{
    Q_OBJECT

public:
    CellMain(QWidget *parent = nullptr);
    ~CellMain();

private:
    Ui::CellMain *ui;
};
#endif // CELLMAIN_H
