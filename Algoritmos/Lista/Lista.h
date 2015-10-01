#ifndef _LISTA_H_
#define _LISTA_H_
#include "Nodo.h"

class Lista {
public:
    Nodo * primeiro;
    Nodo * ultimo;
    
    Lista();
    ~Lista();
    bool adiciona(int);
    int calculaSomaRecursiva();
    int calculaSomaIterativa();
private:
    int calculaSomaNodo(Nodo *);
};

#endif