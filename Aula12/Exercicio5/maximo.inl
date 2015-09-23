#ifndef _MAXIMO_INL_
#define _MAXIMO_INL_

template <class T>
T maximo(T v[], int ini, int fim){
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
        T esquerda = maximo(v,ini,meio);
        T direita = maximo(v,meio+1,fim);

        if (esquerda >= direita)
            return esquerda;
        else 
            return direita;
    }
}
#endif