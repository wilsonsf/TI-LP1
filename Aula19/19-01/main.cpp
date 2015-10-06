/*
    Considere uma pilha em alocação encadeada sem cabeça. Escreva métodos para 
    empilhar um elemento na pilha e desempilhar um elemento da pilha.
*/
// Linha de compilação: g++ main.cpp -o teste

#include <iostream>
#include "Pilha.h"

void testaPilha();

int main () {

    testaPilha();

    return 0;
}

void testaPilha() {
    Pilha<int> *pilha = new Pilha<int>();

    pilha->push(1);
    pilha->push(2);
    pilha->push(3);
    pilha->push(4);
    pilha->push(5);

    pilha->imprime();

    std::cout << "Removido: " << pilha->pop() << std::endl;
 
    pilha->imprime();

    std::cout << "Removido: " << pilha->pop() << std::endl;
 
    pilha->imprime();

}