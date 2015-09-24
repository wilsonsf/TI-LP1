/**
 * Modificar o exercício 4 para montar a lista na ordem crescente dos números
 * informados pelo usuário.

    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1
    Curso: Bacharelado em Tecnologia da Informação
    Data: 24/09/2015
 */ 

#include <iostream>
#include "listaEncadeada.h"

int main () {

    struct Item *primeiro;
    primeiro = new struct Item;
    
    leiaLista(primeiro);

    imprimaLista(primeiro);

    liberaLista(primeiro);
    return 0;
}