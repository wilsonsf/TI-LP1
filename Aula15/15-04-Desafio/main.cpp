/*
 * Escreva um programa que monte uma lista de números inteiros positivos. 
 * Para cada novo número inteiro digitado pelo usuário no teclado, o programa 
 * deve alocar uma nova variável no heap e inserí-la no final da lista composta 
 * pelos números já digitados. 

 * Quando o usuário digitar um número menor ou igual a 0 (zero), o programa 
 * deve imprimir todos os números digitados, na ordem em que eles foram
 * alimentados pelo usuário. 

 * Utilizar o tipo de dados struct Item definido abaixo:

    struct Item {
        int valor;
        struct Item *proximo;
    };
    
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1
    Curso: Bacharelado em Tecnologia da Informação
    Data: 23/09/2015

 */ 

// Linha de compilação: g++ main.cpp listaEncadeada.cpp -o teste

#include <iostream>
#include "listaEncadeada.h"

int main () {

    struct Item *primeiro;
    primeiro = new struct Item;
    
    //leiaListaIterativa(primeiro);
    leiaListaRecursiva(primeiro);

    imprimaLista(primeiro);

    liberaLista(primeiro);
    return 0;
}