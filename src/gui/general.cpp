#include "general.h"
#include "ui_general.h"

#include <QPixmap>
#include <QDebug>

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

    // hacemos las conexiones 
    connect(ui->btSalir, &QPushButton::clicked, this, &General::cerrar);
    connect(ui->btLimpiar, &QPushButton::clicked, this, &General::limpiar);
    connect(ui->btComprobar, &QPushButton::clicked, this, &General::comprobar);

    fallo = new QPixmap();
    
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

    ui->picImagen->clear();

    // ponemos el foco en el primer campo.
    ui->txtDigito1->setFocus();

}

void General::comprobar()
{
    int introducido;
    QString datosmetidos;

    datosmetidos = QString("%1%2%3%4%5%6")
        .arg(ui->txtDigito1->text())
        .arg(ui->txtDigito2->text())
        .arg(ui->txtDigito3->text())
        .arg(ui->txtDigito4->text())
        .arg(ui->txtDigito5->text())
        .arg(ui->txtDigito6->text());

    introducido = datosmetidos.toInt();

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

    this->close();

}

void General::mostrarImagen(bool resultado)
{

    QPixmap acierto(":images/images/Map_of_Central_Asia.png");

    if (resultado)  {
        qDebug() << "estamos en acierto...";
        //ui->picImagen->setPixmap(acierto.scaled(w, h));
        ui->picImagen->setPixmap(acierto);
        ui->picImagen->setScaledContents(true);
        ui->picImagen->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    }

}
