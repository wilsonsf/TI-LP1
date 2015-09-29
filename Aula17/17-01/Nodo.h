#ifndef _NODO_H_
#define _NODO_H_

#include <iostream>

class Nodo {
public:
    int valor;
    Nodo *proximo;

    Nodo(int _valor = 0, Nodo *_proximo = NULL);
    ~Nodo();
};
#endif