#include "NoChar.h"

NoChar::NoChar(char *valor, NoChar* anterior, NoChar* proximo)
  : valor(valor), anterior(anterior), proximo(proximo) { }

NoChar::NoChar(char valor, NoChar* anterior, NoChar* proximo)
  : anterior(anterior), proximo(proximo) { 
  this->valor = new char;
  *this->valor = valor;

}

NoChar::~NoChar() {
  if (this->valor) {
    delete valor;
    this->valor = NULL;
  }

  if (this->anterior) {
    this->anterior = NULL;
  }

  if (proximo) {
    this->proximo = NULL;
  }
}

// Getters e Setters
char * NoChar::getValor() const { return this->valor; }
void NoChar::setValor(char *valor) { 
  if (this->valor){
    delete this->valor; 
  }
  this->valor = valor;
}

NoChar * NoChar::getAnterior() const { return this->anterior; }

void NoChar::setAnterior(NoChar *anterior) {
  if (this->anterior) {
    this->anterior = NULL;
  }
  this->anterior = anterior;
}

NoChar * NoChar::getProximo() const { return this->proximo; }

void NoChar::setProximo(NoChar *proximo) {
  if (this->proximo) {
    this->proximo = NULL;
  }
  this->proximo = proximo;
}

// Sobrecarga de operadores
std::ostream& operator << (std::ostream& os, const NoChar& noChar) {
  os << "This: " << &noChar << std::endl;
  os << "Valor (" << noChar.getValor() << " : " << *noChar.getValor() << ")" << std::endl;
  os << "Anterior : " << noChar.getAnterior() << std::endl;
  os << "Proximo : " << noChar.getProximo();
  return os;
}