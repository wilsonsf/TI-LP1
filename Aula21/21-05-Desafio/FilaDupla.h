#ifndef _FILADUPLA_H_
#define _FILADUPLA_H_

#include <iostream>
#include "NoChar.h"

class FilaDupla {
private:
  NoChar *cabeca;
  NoChar *cauda;

  int quantidade;

  bool temCabeca();
  bool temCauda();
public:

  FilaDupla(NoChar* cabeca = NULL, NoChar* cauda = NULL);
  ~FilaDupla();

  bool adicionaCabeca(std::string);
  std::string removeCabeca();
  
  bool adicionaCauda(std::string);
  std::string removeCauda();
  
  void removeTudo();
  bool isVazia();
  bool temApenasUmElemento();
  int getNumeroDeElementos();

  NoChar* getCabeca();
  NoChar* getCauda();

  friend std::ostream& operator << (std::ostream& os, FilaDupla& fila);
};

#endif