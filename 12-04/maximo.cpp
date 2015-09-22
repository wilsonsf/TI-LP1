#include "maximo.h"

int maximo(int v[], int ini, int fim){
    // compara os dois e retorna o maior
    if (fim == ini) {
        return v[ini];
    } else if ((fim - ini) == 1) {
        if (v[ini] >= v[fim])
            return v[ini];
        else 
            return v[fim];
    } else {
        int meio = (ini+fim)/2;
        int esquerda = maximo(v,ini,meio);
        int direita = maximo(v,meio+1,fim);

        if (esquerda >= direita)
            return esquerda;
        else 
            return direita;
    }
}