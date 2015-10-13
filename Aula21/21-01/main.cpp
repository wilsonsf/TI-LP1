/*
  Faça um programa usando as rotinas genéricas de manipulação de deque, que
  permita manipular um deque de números reais. Implemente um menu, contendo 
  as seguintes opções para o usuário:

  (1) Inserir um valor no início do deque;
  (2) Inserir um valor no final do deque;
  (3) Retirar um valor do início do deque;
  (4) Retirar um valor do final do deque;
  (5) Listar o conteúdo do deque na tela;
  (6) Remover todos os valores do deque;
  (7) Fim da execução do programa.

*/

// g++ main.cpp NoReal.cpp -o teste

#include <iostream>
#include <cstdlib>

#include "NoReal.h"

using namespace std;

void testaNoReal();

void imprimeMenu();

int main () {

  testaNoReal();

int opcao = 0;

  do {
    system("clear");
    bool vaiSair = false;
    
    imprimeMenu();
    cin >> opcao;

    switch (opcao) {
      case 1:
      break;
      case 2:
      break;
      case 3:
      break;
      case 4:
      break;
      case 5:
      break;
      case 6:
      break;
      case 7:
        vaiSair = true;
        break;
      default:
        cout << "Opcao inválida, tente novamente." << endl;
    }

    if (vaiSair)
      break;

  } while (opcao != 7);

  return 0;
}

void testaNoReal() {
  NoReal * primeiro = new NoReal(1);
  NoReal * terceiro = new NoReal(3);
  NoReal * segundo = new NoReal(2,primeiro,terceiro);

  primeiro->proximo = segundo;
  terceiro->anterior = segundo;

  std::cout << "Teste No Real: ";
  NoReal* atual = primeiro;
  while (atual) {
    std::cout << atual->valor << (atual->proximo ? " - " : "\n");
    atual = atual->proximo;
  }

}

void imprimeMenu() {
  cout << "(1) Inserir um valor no início do deque" << endl;
  cout << "(2) Inserir um valor no final do deque" << endl;
  cout << "(3) Retirar um valor do início do deque" << endl;
  cout << "(4) Retirar um valor do final do deque" << endl;
  cout << "(5) Listar o conteúdo do deque na tela" << endl;
  cout << "(6) Remover todos os valores do deque" << endl;
  cout << "(7) Fim da execução do programa" << endl;
  cout << "Escolha uma opção: ";
}