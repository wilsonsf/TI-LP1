#include "FilaDupla.h"

FilaDupla::FilaDupla(NoReal* cabeca, NoReal* cauda) 
  : cabeca(cabeca), cauda(cauda) { }

FilaDupla::~FilaDupla() {
  NoReal * atual = cabeca;
  while (atual) {
    NoReal * proximo = atual->proximo;
    delete cabeca;
    atual = proximo;
  }
}

void FilaDupla::adicionaCabeca(double valor) {
  NoReal *novaCabeca = new NoReal(valor,NULL,cabeca);

  if (cabeca) {
    cabeca->anterior = novaCabeca;
  }
  if (!temCauda()) {
    cauda = cabeca;
  }
  cabeca = novaCabeca;
}

double FilaDupla::removeCabeca() {
  
  double retorno = 0.0;
  if (temCabeca()) {
    retorno = cabeca->valor;

    NoReal *seraApagado = cabeca;
    if (cauda == cabeca) {
      cabeca = NULL;
      cauda = NULL;
    } else {
      cabeca = cabeca->proximo;
      cabeca->anterior = NULL;
    }
    delete seraApagado;
  }

  return retorno;
}

void FilaDupla::adicionaCauda(double valor) {
  NoReal *novaCauda = new NoReal(valor,cauda);

  if (cauda) {
    cauda->proximo = novaCauda;
  }
  if (!temCabeca()) {
    cabeca = cauda;
  }
  cauda = novaCauda;
}

double FilaDupla::removeCauda() {

  double retorno = 0.0;
  if (temCauda()) {
    retorno = cauda->valor;

    NoReal *seraApagado = cauda;
    if (cauda == cabeca) {
      cabeca = NULL;
      cauda = NULL;
    } else {
      cauda = cauda->anterior;
      cauda->proximo = NULL;
    }

    delete seraApagado;
  }

  return retorno;
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
  return (cabeca ? true : false);
}

bool FilaDupla::temCauda() {
  return (cauda ? true : false);
}

// Sobrecarga de operadores
std::ostream& operator << (std::ostream& os, FilaDupla& fila) {

  NoReal* atual = fila.getCabeca();
  if (atual) {
    do {
      os << atual->valor << (atual->proximo ? " , " : "");
      atual = atual->proximo;
    } while (atual);
  }
  return os;
}