#include "Nodo.h"
#include <iostream>

Nodo::Nodo(int _valor, Nodo *_proximo) {
    valor = _valor;
    proximo = _proximo;
}

Nodo::~Nodo() {
    delete proximo;
    proximo = NULL;
}