/*
    Vamos supor que um número real seja representado por uma estrutura 
    em C++, como esta:
        typedef struct {
            int left;
            int right;
        } realtype;
    onde left e right representam os dígitos posicionados à esquerda e à 
    direita do ponto decimal, respectivamente. 
    Se left for um inteiro negativo, o número real representado será negativo.

    a) Escreva uma função para receber um número real e criar uma estrutura 
    representado esse número;
    b) Escreva uma função que aceite essa estrutura e retorne o número real
    representado por ela.
    c) Escreva rotinas add, substract e multiply que aceitem duas dessas 
    estruturas e definam o valor de uma terceira estrutura para representar o 
    número que seja a soma, a diferença e o produto, respectivamente, dos dois
    registros de entrada.
*/


// g++ -g -O0 numerosReais.cpp separadorFracionario.cpp main.cpp -o teste

#include <iostream>
#include "numerosReais.h"

int main () {

    while(true) {
        float entrada;
        std::cin >> entrada;
        
        realtype testeCriacao = floatParaRealtype(entrada);
        float testeInversao = realtypeParaFloat(testeCriacao);

        std::cout << "Entrada: " << entrada << std::endl;
        std::cout << "Inversao: " << testeInversao << std::endl;
    }
    
    return 0;
}