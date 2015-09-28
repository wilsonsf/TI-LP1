#include "listaEncadeada.h"
#include <iostream>

struct Item * allocaItem() {
    struct Item * init = new struct Item;
    init->proximo = NULL;
    init->anterior = NULL;
    return init;
}

struct Item * leiaLista(struct Item *atual) {
    std::cin >> atual->valor;

    if (atual->valor <= 0) {
        return atual;
    } else {
        atual->proximo = allocaItem();
        atual->proximo->anterior = atual;
        return leiaLista(atual->proximo);
    }
}

void imprimaListaNaOrdemDeInsercao(struct Item *atual) {
    std::cout << atual->valor;
    if (atual->proximo) {
        std::cout << ", ";
        imprimaListaNaOrdemDeInsercao(atual->proximo);
    } else {
        std::cout << std::endl;
    }
}

void imprimaListaNaOrdemInversaDeInsercao(struct Item *atual) {
    std::cout << atual->valor;
    if (atual->anterior) {
        std::cout << ", ";
        imprimaListaNaOrdemInversaDeInsercao(atual->anterior);
    } else {
        std::cout << std::endl;
    }
}

void liberaLista(struct Item *atual) {
    if (!atual->proximo) {
        delete atual;
    } else {
        liberaLista(atual->proximo);
    }
}