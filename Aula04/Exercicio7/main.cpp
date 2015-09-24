/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */ 

// Comando de compilação: g++ BuscaTernaria.cpp main.cpp -o teste

#include <iostream>
#include "BuscaTernaria.h"
    
int main () {
  int arranjo[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
  int tamanho = sizeof(arranjo)/sizeof(int);

  int x = 5;

  while (x < tamanho) {
    if (busca_ternaria(arranjo, 0, tamanho-1, x)) {
      std::cout << std::endl << "Achou! (";
    } else {
      std::cout << std::endl << "Não achou! ";
    }
    std::cout << x << ")" << std::endl;

    x += 10;
  }
  
  return 0;
}


