#ifndef _FILADUPLA_H_
#define _FILADUPLA_H_

#include <iostream>
#include "NoReal.h"

class FilaDupla {
private:
  NoReal *cabeca;
  NoReal *cauda;

  bool temCabeca();
  bool temCauda();
public:

  FilaDupla(NoReal* cabeca = NULL, NoReal* cauda = NULL);
  ~FilaDupla();

  void adicionaCabeca(double);
  double removeCabeca();
  
  void adicionaCauda(double);
  double removeCauda();
  
  void removeTudo();
  bool isVazia();
  bool temApenasUmElemento();

  NoReal* getCabeca();
  NoReal* getCauda();

  friend std::ostream& operator << (std::ostream& os, FilaDupla& fila);
};

#endif