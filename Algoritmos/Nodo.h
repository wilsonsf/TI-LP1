#ifndef _NODO_H_
#define _NODO_H_
#include <iostream>

template <class T>
class Nodo {
private:
  T* valor;
  Nodo<T> *anterior;
  Nodo<T> *proximo;
public:
  Nodo();
  Nodo(const Nodo<T>&);
  ~Nodo();

  T* getValor () const;
  void setValor(T*);

  Nodo<T> * getAnterior() const;
  void setAnterior(Nodo<T> *);

  Nodo<T> * getProximo() const;
  void setProximo(Nodo<T> *);

  template <class U>
  friend std::ostream& operator << (std::ostream&, const Nodo<T>&);
};

#include "Nodo.inl"
#endif