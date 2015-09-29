#include "NodoAutomovel.h"
#include <iostream>

// NodoAutomovel::NodoAutomovel() {
//     proximo = NULL;
//     conteudo = NULL;
// }

// NodoAutomovel::NodoAutomovel(Automovel *_conteudo) {
//     NodoAutomovel();
//     conteudo = _conteudo;
// }

NodoAutomovel::NodoAutomovel(Automovel *_conteudo, NodoAutomovel *_proximo) {
    conteudo = _conteudo;
    proximo = _proximo;
}

NodoAutomovel::~NodoAutomovel() {
    delete proximo;
    delete conteudo;
    proximo = NULL;
    conteudo = NULL;
}

double NodoAutomovel::calculeRendimento() {
    return conteudo->calculeRendimento();
}