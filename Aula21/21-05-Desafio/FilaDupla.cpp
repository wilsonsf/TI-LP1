#include "FilaDupla.h"

FilaDupla::FilaDupla(NoChar* cabeca, NoChar* cauda) 
  : cabeca(cabeca), cauda(cauda), quantidade(0) {
    if (cabeca) this->quantidade++;
    if (cauda) this->quantidade++;
}

FilaDupla::~FilaDupla() {
  NoChar * seraApagado = this->cabeca;
  while (seraApagado) {
    NoChar * proximo = seraApagado->getProximo();
    delete seraApagado;
    seraApagado = proximo;
  }
}

bool FilaDupla::adicionaCabeca(std::string valor) {
  NoChar *novaCabeca = new NoChar(valor,NULL,this->cabeca);

  if (!novaCabeca) {
    return false;
  }
  else {
    if (temCabeca()) {
      this->cabeca->setAnterior(novaCabeca);
    }
    this->cabeca = novaCabeca;

    if (!temCauda()) {
      this->cauda = this->cabeca;
    }

    this->quantidade++;
    return true;
  }
}

std::string FilaDupla::removeCabeca() {

  std::string retorno;
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
  this->quantidade--;

  return retorno;
}

bool FilaDupla::adicionaCauda(std::string valor) {
  NoChar *novaCauda = new NoChar(valor,cauda);

  if (!novaCauda) {
    return false;
  } else {
    if (temCauda()) {
      this->cauda->setProximo(novaCauda);
    }
    this->cauda = novaCauda;

    if (!temCabeca()) {
      this->cabeca = this->cauda;
    }
    this->quantidade++;

    return true;
  }
}

std::string FilaDupla::removeCauda() {

  std::string retorno;
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
  this->quantidade--;

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
  // return this->quantidade == 1;
  return this->cabeca == this->cauda;
}

int FilaDupla::getNumeroDeElementos() {
  return this->quantidade;
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
  // return this->quantidade > 0;
  return (this->cabeca ? true : false);
}

bool FilaDupla::temCauda() {
  // return this->quantidade > 0;
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