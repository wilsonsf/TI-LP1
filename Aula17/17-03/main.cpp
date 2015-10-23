/*
    Implementação de lista encadeada usando a estrutura do exercício anterior.
*/

// g++ numerosReais.cpp separadorFracionario.cpp main.cpp -o teste


#include <iostream>
#include "numerosReais.h"
#include "Lista.h"


void testaLista();
int main () {

    Lista<realtype> *lista = new Lista<realtype>();

    realtype r1;// = new realtype;
    r1 = floatParaRealtype(3.5);

    // Formatar impressão
    // std::cout << r1. << std::endl;

    lista->adiciona(r1);

    lista->imprime();

    return 0;
}

void testaLista() {

}