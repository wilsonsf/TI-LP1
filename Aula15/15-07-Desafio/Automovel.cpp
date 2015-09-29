#include "Automovel.h"

Automovel::Automovel(double _quilometragem, double _litros) {
    litros = _litros;
    quilometragem = _quilometragem;
}

double Automovel::calculeRendimento() {
    return quilometragem/litros;
}

double Automovel::getQuilometragem() {
    return quilometragem; 
}

void Automovel::setQuilometragem(double _quilometragem) {
    quilometragem = _quilometragem;
}

double Automovel::getLitros() {
    return litros;
}

void Automovel::setLitros(double _litros) {
    litros = _litros;
}