#include "listaEncadeada.h"
#include <iostream>

struct Item * allocaItem() {
    return allocaItemComValor(0);
}

struct Item * allocaItemComValor(int valor) {
    struct Item * init = new struct Item;
    init->valor = valor;
    init->proximo = NULL;
    init->anterior = NULL;
    return init;
}

struct Item * leiaLista() {

    struct Item *primeiroItem;
    primeiroItem = allocaItem();
    std::cin >> primeiroItem->valor;

    while(primeiroItem->valor > 0) {
        int entrada;
        std::cin >> entrada;

        if (entrada <= primeiroItem->valor) {
            struct Item * novo = allocaItemComValor(entrada);
            novo->proximo = primeiroItem;
            primeiroItem->anterior = novo;
            primeiroItem = novo;
        } else {
            struct Item * atual = primeiroItem;
            while (atual->proximo) {
                if (atual)


                atual = atual->proximo;
            }
        }


        if (entrada <= 0) {
            return primeiroItem;
        } 

        // Apagar esse pedaço de código... 
        // else {
        //     insira()
        //     atual->proximo = allocaItem();
        //     atual->proximo->anterior = atual;
        // return leiaLista(atual->proximo);
        // }

    } 
    return primeiroItem;
}

// void insira(struct Item *atual, struct Item *novo) { 
    // if (novo->valor <= primeiro-> valor) {
    //     primeiro->anterior = novo;
    //     novo->proximo = primeiro;
    //     return;
    // } else {
    //     // do {

    //     // } while (primeiro->proximo);
    // }
// }

void imprimaLista(struct Item *atual) {
    std::cout << atual->valor;
    if (atual->proximo) {
        std::cout << ", ";
        imprimaLista(atual->proximo);
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