/**
 * Escreva um programa que:
 *      lê um valor n, 
 *      cria dinamicamente um vetor de n elementos, e 
 *      passa esse vetor para uma função que:
 *          vai ler os seus elementos. 
 
 * Depois, no programa principal, o vetor preenchido deve ser impresso. 
 
 * Além disso, antes de finalizar o programa, deve-se liberar a área de memória
 * alocada.

    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1
    Curso: Bacharelado em Tecnologia da Informação
    Data: 22/09/2015

 */ 

// Linha de compilação: g++ main.cpp -o teste

#include <iostream>
//#include "exercicio1.h"

int main () {
    std::cout << "Inicio da rotina" << std::endl;
    int tamanho;
    std::cout << "Insira o tamanho do arranjo: ";
    std::cin >> tamanho;

    int *arranjo = new int [tamanho];

    for (int i = 0; i < tamanho; i ++){
        std::cout << "Elemento " << i+1 << ": ";
        std::cin >> arranjo[i];
    }

    for (int i = 0; i < tamanho; i++) {
        std::cout << arranjo[i] << (i != tamanho-1 ? ", " : "\n"); 
    }

    delete arranjo;

    return 0;
}