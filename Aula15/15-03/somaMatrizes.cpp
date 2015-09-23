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

}