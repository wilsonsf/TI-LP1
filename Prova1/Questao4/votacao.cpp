#include "votacao.h"
#include <map>
using namespace std;

void imprimeResultado(int *votacao) {
    calculaResultado(&votacao);
}

void calculaResultado(int &votacao) 
{
    map<int, int> resultado;
    resultado.add(1,3);
    cout << resultado << endl;

    resultado.add(1,4);
    cout << resultado << endl;
}

