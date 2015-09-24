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

#include <iostream>
#include "listaEncadeada.h"

int main () {

    // inicialização
    struct Item *primeiro, *atual;
    primeiro = new struct Item;
    
    atual = primeiro;

    // leitura
    while(true) {
        std::cin >> atual->valor;

        // condição de parada
        if (atual->valor <= 0) {
            break;
        } else {

            atual->proximo = new struct Item;
            atual = atual->proximo;
        }
    }

    // impressão
    atual = primeiro;
    while (true) {
        std::cout << atual->valor << (atual->proximo ? ", " : "");
        if (atual->proximo) {
            atual = atual->proximo;
        } else {
            break;
        }
    }

    std::cout << std::endl;

    return 0;
}