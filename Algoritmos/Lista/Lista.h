#ifndef _LISTA_H_
#define _LISTA_H_
#include <iostream>

template <class T>
class Lista {
private:
    Nodo<T> * primeiro;
    Nodo<T> * ultimo;
public:
    Lista();
    ~Lista();

    bool adiciona(T);

    T getPrimeiro();
    void setPrimeiro(T);
    T getUltimo();
    void setUltimo(T);
};

#include "Lista.inl"
#endif