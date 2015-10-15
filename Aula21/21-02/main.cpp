/*
  Uma palavra é um palíndromo se a sequência de caracteres que a constitui é a
  mesma quer seja lida da esquerda para a direita ou da direita para a esquerda. 
  Por exemplo, as palavras RADAR e MIRIM são palíndromos. 
  Usando deque, crie uma função que, recebendo uma palavra, determinar se 
  ela é, ou não, palíndromo.
*/

// Linha de compilação: g++ main.cpp NoChar.cpp FilaDupla.cpp -o teste

#include <iostream>
#include "FilaDupla.h"
// #include "NoChar.h"
using namespace std;

void testeNoChar();
void testePalindromo();
bool ehPalindromo(FilaDupla &);

int main () {
  // testeNoChar();
  testePalindromo();

  return 0;
}

void testePalindromo() {
  char palavra1[] = "RADAR";
  char palavra2[] = "MIRIM";
  char palavra3[] = "FALSO";

  FilaDupla *fila1 = new FilaDupla();
  FilaDupla *fila2 = new FilaDupla();
  FilaDupla *fila3 = new FilaDupla();

  int tamanho = 0;
  while ( tamanho < 5 ) {
    fila1->adicionaCauda(palavra1[tamanho]);
    fila2->adicionaCauda(palavra2[tamanho]);
    fila3->adicionaCauda(palavra3[tamanho]);

    tamanho ++;
  }

  cout << palavra1 << (ehPalindromo(*fila1) ? "" : " nao" ) << " eh um palindromo!" << endl;
  cout << palavra2 << (ehPalindromo(*fila2) ? "" : " nao" ) << " eh um palindromo!" << endl;
  cout << palavra3 << (ehPalindromo(*fila3) ? "" : " nao" ) << " eh um palindromo!" << endl;

  delete fila1;
  delete fila2;
  delete fila3;

}

bool ehPalindromo(FilaDupla &fila) {
  while (!fila.isVazia()) {
    if (fila.temApenasUmElemento()) {
      return true;
    }
    else {
      char esquerda = fila.removeCabeca();
      char direita = fila.removeCauda();

      if (esquerda != direita){
        return false;
      }
    }

  }
  return true;
}


void testeNoChar() {
  NoChar * primeiro = new NoChar('a');
  NoChar * terceiro = new NoChar('z');
  NoChar * segundo = new NoChar('h',primeiro,terceiro);
  cout << "Imprimindo primeiro:" << endl << *primeiro << endl;

  primeiro->setProximo(segundo);
  terceiro->setAnterior(segundo);
  
  char *teste1 = new char;
  *teste1 = 'k';
  primeiro->setValor(teste1);
  cout << "Nó primeiro alterado: " << endl << *primeiro << endl;

  cout << "Teste Fila de Nós: " << endl;
  NoChar* atual = primeiro;
  while (atual) {
    cout << *atual << endl;
    atual = atual->getProximo();
  }

  while (atual) {
    NoChar *seraApagado = atual;
    atual= atual->getAnterior();

    delete seraApagado;
  }

  if (teste1) {
    delete teste1;
  }
}