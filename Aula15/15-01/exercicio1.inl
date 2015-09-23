#include <iostream>

template <typename T>
T * alocaArranjo(int tamanho) {

    T *arranjo = new Arranjo[tamanho];


    return arranjo;
}

template <typename T>
void preencheArranjo(T &arranjo, int tamanho) {

}

template <typename T>
void imprimeArranjo(T &arranjo, int tamanho) {

}

template <typename T>
void liberaMemoria(T *arranjo) {
    delete arranjo;
}