#include <iostream>
#include <climits>
#include "maxmin.h"

// linha de compilação: g++ maxmin.cpp main.cpp -o teste

int main () {
    int arranjo[] = {1,2,99,5,61,2,3,5,1,23,6,12,-12};
    int tamanho = sizeof(arranjo)/sizeof(int);
    int max = INT_MIN;
    int min = INT_MAX;

    maxmin(arranjo, tamanho, max, min);

    std::cout << "Arranjo = {1,2,3,5,61,2,3,5,1,23,6,12,-12} - tamanho: " 
            << tamanho << std::endl;
    std::cout << "Valor maximo: " << max << std::endl;
    std::cout << "Valor minimo: " << min << std::endl;

    return 0;
}