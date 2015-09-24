/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */ 
    
#ifndef _EXERCICIO5_H_
#define _EXERCICIO5_H_

#include <string>

typedef struct {
  std::string nome;
  int matricula;
} Aluno;

std::string buscaAluno(Aluno* alunos, int totalDeAlunos, int matricula);

#endif