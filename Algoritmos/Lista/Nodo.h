#ifndef _NODO_H_
#define _NODO_H_

#include <iostream>

template <class T>
class Nodo {
private:
  T* conteudo;
  Nodo *proximo;

public: 
  Nodo(T* conteudo = NULL, Nodo<T> *proximo = NULL);
  Nodo(T conteudo, Nodo<T> * proximo = NULL);
  ~Nodo();

  void imprime() const;

  T* getConteudo() const;
  void setConteudo (T);

  Nodo * getProximo() const;
  void setProximo(Nodo<T> *);

  // friend std::ostream& operator<< (std::ostream& os, Nodo<T> nodo);
  // friend std::ostream& operator<<(std::ostream& os, const Nodo<T> nodo);
};

#include "Nodo.inl"
#endif