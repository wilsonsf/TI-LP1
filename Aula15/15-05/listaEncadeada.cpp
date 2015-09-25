#include "listaEncadeada.h"
#include <iostream>

struct Item * leiaLista(struct Item *atual) {
    std::cin >> atual->valor;

    if (atual->valor <= 0) {
        //atual é o último, como faço pra armazenar isso?
        return atual;
    } else {
        atual->proximo = new struct Item;
        atual->proximo->anterior = atual;
        return leiaLista(atual->proximo);
    }
}

void imprimaListaNaOrdemDeInsercao(struct Item *atual) {
    std::cout << atual->valor << (atual->proximo ? ", " : "");
    if (atual->proximo) {
        imprimaListaNaOrdemDeInsercao(atual->proximo);
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