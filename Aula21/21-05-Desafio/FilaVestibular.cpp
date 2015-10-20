#include "FilaVestibular.h"
#include <iostream>

enum : char // C++11
{
  ORDEM_IMPRESSAO_DIRETA = 'd',
  ORDEM_IMPRESSAO_INDIRETA = 'i', // C++11 permite a vírgula extra
};

void FilaVestibular::exibe(int pos, char ordem) {
  NoChar* atual = NULL;

  if (ordem == ORDEM_IMPRESSAO_INDIRETA) {
    atual = this->getCauda();
  } else {
    atual = this->getCabeca();
  }

  while (atual) {
    NoChar * proximo = NULL;
    switch(ordem) {
      case ORDEM_IMPRESSAO_INDIRETA:  proximo = atual->getAnterior();
      break;
      case ORDEM_IMPRESSAO_DIRETA:    proximo = atual->getProximo();
      break;
    }

    std::cout << *atual->getValor() << (proximo ? ", " : "\n");
    atual = proximo;
  }
}