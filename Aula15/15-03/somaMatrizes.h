/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1
    Curso: Bacharelado em Tecnologia da Informação
    Data: 22/09/2015
 */

#ifndef _SOMAMATRIZES_H_
#define _SOMAMATRIZES_H_

double ** allocaMatriz(int linhas, int colunas);
bool matrizEstaAlocada(double **matriz);
void leituraDaMatriz(double **matriz, int linhas, int colunas);
double ** somaMatrizes(double **matrizA, double **matrizB, int linhas, int colunas);
void imprimeMatriz(double **matriz, int linhas, int colunas);
void liberaMatriz(double **matriz, int linhas);

#endif