#include <iostream>
#include "maximo.h"
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
    
    std::cout << "Arranjo = {";
    for (int i = 0; i < tamanho; i++) {
    	std::cout << arranjo[i] << (i == tamanho-1 ? "" : ", ");
    }
    std::cout<< "}";

    std::cout << " - tamanho: " << tamanho << std::endl;
    std::cout << "Valor maximo: " << maximo(arranjo, 0, tamanho-1) << std::endl;
}

void testeFloat () {
    float arranjo[] = {1.2,2.5,99.9999,5.3123,61.12,2.23,3.5123,5.567,1.4461542,23.123,6.1241,-12.1,-12.0};
    int tamanho = (int) sizeof(arranjo)/sizeof(float);

    std::cout << "Arranjo = {";
    for (int i = 0; i < tamanho; i++) {
      std::cout << arranjo[i] << (i == tamanho-1 ? "" : ", ");
    }
    std::cout<< "}";

    std::cout << " - tamanho: " << tamanho << std::endl;
    std::cout << "Valor maximo: " << maximo(arranjo,0,tamanho-1) << std::endl;

}