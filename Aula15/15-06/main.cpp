/**
 * Modificar o exercício 4 para montar a lista na ordem crescente dos números
 * informados pelo usuário.

    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1
    Curso: Bacharelado em Tecnologia da Informação
    Data: 24/09/2015
 */ 

// Linha de compilação: g++ main.cpp listaEncadeada.cpp -o teste

#include <iostream>
#include "listaEncadeada.h"

int main () {

    struct Item *primeiro;
    
    std::cout << "Insira valores inteiros (<= 0 para parar): " << std::endl;
    primeiro = leiaLista();

    std::cout << "Impressão na ordem crescente: ";
    imprimaLista(primeiro);

    liberaLista(primeiro);
    return 0;
}