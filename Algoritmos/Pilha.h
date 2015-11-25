#ifndef _PILHA_H_
#define _PILHA_H_

#include "Nodo.h"

template <class T>
class Pilha {
private:
	Nodo<T> *cabeca;
	int tamanho;
public:
	Pilha();

	bool adiciona(T);
	T remove();

	int getTamanho() const;
	Nodo<T>* getCabeca() const;
	
	template <class U>
	friend std::ostream& operator << (std::ostream&, const Pilha<T> &);
};

#include "Pilha.inl"
#endif