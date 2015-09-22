#ifndef _BUSCA_H_
#define _BUSCA_H_

template <typename T>
bool buscaSequencial(T *arranjo, T valor, int tamanho);

template <typename T>
bool buscaRecursiva(T *arranjo, T valor, int ini, int fim);

#include "busca.inl"
#endif