/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */ 
// Linha de compilação: g++ exercicio5.cpp main.cpp -o teste

#include <iostream>
#include "exercicio5.h"

int main () {

  Aluno aluno1;
  aluno1.nome = "Aluno 1";
  aluno1.matricula = 123;
  Aluno aluno2;
  aluno2.nome = "Aluno 2";
  aluno2.matricula = 234;
  Aluno aluno3;
  aluno3.nome = "Aluno 3";
  aluno3.matricula = 456;
  Aluno aluno4;
  aluno4.nome = "Aluno 4";
  aluno4.matricula = 567;
  Aluno aluno5;
  aluno5.nome = "Aluno 5";
  aluno5.matricula = 678;
  Aluno aluno6;
  aluno6.nome = "Aluno 6";
  aluno6.matricula = 789;

  Aluno alunos[] = { aluno1, aluno2, aluno3, aluno4, aluno5, aluno6};
  int total = sizeof(alunos)/sizeof(Aluno);

  std::cout << "Procurando por aluno da matrícula (456): " << 
              buscaAluno(alunos,total,456) << " ~" << std::endl;

  std::cout << "Procurando por aluno da matrícula (570) - n existe: " << 
              buscaAluno(alunos,total,570) << " ~" << std::endl;
  return 0;
}