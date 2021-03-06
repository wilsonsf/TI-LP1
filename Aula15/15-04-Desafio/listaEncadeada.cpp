#include "listaEncadeada.h"
#include <iostream>

void leiaListaIterativa(struct Item * primeiro) {
    struct Item *atual;

    atual = primeiro;
    while(true) {
        std::cin >> atual->valor;

        // condição de parada
        if (atual->valor <= 0) {
            return;
        } else {
            atual->proximo = new struct Item;
            atual = atual->proximo;
        }
    }
}

void leiaListaRecursiva(struct Item *atual) {
    std::cin >> atual->valor;

    if (atual->valor <= 0) {
        return;
    } else {
        atual->proximo = new struct Item;
        return leiaListaRecursiva(atual->proximo);
    }
}

void imprimaLista(struct Item *atual) {

    std::cout << atual->valor << (atual->proximo ? ", " : "");
    
    if (atual->proximo) {
        return imprimaLista(atual->proximo);
    } else {
        std::cout << std::endl;
    }
}

void liberaLista(struct Item *atual) {
    if (!atual->proximo) {
        delete atual;
    } else {
        return liberaLista(atual->proximo);
    }
}