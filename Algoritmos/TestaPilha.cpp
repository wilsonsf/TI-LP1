#include <iostream>
#include <cassert>
#include "Pilha.h"
using std::cout;
using std::endl;

// 
// g++ -std=c++11 -Wno-null-conversion TestaPilha.cpp -o teste.out

void testaPilhaInteiro();

int main () {
	testaPilhaInteiro();

	return 0;
}

void testaPilhaInteiro(){
	Pilha<int> *pilha = new Pilha<int>();

	assert(0 == pilha->getTamanho());
	assert(0 == pilha->remove());
	assert(0 == pilha->getTamanho());

	pilha->adiciona(5);
	assert(5 == pilha->remove());

	pilha->adiciona(3);
	pilha->adiciona(6);

	assert(2 == pilha->getTamanho());


	cout << "Impressão da pilha: " << *pilha << endl;
	pilha->remove();
	cout << "Impressão da pilha: " << *pilha << endl;
	pilha->remove();
	cout << "Impressão da pilha: " << *pilha << endl;
}
