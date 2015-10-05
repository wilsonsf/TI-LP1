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


// g++ numerosReais.cpp separadorFracionario.cpp main.cpp -o teste

#include <iostream>
#include "numerosReais.h"

void testaConversao();
void testaSoma();
void testaSubtracao();
void testaMultiplicacao();

int main () {

    // testaConversao();
    testaSoma();
    testaSubtracao();
    testaMultiplicacao();
    
    return 0;
}

void testaConversao() {
    float entrada;
    do {
        std::cin >> entrada;
        if (entrada > 5000) 
            break;
        realtype testeCriacao = floatParaRealtype(entrada);

        std::cout << "Entrada: " << entrada << std::endl;

        std::cout << "Realtype - ";
        std::cout << "Parte Inteira: " << testeCriacao.left << " | "
            << "Fracionario: " << testeCriacao.right << std::endl;

        float testeInversao = realtypeParaFloat(testeCriacao);
        std::cout << "Inversao: " << testeInversao << std::endl << std::endl;
    } while (true);
}

void testaSoma() {
    realtype n1 = floatParaRealtype(6.25);
    realtype n2 = floatParaRealtype(3.25);
    realtype n3 = floatParaRealtype(-2.625);
    realtype n4 = floatParaRealtype(-4.5);

    realtype resultado;
    std::cout << "6.25 + 3.25 = ";
    resultado = add(n1,n2);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;

    std::cout << "6.25 + (-2.625) = ";
    resultado = add(n1,n3);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;
    
    std::cout << "(-2.625) + 3.25 = ";
    resultado = add(n3,n2);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;
    
    std::cout << "(-2.625) + (-4.5) = ";
    resultado = add(n3,n4);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;
}

void testaSubtracao() {
    realtype n1 = floatParaRealtype(6.25);
    realtype n2 = floatParaRealtype(3.25);
    realtype n3 = floatParaRealtype(-2.625);
    realtype n4 = floatParaRealtype(-4.5);

    realtype resultado;
    std::cout << "6.25 - 3.25 = ";
    resultado = substract(n1,n2);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;

    std::cout << "6.25 - (-2.625) = ";
    resultado = substract(n1,n3);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;
    
    std::cout << "(-2.625) - 3.25 = ";
    resultado = substract(n3,n2);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;
    
    std::cout << "(-2.625) - (-4.5) = ";
    resultado = substract(n3,n4);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;
}

void testaMultiplicacao() {
    realtype n1 = floatParaRealtype(6.25);
    realtype n2 = floatParaRealtype(3.25);
    realtype n3 = floatParaRealtype(-2.625);
    realtype n4 = floatParaRealtype(-4.5);


    realtype resultado;
    std::cout << "6.25 x 3.25 = ";
    resultado = multiply(n1,n2);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;

    std::cout << "6.25 x (-2.625) = ";
    resultado = multiply(n1,n3);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;
    
    std::cout << "(-2.625) x 3.25 = ";
    resultado = multiply(n3,n2);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;
    
    std::cout << "(-2.625) x (-4.5) = ";
    resultado = multiply(n3,n4);
    // std::cout << resultado.left << " , " << resultado.right << "\t";
    std::cout << realtypeParaFloat(resultado) << std::endl;

}
