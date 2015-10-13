#ifndef _NOREAL_H_
#define _NOREAL_H_
#include <iostream>

class NoReal {
public:
  double valor;
  NoReal *anterior;
  NoReal *proximo;
  
  NoReal(double valor = 0, NoReal* anterior = NULL, NoReal* proximo = NULL);
  ~NoReal();

  // friend std::ostream& operator << (std::ostream& os, NoReal& noReal);

};

#endif