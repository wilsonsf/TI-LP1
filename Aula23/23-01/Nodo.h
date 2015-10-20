#ifndef _NOREAL_H_
#define _NOREAL_H_
#include <iostream>

template <class T>
class Nodo {
private:
  T *valor;
  Nodo<T> *anterior;
  Nodo<T> *proximo;
public:
  Nodo(T *valor = NULL, Nodo<T>* anterior = NULL, Nodo<T>* proximo = NULL);
  Nodo(T valor, Nodo<T>* anterior = NULL, Nodo<T>* proximo = NULL);
  ~Nodo();

  T * getValor () const;
  void setValor(T *);

  Nodo<T> * getAnterior() const;
  void setAnterior(Nodo<T> *);

  Nodo<T> * getProximo() const;
  void setProximo(Nodo<T> *);

  template <class U>
  friend std::ostream& operator << (std::ostream& os, const Nodo<U>& noReal);
};

#include "Nodo.inl"
#endif