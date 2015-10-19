#include "FilaDupla.h"

FilaDupla::FilaDupla(NoChar* cabeca, NoChar* cauda) 
  : cabeca(cabeca), cauda(cauda) { }

FilaDupla::~FilaDupla() {
  NoChar * seraApagado = this->cabeca;
  while (seraApagado) {
    NoChar * proximo = seraApagado->getProximo();
    delete seraApagado;
    seraApagado = proximo;
  }
}

void FilaDupla::adicionaCabeca(char valor) {
  NoChar *novaCabeca = new NoChar(valor,NULL,this->cabeca);

  if (temCabeca()) {
    this->cabeca->setAnterior(novaCabeca);
  }
  this->cabeca = novaCabeca;

  if (!temCauda()) {
    this->cauda = this->cabeca;
  }
}

char FilaDupla::removeCabeca() {

  char retorno = 0.0;
  if (!isVazia()) {
    retorno = *cabeca->getValor();
    
    NoChar *seraApagado = this->cabeca;
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

void FilaDupla::adicionaCauda(char valor) {
  NoChar *novaCauda = new NoChar(valor,cauda);

  if (temCauda()) {
    this->cauda->setProximo(novaCauda);
  }
  this->cauda = novaCauda;

  if (!temCabeca()) {
    this->cabeca = this->cauda;
  }
}

char FilaDupla::removeCauda() {

  char retorno = 0.0;
  if (!isVazia()) {
    retorno = *this->cauda->getValor();

    NoChar *seraApagado = this->cauda;
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
NoChar* FilaDupla::getCabeca() {
  return this->cabeca;
}

NoChar* FilaDupla::getCauda() {
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

  NoChar* atual = fila.getCabeca();
  while (atual) {
      os << *atual->getValor() << (atual->getProximo() ? " , " : "");
      atual = atual->getProximo();
  }
  return os;
}