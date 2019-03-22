#include <QApplication>

#include "gui/general.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    General w;
    w.show();

    return a.exec();
}
