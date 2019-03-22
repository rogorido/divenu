#include <QApplication>

#include "gui/general.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Q_INIT_RESOURCE(icons);
    
    General w;
    w.show();

    return a.exec();
}
