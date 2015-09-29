#ifndef _AUTOMOVEL_H_
#define _AUTOMOVEL_H_

class Automovel {
private:
    double quilometragem;
    double litros;
public:
    Automovel();
    double calculeRendimento();

    double getQuilometragem();
    void setQuilometragem(double);

    double getLitros();
    void setLitros(double);
};
#endif