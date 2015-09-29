/*
    Escreva uma função que receba uma lista encadeada de inteiros terminada 
    em NULL e devolva a soma das chaves dos nodes da lista. 
    Escreva duas versões: uma iterativa e uma recursiva.
*/
// Linha de compilação: g++ Nodo.cpp main.cpp -o teste

#include <iostream>
#include "Lista.h"


void testaNodo();

int main () {


    return 0;
}

void testaNodo() {
    
    Nodo *novo = new Nodo();

    Nodo *teste = new Nodo(5);

    teste->proximo = novo;

    if (teste) {
        delete teste;
        teste = NULL;
    }
    if (novo) {
        delete novo;
        novo = NULL;
    }
}