/**
 * Os motoristas estão preocupados com a quilometragem obtida por seus
 * automóveis. Um motorista fez um controle de vários tanques de gasolina
 * gastos, anotando os quilômetros de rodagem obtidos pelo tanque. Desenvolva
 * um programa em C++ que recebe como entrada os quilômetros rodados e os 
 * litros para cada tanque. O programa deve calcular e exibir os quilômetros 
 * por litro obtidos para cada tanque. Depois de processar todas as informações
 * fornecidas, o programa deve calcular e imprimir os quilômetros por litro
 * obtidos por todos os tanques combinados. Você deve utilizar uma estrutura 
 * para representar as informações sobre cada automóvel. Lembre-se de 
 * alocar/liberar a memória necessária.
 */ 

//Linha de compilação:
 // g++ Automovel.cpp NodoAutomovel.cpp ListaAutomovel.cpp main.cpp -o teste

#include <iostream>
#include "ListaAutomovel.h"

int main () {

    ListaAutomovel *lista = new ListaAutomovel();
    Automovel *a1 = new Automovel(400,40);
    std::cout << "Rendimento (A1): " << a1->calculeRendimento() << std::endl;

    Automovel *a2 = new Automovel(800,40);
    std::cout << "Rendimento (A2): " << a2->calculeRendimento() << std::endl;

    lista->adiciona(a1);
    lista->adiciona(a2);

    lista->calculeRendimentoTotal();

    return 0;
}