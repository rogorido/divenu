#include "general.h"
#include "ui_general.h"

General::General(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::General)
{
    ui->setupUi(this);
}

General::~General()
{
    delete ui;
}

void General::limpiar()
{

}

void General::comprobar()
{

}

void General::anadirNuevoCodigo()
{

    
}

void General::cerrar()
{


}
