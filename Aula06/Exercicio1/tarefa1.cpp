/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */ 

#include <iostream>
#include "tarefa1.h"

int main () {
  int v[] = {4,7,10,18,23,66};
  int tamanho = sizeof(v)/sizeof(int);

  std::cout << "Busca Sequencial Recursiva (19)" << std::endl;
  std::cout << (buscaSequencialRecursiva(v,tamanho,19)
                ? "Achou !!" : "Não achou !!") << std::endl;
                
  std::cout << "Busca Sequencial Recursiva (23)" << std::endl;
  std::cout << (buscaSequencialRecursiva(v,tamanho,23)
                ? "Achou !!" : "Não achou !!") << std::endl;

  std::cout << "Busca Sequencial Recursiva (66)" << std::endl;
  std::cout << (buscaSequencialRecursiva(v,tamanho,66)
                ? "Achou !!" : "Não achou !!") << std::endl;

  std::cout << "Busca Binaria Recursiva (19)" << std::endl;
  std::cout << (buscaBinariaRecursiva(v,0,tamanho-1,19)
                ? "Achou !!" : "Não achou !!") << std::endl;

  std::cout << "Busca Binaria Recursiva (23)" << std::endl;
  std::cout << (buscaBinariaRecursiva(v,0,tamanho-1,23)
                ? "Achou !!" : "Não achou !!") << std::endl;
                  
  std::cout << "Busca Binaria Recursiva (66)" << std::endl;
  std::cout << (buscaBinariaRecursiva(v,0,tamanho-1,66)
                ? "Achou !!" : "Não achou !!") << std::endl;

  return 0;
}

// Sequencial ex-recursiva
bool buscaSequencialRecursiva(int *vetor,int tamanho, int procurado) {
  int pos = 0;
  while (pos < tamanho) {
    if (*vetor == procurado)
      return true;
      
    vetor++;
    pos++;
  }
  return false;
}

// Binária Ex-Recursiva
bool buscaBinariaRecursiva(int* vetor, int inicio, int fim, int procurado){

  while (inicio <= fim) {
    int meio = (fim+inicio)/2;
    if (vetor[meio] == procurado)
      return true;
    else if (vetor[meio] > procurado) 
      fim = meio-1;
    else
      inicio = meio+1;
  }
  
  return false;
}
