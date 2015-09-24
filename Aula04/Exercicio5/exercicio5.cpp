#include <iostream>
#include "exercicio5.h"

std::string buscaAluno(Aluno* alunos, int totalDeAlunos, int matricula) {
  int inicio = 0;
  int fim = totalDeAlunos-1;
  
  while  (fim >= inicio) {
    int indice =  (inicio+fim)/2;
    Aluno chave = alunos[indice];

    if (chave.matricula == matricula) {
      return chave.nome;
    } 
    else if (chave.matricula < matricula) { // Elemento está a esquerda - movendo fim pra posicao à esquerda do atual
      fim = indice-1;
    } 
    else {                       // Elemento está a direita - movendo inicio para posical à direita do atual
      inicio = indice+1;
    }
  }
  //Acesso a inexistente
  return "";
}