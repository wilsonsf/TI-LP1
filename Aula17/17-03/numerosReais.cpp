#include "numerosReais.h"
#include "separadorFracionario.h"

realtype floatParaRealtype(float valor) {
    realtype novo;
    novo.left = separaFracionario(valor, novo.right);

    return novo;
}

float realtypeParaFloat(realtype valor) {
    float saida;
    saida = valor.left;

    float fracionario = valor.right /1000000000.0f;
    if (valor.left < 0)
        fracionario *= -1;
    
    saida += fracionario;

    return saida;
}

realtype add(realtype n1, realtype n2) {

    float _n1 = realtypeParaFloat(n1);
    float _n2 = realtypeParaFloat(n2);
    float resultado = _n1 + _n2;

    /*
        realtype soma;
        soma.left = n1.left + n2.left;

        if (( n1.left > 0 && n2.left < 0 )|| ( n2.left < 0 && n1.left > 0 )) {
            soma.right = n1.right - n2.right;
        } else {
            soma.right = n1.right + n2.right;
        }
    */

    return floatParaRealtype(resultado);
}

realtype substract(realtype n1,realtype n2) {
    float _n1 = realtypeParaFloat(n1);
    float _n2 = realtypeParaFloat(n2);
    float resultado = _n1 - _n2;

    /*
        realtype resultado;
        resultado.left = n1.left - n2.left;

        if (( n1.left > 0 && n2.left < 0 )|| ( n2.left < 0 && n1.left > 0 )) {
            resultado.right = n1.right + n2.right;
        } else {
            resultado.right = n1.right - n2.right;
        }
    */
    return floatParaRealtype(resultado);
}

realtype multiply(realtype n1,realtype n2) {
    float _n1 = realtypeParaFloat(n1);
    float _n2 = realtypeParaFloat(n2);
    float resultado = _n1 * _n2;

    return floatParaRealtype(resultado);
}