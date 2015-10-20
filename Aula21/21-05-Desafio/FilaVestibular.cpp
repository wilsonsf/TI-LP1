#include "FilaVestibular.h"

enum : char // C++11
{
  ORDEM_IMPRESSAO_DIRETA = 'd',
  ORDEM_IMPRESSAO_INDIRETA = 'i', // C++11 permite a vírgula extra
};

void FilaVestibular::exibe(int pos, char ordem) {
  int incremento;
  NoChar* atual;

  if (ordem == ORDEM_IMPRESSAO_INDIRETA) {

  } else {

  }

  // while (atual) {
  //     os << *atual->getValor() << (atual->getProximo() ? " , " : "");
  //     atual = atual->getProximo();
  // }
}