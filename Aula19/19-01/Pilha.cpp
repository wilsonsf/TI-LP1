#include "Pilha.h"

Pilha::Pilha() : topo(NULL),comprimento(0) { }

Pilha::~Pilha() {
  Nodo *atual = this->topo;
  while (atual) {
    Nodo *proximo = atual->getProximo();
    delete atual;
    atual = proximo;
  }
}

bool Pilha::push (int valor) {
  try {
    if (!this->topo) {
      this->topo = new Nodo(valor);
    } else {
      Nodo *novoTopo = new Nodo(valor);
      novoTopo->setProximo(this->topo);
      this->topo = novoTopo;
    }
    this->comprimento++;
    return true;
  }
  catch (...) {
    return false;
  }
  return false;
}

int Pilha::pop() {
  int saida = *this->topo->getValor();

  Nodo *seraApagado = this->topo;
  this->topo = seraApagado->getProximo();
  if (seraApagado) {
    delete seraApagado;
    seraApagado = NULL;
  }

  this->comprimento--;
  return saida;
}

Nodo* Pilha::getTopo() {
  return this->topo;
}

std::ostream& operator << (std::ostream& os, Pilha& pilha) {
  Nodo* atual = pilha.getTopo();

  while (atual) {
    os << *atual << (atual->getProximo() != NULL ?  ", " : "" );
    atual = atual->getProximo();
  }

  return os;
}