/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */
 
 // g++ -std=c++11 SomasFracionarias.cpp main.cpp -o teste

#include <iostream>
#include "SomasFracionarias.h"

int main () {
    int n = 5;
    std::cout << "N: " << n << std::endl;
    
    std::cout << "a." << std::endl;
    std::cout << somaFracionariaUm(n,0.0) << std::endl;
    
    std::cout << "b." << std::endl;
    std::cout << somaFracionariaDois(n,0.0) << std::endl;
    return 0;
}
