#include "FilaVestibular.h"
#include <iostream>

enum : char // C++11
{
  ORDEM_IMPRESSAO_DIRETA = 'd',
  ORDEM_IMPRESSAO_INDIRETA = 'i', // C++11 permite a vírgula extra
};

void FilaVestibular::exibe(int pos, char ordem) {
  NoChar* noAtual;
  int indiceAtual;
  if (ordem == ORDEM_IMPRESSAO_INDIRETA) {
    noAtual = this->getCauda();
    indiceAtual = this->getNumeroDeElementos()-1;
  } else {
    noAtual = this->getCabeca();
    indiceAtual = 0;
  }

  while (noAtual) {
    

    int incremento;
    NoChar * proximo;
    switch(ordem) {
      case ORDEM_IMPRESSAO_INDIRETA:  
        proximo = noAtual->getAnterior();
        incremento = -1;
      break;
      case ORDEM_IMPRESSAO_DIRETA:    
        proximo = noAtual->getProximo();
        incremento = 1;
      break;
    }

    if (indiceAtual >= pos){
      std::cout << *noAtual->getValor() << ( proximo ? ", " : "" );
    }
    indiceAtual += incremento;
    noAtual = proximo;
  }
  std::cout << std::endl;
}