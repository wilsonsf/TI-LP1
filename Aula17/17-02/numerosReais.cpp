#include "numerosReais.h"
#include "separadorFracionario.h"

realtype floatParaRealtype(float valor) {
    realtype novo;
    novo.left = 0;
    novo.right = 0;

    novo.left = separaFracionario(valor, novo.right);

    return novo;
}

float realtypeParaFloat(realtype valor) {
    float saida = 0;
    saida += valor.left;
    saida += valor.right /1000000000.0f;

    return saida;
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