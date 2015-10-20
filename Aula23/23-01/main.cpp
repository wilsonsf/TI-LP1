/*

Faça um programa que replica o deque implementado no exercício 1 da aula 21.
No entanto, ao invés do deque ser exclusivo para o uso de números reais, 
generalize-o utilizando um tipo abstrato através do conceito de templates. 
O deque deve ser uma classe.

*/

// g++ main.cpp -o teste

#include <iostream>
#include "FilaDupla.h"
// #include "Nodo.h"
using namespace std;

void testaNodo();
// void execucaoPrincipal();
void imprimeMenu();

int main () {
  // testaNodo();

  // execucaoPrincipal();

  return 0;
}
/*
void execucaoPrincipal() {
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
}
*/

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

void testaNodo() {
  Nodo<int> * primeiro = new Nodo<int>(1);
  Nodo<int> * terceiro = new Nodo<int>(3);
  Nodo<int> * segundo = new Nodo<int>(2,primeiro,terceiro);

  primeiro->setProximo(segundo);
  terceiro->setAnterior(segundo);

  int *teste1 = new int;
  *teste1 = -9;
  primeiro->setValor(teste1);

  std::cout << "Teste No Real: ";
  Nodo<int>* atual = primeiro;
  while (atual) {
    std::cout << atual << " : " << *atual
      << (atual->getProximo() ? "\n------------\n" : "") << endl;
    atual = atual->getProximo();
  }

  while (atual) {
    Nodo<int> *seraApagado = atual;
    atual= atual->getAnterior();

    delete seraApagado;
  }

}