#include "separadorFracionario.h"
#include <iostream>
#include <cmath>

long separaFracionario(float valor, int &frac) {
    int parteInteira = 0;
    int parteFracionaria = 0;

    if (valor >=0) {
        parteInteira = floor(valor);
        valor -= parteInteira;
    }
    // -2.3 -> -2.0
    else {
        parteInteira = ceil(valor);
        valor-= parteInteira;

        // O sinal é armazenado na parte inteira
        valor = fabs(valor);
    }
    int cont = 0;
    int limite = 9; // int 2.000.000.000
    
    while (cont < limite) {
        // Se for 0, irrelevante
        parteFracionaria *= 10; 

        // Separando 1 digito
        valor *= 10;           
        int digito = (int) floor(valor); // Remover essa multiplicação

        // Atualizando o 'valor'
        valor -= digito;

        // Adicionando a parte inteira
        parteFracionaria += digito;
        cont ++;
    }

    frac = parteFracionaria;
    return parteInteira;
}

int testaSeparador () {
    while (true) {
        int inteiro,fracionario;
        double entrada;

        std::cin >> entrada;

        inteiro = separaFracionario(entrada, fracionario);
        std::cout << "Parte inteira: " << inteiro <<  std::endl;
        std::cout << "Parte fracionaria: " << fracionario << std::endl;
    }

    return 0;
}