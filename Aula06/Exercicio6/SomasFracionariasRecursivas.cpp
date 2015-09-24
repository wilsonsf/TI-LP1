/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */

#include <iostream>
#include "SomasFracionariasRecursivas.h"

double somaFracionariaUmR(int n,double soma = 0){
    if (n == 0) {
        return soma;
    } else {
        std::cout << "1/" << n << " ";
        soma += 1.0/n;
        return somaFracionariaUmR(n-1,soma);
    }
}

double somaFracionariaDoisR(int n,double soma = 0){
    if (n == 0) {
        return soma;
    } else {
        // std::cout << n*n+1 << "/" << n+3 << " ";
        soma += (n*n+1.0) / (n+3.0);
        return somaFracionariaDoisR(n-1,soma);
    }
}
