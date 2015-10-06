#ifndef _NODO_H_
#define _NODO_H_

#include <iostream>

template <class T>
class Nodo {
private:
  T valor;
  Nodo *proximo;

public:
  Nodo(T valor = NULL, Nodo<T> *proximo = NULL);
  ~Nodo();

  void imprime() const;

  T getValor() const;
  void setValor (T);

  Nodo * getProximo() const;
  void setProximo(Nodo<T> *);
};

#include "Nodo.inl"
#endif