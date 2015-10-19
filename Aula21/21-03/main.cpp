/*
  Um deque mantém uma lista de caracteres. Implemente um método ehSimétrico() 
  que retorna verdadeiro caso as duas metades desta lista sejam simétricas.
  Exemplos:
  A B A A B A | verdadeiro
  A B C X Y A | falso
  X Y Z Y X | verdadeiro
*/

#include <iostream>
#include <cstring>
#include "FilaDupla.h"
using namespace std;

int main () {

  char entrada[256];
  while (true) {

    FilaDupla *fila = new FilaDupla();

    cin.getline(entrada,256);
    // cout << entrada << endl;

    int tamanho = strlen(entrada);
    for (int pos = 0; pos < tamanho; pos++) {
      fila->adicionaCauda(entrada[pos]);
    }

    cout << "Fila: " << *fila << endl;

    cout << entrada << ( fila->ehSimetrico() ? "" : " nao" ) << " eh simetrico" << endl;

    if (!fila->isVazia()) {
      fila->removeTudo();
    }
    if (fila) {
      delete fila;
    }
  }

  return 0;
}