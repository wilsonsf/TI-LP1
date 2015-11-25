#include <iostream>
#include "Nodo.h"
// using namespace std;
using std::cout;
using std::endl;
using std::ostream;

class Teste {
public:
  int x;
  int y;

  Teste(int x = 0, int y = 0) {
    this->x = x;
    this->y = y;
  }
  friend ostream& operator<< (ostream& os, Teste& obj) {
    os << "(" << obj.x << "," << obj.y << ")";
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
  cout << "Fim do primeiro teste";
  testaSobrecargaDoOperador();
  

  return EXIT_SUCCESS;
}

void testaNodoInteiro() {
  int * ultimo = new int;
  *ultimo = 9;
  Nodo<int> *ultimoNodo = new Nodo<int>();
  ultimoNodo->setValor(ultimo);

  int *segundo = new int;
  *segundo = 5;
  Nodo<int> *segundoNodo = new Nodo<int>();
  segundoNodo->setValor(segundo);

  int *primeiro = new int;
  *primeiro = 1;
  Nodo<int> *primeiroNodo = new Nodo<int>();
  primeiroNodo->setValor(primeiro);

  primeiroNodo->setProximo(segundoNodo);

  cout << *primeiroNodo;
  cout << " | " << *segundoNodo;
  cout << " | " << *ultimoNodo;
  cout << endl;

  Nodo<int> novoNodoCopia1 = *segundoNodo;
  Nodo<int> *novoNodoCopia2 = new Nodo<int>(*segundoNodo);
  Nodo<int> novaCopia3 = novoNodoCopia1;
  Nodo<int> novaCopia4(*ultimoNodo);

  cout << "Teste construtor de copia 1: " << novoNodoCopia1 << endl;
  cout << "Teste construtor de copia 2: " << *novoNodoCopia2 << endl;
  cout << "Teste construtor de copia 3: " << novaCopia3 << endl;
  cout << "Teste construtor de copia 4: " << novaCopia4 << endl;

  if (primeiroNodo)
    delete primeiroNodo;
  if (segundoNodo)
    delete segundoNodo;
  if (ultimoNodo)
    delete ultimoNodo;
  if (novoNodoCopia2)
    delete novoNodoCopia2;
}

void testaSobrecargaDoOperador() {
  Teste * t1 = new Teste(12,23);
  Teste * t2 = new Teste(-2,-4);

  Nodo<Teste> *ultimoNodo = new Nodo<Teste>();
  ultimoNodo->setValor(t1);

  Nodo<Teste> *meioNodo = new Nodo<Teste>();
  meioNodo->setValor(new Teste(-2,4));
  meioNodo->setProximo(ultimoNodo);

  Nodo<Teste> *primeiroNodo = new Nodo<Teste>();
  primeiroNodo->setValor(t2);
  primeiroNodo->setProximo(meioNodo);

  Nodo<Teste> *atual = primeiroNodo;
  while (atual) {
    cout << *atual << " | ";
    atual = atual->getProximo();
  }
  cout << endl;

  Nodo<Teste> n1;
  n1.setValor(new Teste(-23,-12));
  cout << "Testando sobrecarga estática: ";
  cout << n1 << endl;

  cout << "Testando sobrecarga dinâmica: ";
  cout << *primeiroNodo << endl;

  if (primeiroNodo)
    delete primeiroNodo;
  if (meioNodo)
    delete meioNodo;
  if (ultimoNodo)
    delete ultimoNodo;
}