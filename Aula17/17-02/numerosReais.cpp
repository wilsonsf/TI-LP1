#include "numerosReais.h"
#include <cmath>

realtype floatParaRealtype(float valor) {
    realtype novo;
    novo.left = 0;
    novo.right = 0;

    // 2.7 -> 2.0
    if (valor >=0) {
        novo.left = floor(valor);
        valor -= novo.left;
    }
    // -2.3 -> -2.0
    else {
        novo.left = ceil(valor);
        valor-= novo.left;
    }

    // Soh sobrou a parte fracionaria
    valor = fabs(valor);

    int parteFracionaria = 0;
    do {
        int temp = (int) (valor * 10);
        valor *= 10 - temp;
        parteFracionaria += temp;
        parteFracionaria *= 10;
    } while (temp)

    return novo;
}

float realtypeParaFloat(realtype valor) {

    return 0.0;
}

realtype add(realtype n1, realtype n2) {

    return n1;
}

realtype substract(realtype n1,realtype n2) {

    return n1;
}

realtype multiply(realtype n1,realtype n2) {

    return n1;
}