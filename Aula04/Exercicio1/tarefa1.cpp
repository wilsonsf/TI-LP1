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

  std::cout << "Busca Sequencial Iterativa (23)" << std::endl;
  std::cout << (buscaSequenciaIterativa(v,tamanho,23)
                ? "Achou !!" : "Não achou !!") << std::endl;

  std::cout << "Busca Sequencial Iterativa (19)" << std::endl;
  std::cout << (buscaSequenciaIterativa(v,tamanho,19)
                ? "Achou !!" : "Não achou !!") << std::endl;

  std::cout << "Busca Sequencial Recursiva (23)" << std::endl;
  std::cout << (buscaSequencialRecursiva(v,tamanho,23)
                ? "Achou !!" : "Não achou !!") << std::endl;


  std::cout << "Busca Binaria Iterativa (66)" << std::endl;
  std::cout << (buscaBinariaIterativa(v,tamanho,66)
                ? "Achou !!" : "Não achou !!") << std::endl;
  
  std::cout << "Busca Binaria Recursiva (66)" << std::endl;
  std::cout << (buscaBinariaRecursiva(v,0,tamanho-1,66)
                ? "Achou !!" : "Não achou !!") << std::endl;

  return 0;
}

// Sequencial iterativa
bool buscaSequenciaIterativa(int *vetor,int tamanho, int procurado) {
  for (int i = 0; i < tamanho; i ++) {
    if (*vetor == procurado) {
      return true;
    }
    vetor++;
  }
  return false;
}


// Sequencial recursiva
bool buscaSequencialRecursiva(int *vetor,int tamanho, int procurado) {
  if (tamanho == 0) {
    return false;
  } else if (*vetor == procurado) {
    return true;
  } else {
    return buscaSequencialRecursiva(++vetor, --tamanho, procurado);
  }
}

// Binária Iterativa
bool buscaBinariaIterativa(int* vetor, int tamanho, int procurado){
  int inicio = 0;
  int fim = tamanho-1;

  while  (fim >= inicio) {
    int meio =  (inicio+fim)/2;
    int pivo = vetor[meio];
    
    if (pivo == procurado) {
      return true;
    } 
    else if (pivo > procurado) { 
      // Elemento está a esquerda do meio
      fim = meio-1;
    } 
    else {                       
      // Elemento está a direita do meio
      inicio = meio+1;
    }
  }
  return false;
}

// Binária Recursiva
bool buscaBinariaRecursiva(int* vetor, int inicio, int fim, int procurado){
  int meio = (fim+inicio)/2;

  if (vetor[meio] == procurado) {
    return true;
  } else if (fim < inicio) {
    return false; 
  } else if (procurado > vetor[meio]) {
    return buscaBinariaRecursiva(vetor, meio+1, fim, procurado);
  } else {
    return buscaBinariaRecursiva(vetor, inicio, meio-1, procurado);
  }
}