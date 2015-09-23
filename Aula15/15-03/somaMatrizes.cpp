/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1
    Curso: Bacharelado em Tecnologia da Informação
    Data: 22/09/2015
 */

#include <iostream>
#include <iomanip>
#include "somaMatrizes.h"

double ** allocaMatriz(int linhas, int colunas) {
    double **matriz;

    matriz = new double* [linhas];
    if (!matriz) {
        return NULL;
    }
    else {
        for (int i = 0; i < linhas; i++) {
            matriz[i] = new double[colunas];
            if (!matriz[i]) {
                return NULL;
            }
        }
        return matriz;
    }
}

bool matrizEstaAlocada(double **matriz){
    if (matriz) {
        return true;
    }
    else {
        return false;
    }
}

void leituraDaMatriz(double **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i ++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            std::cin >> matriz[i][j];
        }
    }
}

double ** somaMatrizes(double **matrizA, double **matrizB, int linhas, 
                       int colunas){

    double **matrizSoma = allocaMatriz(linhas,colunas);
    
    for (int i = 0; i < linhas; i ++) {
        for (int j = 0; j < colunas; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    return matrizSoma;
}

void imprimeMatriz(double **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        std::cout << "| ";
        for (int j = 0; j < colunas; j++) {
            std::cout << std::setw(5) << matriz[i][j] 
                      << " ";
        }
        std::cout << "|" << std::endl;
    }

}

void liberaMatriz(double **matriz, int linhas) {
    if (matriz) {
        for (int i = 0; i < linhas; i++) {
            if (matriz[i]) {
                delete matriz[i];
            }
        }
        
        delete matriz;
    }
}