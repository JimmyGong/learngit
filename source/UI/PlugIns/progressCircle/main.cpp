#include "progresscircle.h"
#include <QApplication>
#include <ui_dialog.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    ProgressCircle * pc = new ProgressCircle();
    pc->show();

    return a.exec();
}
