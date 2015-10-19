#ifndef _NOREAL_H_
#define _NOREAL_H_
#include <iostream>

class NoReal {
private:
  double *valor;
  NoReal *anterior;
  NoReal *proximo;
public:
  NoReal(double *valor = NULL, NoReal* anterior = NULL, NoReal* proximo = NULL);
  NoReal(double valor, NoReal* anterior = NULL, NoReal* proximo = NULL);
  ~NoReal();

  double * getValor () const;
  void setValor(double *);

  NoReal * getAnterior() const;
  void setAnterior(NoReal *);

  NoReal * getProximo() const;
  void setProximo(NoReal *);

  friend std::ostream& operator << (std::ostream& os, const NoReal& noReal);
};

#endif