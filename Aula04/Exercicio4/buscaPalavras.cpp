/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */ 

#include <iostream>
#include "buscaPalavras.h"

int main () {
  std::string palavras[] = {"Abc","Bcd","Cde","Fgh","Mno","Xyz"};
  int tamanho = sizeof(palavras)/sizeof(std::string);

  std::cout << "buscaPalavras(Cde): " << buscaPalavras(palavras, tamanho, "Cde") << " ~" << std::endl;

  std::cout << "buscaPalavras(Wilson): " << buscaPalavras(palavras, tamanho, "Wilson") << " ~" << std::endl;

  return 0;
}

int buscaPalavras(std::string palavras[], int tamanho, std::string chave){
  int inicio = 0;
  int fim = tamanho-1;

  while  (fim >= inicio) {
    int meio =  (inicio+fim)/2;
    std::string pivo = palavras[meio];
    
    if (pivo.compare(chave) == 0) {
      return meio;
    } 
    else if (pivo.compare(chave) > 0) { 
      // Elemento está a esquerda do meio
      fim = meio-1;
    } 
    else {                       
      // Elemento está a direita do meio
      inicio = meio+1;
    }
  }
  return -1;
}
