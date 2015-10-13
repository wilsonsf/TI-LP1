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

#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

  int opcao = 0;

  do {
    system("clear");
    bool vaiSair = false;
    cout << "(1) Inserir um valor no início do deque" << endl;
    cout << "(2) Inserir um valor no final do deque" << endl;
    cout << "(3) Retirar um valor do início do deque" << endl;
    cout << "(4) Retirar um valor do final do deque" << endl;
    cout << "(5) Listar o conteúdo do deque na tela" << endl;
    cout << "(6) Remover todos os valores do deque" << endl;
    cout << "(7) Fim da execução do programa" << endl;
    cout << "Escolha uma opção: ";
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