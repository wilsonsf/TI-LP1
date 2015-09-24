#include "listaEncadeada.h"
#include <iostream>

void leiaLista(struct Item *atual) {
    std::cin >> atual->valor;

    if (atual->valor <= 0) {
        return;
    } else {
        atual->proximo = new struct Item;
        return leiaLista(atual->proximo);
    }
}

void imprimaLista(struct Item *atual) {

    if (atual->proximo) {
        imprimaLista(atual->proximo);
    } 
    std::cout << atual->valor << " ";// (atual->proximo ? ", " : "");
}

void liberaLista(struct Item *atual) {
    if (!atual->proximo) {
        delete atual;
    } else {
        liberaLista(atual->proximo);
    }
}