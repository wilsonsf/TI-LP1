#include <iostream>
#include <climits>
#include <cstdlib>
#include "maxmin.h"

using namespace std;
// linha de compilação: g++ maxmin.cpp main.cpp -o teste

void testaMaxMin();
int geraTamanhoDoArranjo();
int * geraArranjoDeInteiros(int);
void imprimeResultado(int *, int , int, int);

int main () {
    // int arranjo[] = {1,2,3,5,61,2,3,5,1,23,6,12,-12};
    // int tamanho = sizeof(arranjo)/sizeof(int);
    // int max = INT_MIN;
    // int min = INT_MAX;

    // maxmin(arranjo, tamanho, &max,&min);

    testaMaxMin();

    return 0;
}

void testaMaxMin() {
    int tamanho = geraTamanhoDoArranjo();
    int * arranjo =  geraArranjoDeInteiros(tamanho);
    int max = INT_MIN;
    int min = INT_MAX;

    maxmin(arranjo, tamanho, &max,&min);

    imprimeResultado(arranjo,tamanho,max,min);
}

int geraTamanhoDoArranjo() {
    return (rand() % 20 + 11);
}

int * geraArranjoDeInteiros(int tamanho){
    int arranjo[tamanho];
    for (int i = 0; i < tamanho; i++) {
        arranjo[i] = (rand() % 100 - 50);
    }
    return arranjo;
}

void imprimeResultado(int *arranjo, int tamanho, int max, int min) {
    std::cout << "Arranjo = {";
    for (int i = 0; i < tamanho; i++) {
        std::cout << arranjo[i] << (i == tamanho -1 ? "" : ", ");
    }
    cout << "} - tamanho: " << tamanho << endl;
    cout << "Valor maximo: " << max << endl;
    cout << "Valor minimo: " << min << endl;
}
