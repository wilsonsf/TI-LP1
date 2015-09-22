#include <iostream>
#include <climits>
#include "maximo.h"
// linha de compilação: g++ maximo.cpp main.cpp -o teste

void testeInteiro();

int main () {
    testeInteiro();
    
    return 0;
}

void testeInteiro() {
    int arranjo[] = {1,2,99,5,61,2,3,5,1,23,6,12,-12};
    int tamanho = sizeof(arranjo)/sizeof(int);
    
	std::cout << "Arranjo = {";
    for (int i = 0; i < tamanho; i++) {
    	std::cout << arranjo[i] << (i == tamanho-1 ? "" : ", ");
    }
    std::cout<< "}";

    std::cout << " - tamanho: " << tamanho << std::endl;
    std::cout << "Valor maximo: " << maximo(arranjo, 0, tamanho-1) << std::endl;
}