#include <iostream>
#include "Nodo.h"


int testaNodo ();
void testaNodoInteiro();

int main () {
    return testaNodo();
}

int testaNodo () {

    testaNodoInteiro();


    return 0;
}

void testaNodoInteiro() {
    Nodo<int> *ultimoNodo = new Nodo<int>(9);
    Nodo<int> *segundoNodo = new Nodo<int>(5,ultimoNodo);
    Nodo<int> *primeiroNodo = new Nodo<int>(1);
    primeiroNodo->setProximo(segundoNodo);

    primeiroNodo->imprime();


}