#include <iostream>
#include "Lista.h"
using namespace std;

int testaLista ();
void testaListaInteiro();
void testaListaChar();

int main () {
  return testaLista();
}

int testaLista () {
  testaListaInteiro();
  testaListaChar();

  return 0;
}

void testaListaInteiro() {
  cout << "Testando lista de inteiros: " << endl;
  Lista<int> *lista = new Lista<int>();
  lista->adiciona(1);
  lista->adiciona(4);
  lista->adiciona(3);
  lista->adiciona(2);


  cout << "Lista: "  << lista << endl;
  cout << *lista << endl;


  delete lista;

}

void testaListaChar() {
  int alfabeto = 65;

  Lista<char> *lista = new Lista<char>();

  while (alfabeto <= 90) {
    lista->adiciona((char) alfabeto);
    alfabeto++;
  }

  cout << "Lista do alfabeto\n" << *lista << endl;
  Nodo<char> *atual = lista->getPrimeiro();
  while (atual) {
    cout << *atual << (atual->getProximo() ? " - ": "\n");
    atual = atual->getProximo();
  }

  Lista<char> *copia = new Lista<char>(*lista);
  if (lista){
    delete lista;
  }

  atual = copia->getPrimeiro();
  while (atual) {
    cout << *atual << (atual->getProximo() ? " - ": "\n");
    atual = atual->getProximo();
  }

  if (copia) {
    delete copia;
  }
}