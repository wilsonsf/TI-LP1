#include <iostream>
#include "Codigo2.h"
#include <string>

int main () {

  int escolha;
  do{
    exibeMenu();
    std::cin >> escolha;
    exibeEscolha(escolha);
  } while(escolha > 0 && escolha < 6);
  return 0;
}

void exibeMenu() {
  std::cout << "Menu do Jogo" << std::endl;
  std::cout << "1 - Novo Jogo" << std::endl;
  std::cout << "2 - Continuar Jogo" << std::endl;
  std::cout << "3 - Opções" << std::endl;
  std::cout << "4 - Ajuda" << std::endl;
  std::cout << "5 - Créditos" << std::endl;
  std::cout << "Escolha uma opção: ";
}

void exibeEscolha (int n) {
  
  std::cout << std::endl;
  
  std::string str;
  
  switch (n) {
    case NOVO :       str = "Novo Jogo escolhido!";
      break;
    case CONTINUAR :  str = "Continuar Jogo escolhido!";
      break;
    case OPCOES :     str = "Opções escolhido!";
      break;
    case AJUDA :      str = "Ajuda escolhido!";
      break;
    case CREDITOS:    str = "Créditos escolhido!";
      break;
    default :         str = "Opção inválida - encerrando o jogo!";
  }

  std::cout << str << std::endl << std::endl;
}