#include "mediaDeNotas.h"
#include <iostream>
#include <iomanip>

void leiaNotasDosAlunos(double * notas, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        std::cout << "Insira a nota para o aluno " << i+1 << ": ";
        std::cin >> notas[i];
    }
}

double calculeMedia(double *notas, int quantidade) {
    double somatorio = 0;

    for (int i = 0; i < quantidade; i++) {
        somatorio+= notas[i];
    }
    
    return somatorio/quantidade;
}