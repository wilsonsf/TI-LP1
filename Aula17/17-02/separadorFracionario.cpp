#include "separadorFracionario.h"
#include <cmath>

long separaFracionario(double valor, long &frac) {
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
    }

    // O sinal é armazenado na parte inteira
    valor = fabs(valor);

    while (valor > 0) {
        // Se for 0, irrelevante
        parteFracionaria *= 10; 

        // Separando 1 digito
        valor *= 10;           
        int digito = (int) floor(valor * 10);

        // Atualizando o 'valor'
        valor -= digito;

        // Adicionando a parte inteira
        parteFracionaria += digito;
        
    }

    frac = parteFracionaria;
    return parteInteira;
}
/* 
3.14515
0.14515
1.4515      floor(1.4515) = 1 => parte fracionaria
0.4515 * 10 
4.515
0.515 *10
*/