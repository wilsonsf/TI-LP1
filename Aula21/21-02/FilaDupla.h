#ifndef _FILADUPLA_H_
#define _FILADUPLA_H_

#include <iostream>
#include "NoChar.h"

class FilaDupla {
private:
  NoChar *cabeca;
  NoChar *cauda;

  bool temCabeca();
  bool temCauda();
public:

  FilaDupla(NoChar* cabeca = NULL, NoChar* cauda = NULL);
  ~FilaDupla();

  void adicionaCabeca(char);
  char removeCabeca();
  
  void adicionaCauda(char);
  char removeCauda();
  
  void removeTudo();
  bool isVazia();
  bool temApenasUmElemento();

  NoChar* getCabeca();
  NoChar* getCauda();

  friend std::ostream& operator << (std::ostream& os, FilaDupla& fila);
};

#endif