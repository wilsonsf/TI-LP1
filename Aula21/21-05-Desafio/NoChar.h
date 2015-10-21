#ifndef _NOCHAR_H_
#define _NOCHAR_H_
#include <iostream>

#include <string>
class NoChar {
private:
  std::string *valor;
  NoChar *anterior;
  NoChar *proximo;
public:
  NoChar(std::string *valor = NULL, NoChar* anterior = NULL, NoChar* proximo = NULL);
  NoChar(std::string valor, NoChar* anterior = NULL, NoChar* proximo = NULL);
  ~NoChar();

  std::string * getValor () const;
  void setValor(std::string *);

  NoChar * getAnterior() const;
  void setAnterior(NoChar *);

  NoChar * getProximo() const;
  void setProximo(NoChar *);

  friend std::ostream& operator << (std::ostream& os, const NoChar& noReal);
};

#endif