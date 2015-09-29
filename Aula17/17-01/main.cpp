/*
    Escreva uma função que receba uma lista encadeada de inteiros terminada 
    em NULL e devolva a soma das chaves dos nodes da lista. 
    Escreva duas versões: uma iterativa e uma recursiva.
*/
// Linha de compilação: g++ Nodo.cpp main.cpp -o teste

#include <iostream>
#include "Lista.h"


void testaNodo();
void testaLista();

int main () {
    // testaNodo();

    testaLista();

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
void testaLista() {
    Lista *lista = new Lista();

    if (!lista->adiciona(5))
        std::cout << "Erro ao adicionar" << std::endl;
    if(!lista->adiciona(9))
        std::cout << "Erro ao adicionar" << std::endl;
    if(!lista->adiciona(-3))
        std::cout << "Erro ao adicionar" << std::endl;


}