#ifndef _NOCHAR_H_
#define _NOCHAR_H_
#include <iostream>

class NoChar {
private:
  char *valor;
  NoChar *anterior;
  NoChar *proximo;
public:
  NoChar(char *valor = NULL, NoChar* anterior = NULL, NoChar* proximo = NULL);
  NoChar(char valor, NoChar* anterior = NULL, NoChar* proximo = NULL);
  ~NoChar();

  char * getValor () const;
  void setValor(char *);

  NoChar * getAnterior() const;
  void setAnterior(NoChar *);

  NoChar * getProximo() const;
  void setProximo(NoChar *);

  friend std::ostream& operator << (std::ostream& os, const NoChar& noReal);
};

#endif