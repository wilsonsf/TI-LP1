#include <iostream>
#include <climits>
#include <cfloat>
#include "maxmin.h"

// linha de compilação: g++ main.cpp -o teste

void testeInteiro();
void testeFloat();

int main () {
    testeInteiro();
    testeFloat();

    return 0;
}

void testeInteiro() {
    int arranjo[] = {1,2,99,5,61,2,3,5,1,23,6,12,-12};
    int tamanho = sizeof(arranjo)/sizeof(int);
    int max = INT_MIN;
    int min = INT_MAX;

    maxmin(arranjo, tamanho, max, min);

    std::cout << "Arranjo = {1,2,3,5,61,2,3,5,1,23,6,12,-12} - tamanho: " 
            << tamanho << std::endl;
    std::cout << "Valor maximo: " << max << std::endl;
    std::cout << "Valor minimo: " << min << std::endl;

}

void testeFloat () {
    float arranjo[] = {1.2,2.5,99.9999,5.3123,61.12,2.23,3.5123,5.567,1.4461542,23.123,6.1241,-12.1,-12.0};
    int tamanho = (int) sizeof(arranjo)/sizeof(float);
    float max = FLT_MIN;
    float min = FLT_MAX;

    maxmin(arranjo, tamanho, max, min);

    std::cout << "Arranjo = {1.0,2.0,3.0,5.0,61.0,2.0,3.0,5.0,1.0,23.0,6.0,12.0,-12.0}" 
            << " - tamanho: " << tamanho << std::endl;
    std::cout << "Valor maximo: " << max << std::endl;
    std::cout << "Valor minimo: " << min << std::endl;
}