#include "FilaDupla.h"

FilaDupla::FilaDupla(NoReal* cabeca, NoReal* cauda) 
  : cabeca(cabeca), cauda(cauda) { }

FilaDupla::~FilaDupla() {
  NoReal * seraApagado = this->cabeca;
  while (seraApagado) {
    NoReal * proximo = seraApagado->getProximo();
    delete seraApagado;
    seraApagado = proximo;
  }
}

void FilaDupla::adicionaCabeca(double valor) {
  NoReal *novaCabeca = new NoReal(valor,NULL,this->cabeca);

  if (temCabeca()) {
    this->cabeca->setAnterior(novaCabeca);
  }
  this->cabeca = novaCabeca;

  if (!temCauda()) {
    this->cauda = this->cabeca;
  }
}

double FilaDupla::removeCabeca() {

  double retorno = 0.0;
  if (!isVazia()) {
    retorno = *cabeca->getValor();
    
    NoReal *seraApagado = this->cabeca;
    if (temApenasUmElemento()) {
      this->cabeca = NULL;
      this->cauda = NULL;
    } else {
      this->cabeca = this->cabeca->getProximo();
      this->cabeca->setAnterior(NULL);
    }
    if (seraApagado) {
      delete seraApagado;
    }

  }
  return retorno;
}

void FilaDupla::adicionaCauda(double valor) {
  NoReal *novaCauda = new NoReal(valor,cauda);

  if (temCauda()) {
    this->cauda->setProximo(novaCauda);
  }
  this->cauda = novaCauda;

  if (!temCabeca()) {
    this->cabeca = this->cauda;
  }
}

double FilaDupla::removeCauda() {

  double retorno = 0.0;
  if (!isVazia()) {
    retorno = *this->cauda->getValor();

    NoReal *seraApagado = this->cauda;
    if (temApenasUmElemento()) {
      this->cabeca = NULL;
      this->cauda = NULL;
    } else {
      this->cauda = this->cauda->getAnterior();
      this->cauda->setProximo(NULL);
    }
    if (seraApagado) {
      delete seraApagado;
    }
  }

  return retorno;
}

void FilaDupla::removeTudo() {
  while (this->cabeca) {
    removeCabeca();
  }
}

bool FilaDupla::isVazia() {
  return !temCabeca() && !temCauda();
}

bool FilaDupla::temApenasUmElemento() {
  return this->cabeca == this->cauda;
}

// Acesso aos ponteiros
NoReal* FilaDupla::getCabeca() {
  return this->cabeca;
}

NoReal* FilaDupla::getCauda() {
  return this->cauda;
}

// métodos privados
bool FilaDupla::temCabeca() {
  return (this->cabeca ? true : false);
}

bool FilaDupla::temCauda() {
  return (this->cauda ? true : false);
}

// Sobrecarga de operadores
std::ostream& operator << (std::ostream& os, FilaDupla& fila) {

  NoReal* atual = fila.getCabeca();
  while (atual) {
      os << *atual->getValor() << (atual->getProximo() ? " , " : "");
      atual = atual->getProximo();
  }
  return os;
}