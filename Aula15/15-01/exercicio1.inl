#include <iostream>

template <typename T>
void preencheArranjo(T &arranjo, int tamanho) {
    for (int i = 0; i < tamanho; i ++){
        std::cout << "Elemento " << i+1 << ": ";
        std::cin >> arranjo[i];
    }
}

template <typename T>
void imprimeArranjo(T &arranjo, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        std::cout << arranjo[i] << (i != tamanho-1 ? ", " : "\n"); 
    }
}

template <typename T>
void liberaArranjo(T *arranjo) {
    if (arranjo) {
        delete arranjo;
    }
}