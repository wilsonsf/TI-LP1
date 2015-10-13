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

  return 0.0;
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

  return 0.0;
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
    os << "Fila atual: ";

    do {
      os << atual->valor << (atual->proximo ? " - " : "");
      atual = atual->proximo;
    } while (atual);
  }
  return os;
}