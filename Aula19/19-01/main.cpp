/*

Considere uma pilha em alocação encadeada sem cabeça. Escreva métodos para 
empilhar um elemento na pilha e desempilhar um elemento da pilha.

*/
// Linha de compilação: g++ Pilha.cpp Nodo.cpp main.cpp -o teste

#include <iostream>
#include "Pilha.h"
using std::cout;
using std::endl;

void testaPilha();

int main () {

    testaPilha();

    return 0;
}

void testaPilha() {
    Pilha *pilha = new Pilha();

    pilha->push(1);
    pilha->push(2);
    pilha->push(3);
    pilha->push(4);
    pilha->push(5);

    cout << *pilha << endl;

    cout << "Removido: " << pilha->pop() << endl;
 
    cout << *pilha << endl;

    cout << "Removido: " << pilha->pop() << endl;
 
    cout << *pilha << endl;

}