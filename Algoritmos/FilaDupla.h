#ifndef _FILADUPLA_H_
#define _FILADUPLA_H_

#include <iostream>
#include "Nodo.h"

template <class T>
class FilaDupla {
private:
  int comprimento;
  Nodo<T> *cabeca;
  Nodo<T> *cauda;

  bool temCabeca();
  bool temCauda();
public:

  FilaDupla(Nodo<T>* cabeca = NULL, Nodo<T>* cauda = NULL);
  ~FilaDupla();

  bool adicionaCabeca(T);
  T removeCabeca();
  
  bool adicionaCauda(T);
  T removeCauda();
  
  void removeTudo();
  bool isVazia();
  bool temApenasUmElemento();

  Nodo<T>* getCabeca();
  Nodo<T>* getCauda();

  template <class U>
  friend std::ostream& operator << (std::ostream&, FilaDupla<T>&);
};

#include "FilaDupla.inl"
#endif