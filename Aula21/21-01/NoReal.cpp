#include "NoReal.h"

NoReal::NoReal(double *valor, NoReal* anterior, NoReal* proximo)
  : valor(valor), anterior(anterior), proximo(proximo) { }

NoReal::NoReal(double valor, NoReal* anterior, NoReal* proximo)
  : anterior(anterior), proximo(proximo) { 
  this->valor = new double;
  *this->valor = valor;

}

NoReal::~NoReal() {
  if (this->valor) {
    delete valor;
    this->valor = NULL;
  }

  if (this->anterior) {
    // delete anterior;
    this->anterior = NULL;
  }

  if (proximo) {
    // delete proximo;
    this->proximo = NULL;
  }
}

// Getters e Setters
double * NoReal::getValor() const { return this->valor; }
void NoReal::setValor(double *valor) { 
  if (this->valor){
    delete this->valor; 
  }
  this->valor = valor;
}

NoReal * NoReal::getAnterior() const { return this->anterior; }

void NoReal::setAnterior(NoReal *anterior) {
  if (this->anterior) {
    delete this->anterior;
    this->anterior = NULL;
  }
  this->anterior = anterior;
}

NoReal * NoReal::getProximo() const { return this->proximo; }

void NoReal::setProximo(NoReal *proximo) {
  if (this->proximo) {
    delete this->proximo;
    this->proximo = NULL;
  }
  this->proximo = proximo;
}


// Sobrecarga de operadores

std::ostream& operator << (std::ostream& os, const NoReal& noReal) {
  os << *noReal.getValor();
  return os;
}