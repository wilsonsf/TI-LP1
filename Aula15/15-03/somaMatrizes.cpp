#include <iostream>
#include "somaMatrizes.h"

double ** allocaMatriz(int linhas, int colunas) {
    double ** matriz;

    matriz = new double* [linhas];
    if (!matriz) {
        return NULL;
    }
    else {
        for (int i = 0; i < colunas; i++) {
            matriz[i] = new double[colunas];
            if (!matriz[i]) {
                return NULL;
            }
        }
        return matriz;
    }
}

bool matrizEstaAlocada(double ** matriz){
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