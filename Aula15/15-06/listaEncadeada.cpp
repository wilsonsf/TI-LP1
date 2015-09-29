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
        imprimaLista(primeiroItem);
        int entrada;
        std::cin >> entrada;

        if (entrada <= primeiroItem->valor) {

            // Cria objeto e atualiza referencia do primeiro pra ele
            struct Item * novo = allocaItemComValor(entrada);
            novo->proximo = primeiroItem;
            primeiroItem->anterior = novo;
            primeiroItem = novo;
        } else {

            // Será inserido entre dois elementos
            struct Item * atual = primeiroItem;
            while (atual->proximo) {
                if (entrada <= atual->proximo->valor) {
                    struct Item *novo = allocaItemComValor(entrada);

                    novo->anterior = atual;
                    novo->proximo = atual->proximo;
                    
                    novo->proximo->anterior = novo;
                    atual->proximo = novo;

                    break;

                }
                atual = atual->proximo;
            }

            // É maior do que todos existentes, será inserido no final
            if (!atual->proximo) {
                struct Item *novo = allocaItemComValor(entrada);
                atual-> proximo = novo;
                novo->anterior = atual;
            }
        }

        if (entrada <= 0) {
            return primeiroItem;
        }
    } 
    return primeiroItem;
}

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