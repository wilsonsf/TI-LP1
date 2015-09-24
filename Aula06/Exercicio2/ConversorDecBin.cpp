/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */
#include "ConversorDecBin.h"

std::string converteDecEmBin(int dec) {
    if (dec == 0) {
        return "0";
    } else {
        std::string binario = converteDecEmBin(dec/2);
        binario += std::to_string(dec%2);
        return binario;
    }
}

std::string preencheZeros(std::string s, int n) {
    while (s.size() < n) {
        s = '0' + s;
    }
    return s;
}
