#include <iostream>
#include "busca.h"
using namespace std;

void testaInteiro ();
void testaFloat ();

int main () {

    testaInteiro();
    cout << endl;
    testaFloat();

	return 0;
}

void testaInteiro () {
    int arranjo[] = {1,2,3,4,5,7,9,12,23,33,91,98,129,1293,1924};
    int tamanho = sizeof(arranjo)/sizeof(int);

    cout << "TESTE PARA INTEIROS" << endl;
    cout << "Busca no arranjo ";
    cout << "{1,2,3,4,5,7,9,12,23,33,91,98,129,1293,1924}" << endl;
    cout << "Sequencial (40): ";
    cout << (buscaSequencial(arranjo, 40,tamanho) ? "ACHOU!" : "Não achou!" );
    cout << endl;

    cout << "Sequencial (23): ";
    cout << (buscaSequencial(arranjo, 23,tamanho) ? "ACHOU!" : "Não achou!" );
    cout << endl;

    cout << "Recursiva (40): ";
    cout << (buscaRecursiva(arranjo, 40,0,tamanho-1) ? "ACHOU!" : "Não achou!" );
    cout << endl;

    cout << "Recursiva (23): ";
    cout << (buscaRecursiva(arranjo, 23,0,tamanho-1) ? "ACHOU!" : "Não achou!" );
    cout << endl;
}

void testaFloat () {
    float arranjo[] = {1.1,2.1,3.1,4.1,5.1,7.1,9.1,12.1,23.1,33.1,91.1,98.1,129.1,1293.1,1924.1};
    float tamanho = sizeof(arranjo)/sizeof(float);

    cout << "TESTE PARA FLOAT" << endl;
    cout << "Busca no arranjo ";
    cout << "{1.1,2.1,3.1,4.1,5.1,7.1,9.1,12.1,23.1,33.1,91.1,98.1,129.1,1293.1,1924.1}" << endl;
    cout << "Sequencial (40.1): ";
    cout << (buscaSequencial(arranjo, 40.1f,tamanho) ? "ACHOU!" : "Não achou!" );
    cout << endl;

    cout << "Sequencial (23.1): ";
    cout << (buscaSequencial(arranjo, 23.1f,tamanho) ? "ACHOU!" : "Não achou!" );
    cout << endl;

    cout << "Recursiva (40.1): ";
    cout << (buscaRecursiva(arranjo, 40.1f,0,tamanho-1) ? "ACHOU!" : "Não achou!" );
    cout << endl;

    cout << "Recursiva (23.1): ";
    cout << (buscaRecursiva(arranjo, 23.1f,0,tamanho-1) ? "ACHOU!" : "Não achou!" );
    cout << endl;
}