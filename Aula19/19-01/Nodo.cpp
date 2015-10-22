#include "Nodo.h"

Nodo::Nodo(int* valor) : valor(valor), proximo(NULL) { }

Nodo::Nodo(int valor) : proximo(NULL) {
  this->valor = new int();
  if (this->valor) {
    *this->valor = valor;
  }
}

Nodo::~Nodo() {
  if (this->proximo) {
    this->proximo = NULL;
  }
  if (this->valor) {
    delete valor;
    this->valor = NULL;
  }
}

int* Nodo::getValor() const {
  return this->valor;
}

void Nodo::setValor (int valor) {
  *this->valor = valor;
}

Nodo * Nodo::getProximo() const {
  return this->proximo;
}

void Nodo::setProximo(Nodo *proximo) {
  this->proximo = proximo;
}

std::ostream& operator << (std::ostream& os, const Nodo& nodo) {
  // Debug
  /*
    os << "This: " << &nodo << std::endl;
    os << "&Valor: " << nodo.getValor() << std::endl;
    os << "Valor: " << *nodo.getValor() << std::endl;
    os << "Proximo: " << nodo.getProximo() << std::endl;
  */
  os << *nodo.getValor();
  return os;
}









