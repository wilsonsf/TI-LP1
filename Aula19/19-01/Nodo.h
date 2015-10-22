#ifndef _NODO_H_
#define _NODO_H_

#include <iostream>

class Nodo {
private:
  int* valor;
  Nodo *proximo;

public:
  Nodo(int* valor = NULL);
  Nodo(int valor = 0);
  ~Nodo();

  int* getValor() const;
  void setValor (int);

  Nodo * getProximo() const;
  void setProximo(Nodo *);

  friend std::ostream& operator << (std::ostream&, const Nodo&);
};

#endif