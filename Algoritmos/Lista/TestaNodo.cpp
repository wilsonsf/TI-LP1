#include <iostream>
#include "Nodo.h"
using namespace std;

class Teste {
public:
  int x;
  int y;

  Teste(int x = 0, int y = 0) {
    this->x = x;
    this->y = y;
  }
  friend ostream& operator<< (ostream& os, Teste& obj) {
    os << "(" << obj.x << "," << obj.y << ")" << endl;
    return os;
  }
};
int testaNodo ();
void testaNodoInteiro();
void testaSobrecargaDoOperador();

int main () {
  return testaNodo();
}

int testaNodo () {

  testaNodoInteiro();
  // testaSobrecargaDoOperador();
  

  return 0;
}

void testaNodoInteiro() {
  Nodo<int> *ultimoNodo = new Nodo<int>(9);
  Nodo<int> *segundoNodo = new Nodo<int>(5,ultimoNodo);
  Nodo<int> *primeiroNodo = new Nodo<int>(1);
  primeiroNodo->setProximo(segundoNodo);

  cout << "Testando método imprime(): ";
  primeiroNodo->imprime();
  cout << endl;

  cout << "Testa overload: ";
  cout << primeiroNodo;
  cout << endl;

  if (primeiroNodo)
    delete primeiroNodo;

}

void testaSobrecargaDoOperador() {
  Teste * t1 = new Teste(12,23);
  Teste * t2 = new Teste(-2,-4);

  Nodo<Teste> *ultimoNodo = new Nodo<Teste>(t1);
  Nodo<Teste> *meioNodo = new Nodo<Teste>(new Teste(-2,4));
  meioNodo->setProximo(ultimoNodo);
  Nodo<Teste> *primeiroNodo = new Nodo<Teste>(t2,meioNodo);

  Nodo<Teste> n1(t1);
  // cout << "Testando sobrecarga estática: ";
  // cout << n1 << endl;

  // cout << "Testando sobrecarga dinâmica: ";
  // cout << *primeiroNodo << endl;



  if (primeiroNodo) {
    delete primeiroNodo;
  }
}