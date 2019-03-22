#ifndef GENERAL_H
#define GENERAL_H

#include <QWidget>

namespace Ui {
class General;
}

class General : public QWidget
{
    Q_OBJECT

public:
    explicit General(QWidget *parent = nullptr);
    ~General();

private slots:
    void limpiar();
    void comprobar();

    void anadirNuevoCodigo();

    void cerrar();
    
private:
    Ui::General *ui;
};

#endif // GENERAL_H
