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

// g++ main.cpp NoReal.cpp FilaDupla.cpp -o teste

#include <iostream>
// #include <cstdlib>

#include "FilaDupla.h"
using namespace std;

void testaNoReal();
void imprimeMenu();

int main () {
  // testaNoReal();

  FilaDupla *fila = new FilaDupla();

  int opcao = 0;
  do {

    bool vaiSair = false;
    
    imprimeMenu();
    cin >> opcao;

    int leitura = 0;
    switch (opcao) {
      case 1:
        cout << "Inserir no inicio: ";
        cin >> leitura;
        fila->adicionaCabeca(leitura);
      break;
      case 2:
        cout << "Inserir no final: ";
        cin >> leitura;
        fila->adicionaCauda(leitura);
      break;
      case 3:
        cout << "Elemento removido: " << fila->removeCabeca() << endl;
      break;
      case 4:
        cout << "Elemento removido: " << fila->removeCauda() << endl;
      break;
      case 5:
        if (fila->isVazia()) {
          cout << "Fila vazia!" << endl;
        } else {
          cout << "Fila atual: " << *fila << endl;
        }
      break;
      case 6:
        fila->removeTudo();
        cout << "Todos os elementos removidos!" << endl;
      break;
      case 7:
        vaiSair = true;
        break;
      default:
        cout << endl << "Opcao inválida, tente novamente." << endl << endl;
    }

    if (vaiSair){
      break;
    }

    cout << endl;
    
  } while (opcao != 7);

  return 0;
}

void testaNoReal() {
  NoReal * primeiro = new NoReal(1);
  NoReal * terceiro = new NoReal(3);
  NoReal * segundo = new NoReal(2,primeiro,terceiro);

  primeiro->setProximo(segundo);
  terceiro->setAnterior(segundo);

  double *teste1 = new double;
  *teste1 = -9;
  primeiro->setValor(teste1);

  std::cout << "Teste No Real: ";
  NoReal* atual = primeiro;
  while (atual) {
    std::cout << "(" << atual << " : " << *atual << ")" 
      << (atual->getProximo() ? " - " : "\n");
    atual = atual->getProximo();
  }

  while (atual) {
    NoReal *seraApagado = atual;
    atual= atual->getAnterior();

    delete seraApagado;
  }

}

void imprimeMenu() {
  cout << "(1) Inserir um valor no início do deque" << endl;
  cout << "(2) Inserir um valor no final do deque" << endl;
  cout << "(3) Retirar um valor do início do deque" << endl;
  cout << "(4) Retirar um valor do final do deque" << endl;
  cout << "(5) Listar o conteúdo do deque na tela" << endl;
  cout << "(6) Remover todos os valores do deque" << endl;
  cout << "(7) Fim da execução do programa" << endl << endl;
  cout << "Escolha uma opção: ";

}