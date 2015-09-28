/**
 * Modificar o exercício 4 para imprimir os números digitados na ordem inversa 
 * daquela em que eles foram informados pelo usuário.

    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1
    Curso: Bacharelado em Tecnologia da Informação
    Data: 24/09/2015
 */ 

// Linha de compilação: g++ main.cpp listaEncadeada.cpp -o teste

#include <iostream>
#include "listaEncadeada.h"

int main () {

    struct Item *primeiro, *ultimo;
    primeiro = allocaItem();
    
    std::cout << "Insira valores inteiros (<= 0 para parar): " << std::endl;
    ultimo = leiaLista(primeiro);

    std::cout << "Impressão na ordem crescente: ";
    imprimaLista(primeiro);

    liberaLista(primeiro);
    return 0;
}