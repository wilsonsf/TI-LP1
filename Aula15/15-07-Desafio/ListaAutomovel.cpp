#include <iostream>
#include "ListaAutomovel.h"

ListaAutomovel::ListaAutomovel() {
    primeiro = NULL;
    ultimo = NULL;
}

ListaAutomovel::ListaAutomovel(NodoAutomovel * automovel) {
    primeiro = automovel;
}

ListaAutomovel::~ListaAutomovel() {
    delete primeiro;
    primeiro = NULL;
    ultimo = NULL;
}

void ListaAutomovel::adiciona(Automovel *automovel) {
    if (!primeiro) {
        primeiro = new NodoAutomovel(automovel);
    } else {
        NodoAutomovel *onde = primeiro;
        while (onde->proximo) {
            onde = onde->proximo;
        }
        onde->proximo = new NodoAutomovel(automovel);
    }
}

double ListaAutomovel::calculeRendimentoTotal() {
    double somaQuilometragem = 0;
    double somaLitragem = 0;

    NodoAutomovel *iterador = primeiro;
    while (iterador) {
        somaQuilometragem += iterador->conteudo->getQuilometragem();
        somaLitragem += iterador->conteudo->getLitros();

        iterador = iterador->proximo;
    }

    return somaQuilometragem/somaLitragem;
}