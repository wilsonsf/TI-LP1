#ifndef _LISTAAUTOMOVEL_H_
#define _LISTAAUTOMOVEL_H_

#include "NodoAutomovel.h"

class ListaAutomovel {
public:
    NodoAutomovel *primeiro; //Head
    NodoAutomovel *ultimo;   //Tail
    ListaAutomovel();
    ListaAutomovel(NodoAutomovel *);
    ~ListaAutomovel();
    void adiciona(Automovel *);
    double calculeRendimentoTotal();
};

#endif