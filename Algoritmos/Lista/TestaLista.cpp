#include <iostream>
#include "Lista.h"


int testaLista ();
void testaListaInteiro();

int main () {
    return testaLista();
}

int testaLista () {
    testaListaInteiro();

    Lista<int> *lista = new Lista<int>();
    lista.adiciona(1);
    lista.adiciona(4);
    lista.adiciona(3);
    lista.adiciona(2);

    std::cout << "Lista: " << *lista << std::endl;
    
    return 0;
}

void testaListaInteiro() {

}