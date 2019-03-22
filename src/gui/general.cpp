#include "general.h"
#include "ui_general.h"

General::General(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::General)
{
    ui->setupUi(this);


    // sólo se permiten dígitos.
    QList<QLineEdit*> lista = this->findChildren<QLineEdit*>();
    foreach(QLineEdit *l, lista) {
        l->setInputMask("9");
    }
    
    // ponemos el foco en el primer campo.
    ui->txtDigito1->setFocus();
}

General::~General()
{
    delete ui;
}

void General::limpiar()
{

    // borramos todos los campos 
    QList<QLineEdit*> lista = this->findChildren<QLineEdit*>();
    foreach(QLineEdit *l, lista) {
        l->clear();
    }

    // ponemos el foco en el primer campo.
    ui->txtDigito1->setFocus();

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
