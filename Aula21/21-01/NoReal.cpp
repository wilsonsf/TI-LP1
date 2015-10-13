#include "NoReal.h"

NoReal::NoReal(double valor, NoReal* anterior, NoReal* proximo)
  : valor(valor), anterior(anterior), proximo(proximo) { }

NoReal::~NoReal() {
  if (anterior) {
    // delete anterior;
    anterior = NULL;
  }
  if (proximo) {
    // delete proximo;
    proximo = NULL;
  }
}

// std::ostream& operator << (std::ostream& os, NoReal& noReal) {
//   // os << noReal.valor;
//   return os;
// }