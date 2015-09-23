/**
 * Escreva um programa que calcula a soma de duas matrizes MxN de números reais
 * (double). A implementação deste programa deve considerar as dimensões 
 * fornecida pelo usuário.

 * Obs: Represente a matriz através de variáveis do tipo double**, usando 
 * alocação dinâmica de memória. Lembre-se que diversas chamadas à função de 
 * alocação de memória devem ser efetuadas para poder construir uma matriz.

 */ 

#include <iostream>
#include <iomanip>

int main () {

    double **matrizA, **matrizB, **matrizSoma;
    int linhas,colunas;

    // Parametrização
    std::cout << "Insira o numero de linhas: ";
    std::cin >> linhas;
    std::cout << "Insira o numero de colunas: ";
    std::cin >> colunas;

    // Alocação
    matrizA = new double* [linhas];
    matrizB = new double* [linhas];
    matrizSoma = new double* [linhas];

    if (!matrizA || !matrizB || !matrizSoma) {
        std::cout << "Erro na alocação das matrizes..." << std::endl;
    } else {
        std::cout << "Alocando colunas... ";
        bool alocacaoFalhou = false;
        for (int i = 0; i < colunas; i++) {
            std::cout << i << ( i != colunas-1 ? ", " : "\n" );
            matrizA[i] = new double[colunas];
            matrizB[i] = new double[colunas];
            matrizSoma[i] = new double[colunas];
            if (!matrizA[i] || !matrizB[i] || !matrizSoma[i]) {
                alocacaoFalhou = true;
                break;
            }
        }

        if (alocacaoFalhou) {
            std::cout << "Erro na alocação das matrizes..." << std::endl;
        } else {

            // Leitura
            std::cout << "Preenchendo Matriz A: " << std::endl;
            for (int i = 0; i < linhas; i ++) {
                for (int j = 0; j < colunas; j++) {
                    std::cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
                    std::cin >> matrizA[i][j];
                }
            }

            std::cout << "Preenchendo Matriz B: " << std::endl;
            for (int i = 0; i < linhas; i ++) {
                for (int j = 0; j < colunas; j++) {
                    std::cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
                    std::cin >> matrizB[i][j];
                }
            }

            // Soma
            for (int i = 0; i < linhas; i ++) {
                for (int j = 0; j < colunas; j++) {
                    //std::cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
                    matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
                    std::cout << std::setw(5) << matrizSoma[i][j];
                }
                std::cout << std::endl;
            }
        }

        // Liberação
        for (int i = 0; i < colunas; i++) {
            if (matrizA[i])
                delete matrizA[i];
            if (matrizB[i])
                delete matrizB[i];
            if (matrizSoma[i])
                delete matrizSoma[i];
        }
    }

    if (matrizA)
        delete matrizA;
    if (matrizB)
        delete matrizB;
    if (matrizSoma)
        delete matrizSoma;

    return 0;
}