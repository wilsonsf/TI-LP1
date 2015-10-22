#ifndef _PILHA_H_
#define _PILHA_H_

#include "Nodo.h"

class Pilha {
private:
  int comprimento;
  Nodo *topo;

public:
  Pilha();
  ~Pilha();
  
  bool push (int);
  int pop();

  Nodo* getTopo();

  friend std::ostream& operator << (std::ostream&, Pilha&);
};

#endif