/**
 * Escreva um programa que calcula a soma de duas matrizes MxN de números reais
 * (double). A implementação deste programa deve considerar as dimensões 
 * fornecida pelo usuário.

 * Obs: Represente a matriz através de variáveis do tipo double**, usando 
 * alocação dinâmica de memória. Lembre-se que diversas chamadas à função de 
 * alocação de memória devem ser efetuadas para poder construir uma matriz.

 */ 

// Linha de compilação: g++ main.cpp somaMatrizes.cpp -o teste

#include <iostream>
#include <iomanip>
#include "somaMatrizes.h"

int main () {

    double **matrizA, **matrizB, **matrizSoma;
    int linhas,colunas;

    // Parametrização
    std::cout << "Insira o numero de linhas: ";
    std::cin >> linhas;
    std::cout << "Insira o numero de colunas: ";
    std::cin >> colunas;

    // Alocação
    matrizA = allocaMatriz(linhas,colunas);
    matrizB = allocaMatriz(linhas,colunas);

    if (!matrizEstaAlocada(matrizA) || !matrizEstaAlocada(matrizB) || 
                    !matrizEstaAlocada(matrizSoma)) {
        std::cout << "Erro na alocação das matrizes..." << std::endl;
    } else {

        // Leitura
        std::cout << "Preenchendo Matriz A: " << std::endl;
        leituraDaMatriz(matrizA, linhas, colunas);

        std::cout << "Preenchendo Matriz B: " << std::endl;
        leituraDaMatriz(matrizB, linhas, colunas);

        // Soma
        matrizSoma = somaMatrizes(matrizA, matrizB, linhas, colunas);
    }

    // Liberação
    liberaMatriz(matrizA, linhas);
    liberaMatriz(matrizB, linhas);
    liberaMatriz(matrizSoma, linhas);
    
    return 0;
}