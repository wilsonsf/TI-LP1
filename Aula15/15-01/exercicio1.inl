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

}

template <typename T>
void liberaMemoria(T *arranjo) {
    delete arranjo;
}