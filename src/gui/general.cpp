#include "general.h"
#include "ui_general.h"

const int control = 628123;

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
    int introducido;

    if ( introducido == control )
        mostrarImagen(true);
    else
        mostrarImagen(false);

}

void General::anadirNuevoCodigo()
{

    
}

void General::cerrar()
{


}

void General::mostrarImagen(bool resultado)
{


}
