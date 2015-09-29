#ifndef _AUTOMOVEL_H_
#define _AUTOMOVEL_H_

class Automovel {
private:
    double quilometragem;
    double litros;
public:
    Automovel(double _quilometragem = 0, double _litros = 0);
    double calculeRendimento();

    double getQuilometragem();
    void setQuilometragem(double);

    double getLitros();
    void setLitros(double);
};
#endif