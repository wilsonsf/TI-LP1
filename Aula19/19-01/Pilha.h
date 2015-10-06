#ifndef _PILHA_H_
#define _PILHA_H_

#include "Nodo.h"

template <class T>
class Pilha {
private:
  Nodo<T> *topo;

public:
  Pilha();
  ~Pilha();
  
  bool push (T);
  T pop();

  void imprime();
  T getTopo();
};

#include "Pilha.inl"
#endif