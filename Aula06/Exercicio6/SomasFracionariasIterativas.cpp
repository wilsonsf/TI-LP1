/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */

#include <iostream>
#include "SomasFracionariasIterativas.h"

double somaFracionariaUmI(int n){
    double soma;
    while (n > 0) {
        std::cout << "1/" << n << " ";
        soma += 1.0/n;
        n--;
    }
    return soma;
}

double somaFracionariaDoisI(int n){
    double soma;
    while (n > 0) {
        // std::cout << n*n+1 << "/" << n+3 << " ";
        soma += (n*n+1.0) / (n+3.0);
        n--;
    }
    return soma;
}
