#ifndef _SOMAMATRIZES_H_
#define _SOMAMATRIZES_H_

double ** allocaMatriz(int linhas, int colunas);
bool matrizEstaAlocada(double ** matriz);
void leituraDaMatriz(double **matriz, int linhas, int colunas);
double ** somaMatrizes(double** matrizA, double** matrizB, int linhas, int colunas);

#endif