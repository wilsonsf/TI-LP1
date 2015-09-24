/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */ 

#include <iostream>
#include "ondeInserir.h"

int main () {
  int arranjo[] = {3,5,8,13,23,32,41,60,77,99};
  int tamanho = sizeof(arranjo)/sizeof(int);

  std::cout << "Arranjo = {3,5,8,13,23,32,41,60,77,99}" << std::endl;
  
  Par* ondeInserir = new Par();
  // Testa caso 1: menor que o primeiro
  std::cout << "Inserindo 1" << std::endl;
  ondeInserir = solucaoBinariaIterativa(arranjo, tamanho,1);
  std::cout << "Usando busca binária: " << ondeInserir->toString() << std::endl;
  ondeInserir = solucaoSequencialIterativa(arranjo, tamanho,1);
  std::cout << "Usando busca sequencial: " << ondeInserir->toString() << std::endl;


  // Testa caso 2: maior que o último
  std::cout << "Inserindo 100" << std::endl;
  ondeInserir = solucaoBinariaIterativa(arranjo, tamanho,100);
  std::cout << "Usando busca binária: " << ondeInserir->toString() << std::endl;
  ondeInserir = solucaoSequencialIterativa(arranjo, tamanho,100);
  std::cout << "Usando busca sequencial: " << ondeInserir->toString() << std::endl;


  // Testa caso 3: caso comum, meio da lista
  // Iterativo
  std::cout << "Inserindo 38" << std::endl;
  ondeInserir = solucaoBinariaIterativa(arranjo, tamanho,38);
  std::cout << "Usando busca binária: " << ondeInserir->toString() << std::endl;

  ondeInserir = solucaoSequencialIterativa(arranjo, tamanho,38);
  std::cout << "Usando busca sequencial: " << ondeInserir->toString() << std::endl;


  delete(ondeInserir);
  return 0;
}

// Binária
Par* solucaoSequencialIterativa(int arranjo[], int tamanho, int x){
  Par* final = new Par ();
  
  if (x < arranjo[0]) {
    final->posterior = 0;
    return final;
  }
  else if (x > arranjo[tamanho-1]) {
    final->anterior = tamanho-1;
    return final;
  }
  
  for (int i = 0; i < tamanho; i++) {
    if (arranjo[i] < x)
      final->anterior = i;
    else if (arranjo[i] > x)
      final->posterior = i;


  }


  return final;
}
// Binária
Par* solucaoBinariaIterativa(int arranjo[], int tamanho, int x) {
  int cont = 1;
  int inicio = 0;
  int fim = tamanho -1;

  Par* final = new Par ();
  if (x < arranjo[inicio]) {
    final->posterior = inicio;
    return final;
  }
  else if (x > arranjo[fim]) {
    final->anterior = fim;
    return final;
  }
  else {
    final->anterior = inicio;
    final->posterior = fim;

    while (fim >= inicio) {
      int meio = (inicio + fim) / 2;
      if (arranjo[meio] > x) {
        fim = meio-1;
        final->posterior = meio;
      } 
      else {
        inicio = meio +1;
        final->anterior = meio;
      }
      cont ++;
    }

    return final;
  }
}
/*
3 casos

x < a[0]
x > a[n-1]


a[i] < x < a[i+1]
*/