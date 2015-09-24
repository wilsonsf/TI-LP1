/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */
#include "ConversorDecBin.h"

std::string converteDecEmBin(int dec) {
    std::string binario;
    while (dec >= 1) {
        binario = std::to_string(dec % 2) + binario;
        dec /= 2;
    }
    preencheZeros(binario);
    return binario; 
}

void preencheZeros(std::string& s) {
    while (s.size() < 8) {
        s = '0' + s;
    }
}
