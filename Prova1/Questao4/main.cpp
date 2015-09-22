#include <iostream>
#include <cstdlib>
#include "votacao.h"

using namespace std;

void testaVotacao();
int* geraVotosAleatorios();

int main () {
    
    testaVotacao();

	return 0;
}

void testaVotacao()
{
    int* votacao = geraVotosAleatorios();
    imprimeResultado(votacao);
}
int* geraVotosAleatorios()
{
    int tamanho = rand() % 40 + 11;
    int *votos = new int[tamanho];
    for (int i = 0; i < tamanho; i++) {
        votos[i] = rand() % 25 + 1000;
    }

    // for (int i = 0; i < tamanho; i++) {
    //     cout << "[" << i << "]: " << votos[i] << endl;
    // }
    return votos;
}