#ifndef _LISTA_H_
#define _LISTA_H_

// #include <iostream>
#include "Nodo.h"

template <class T>
class Lista {
private:
    Nodo<T> * primeiro;
    Nodo<T> * ultimo;
public:
    Lista();
    ~Lista();

    bool adiciona(T);
    void imprime() const;

    T getPrimeiro() const;
    void setPrimeiro(T);
    T getUltimo() const;
    void setUltimo(T);

    std::ostream& operator<<(std::ostream& os, const T& obj);
};

#include "Lista.inl"
#endif