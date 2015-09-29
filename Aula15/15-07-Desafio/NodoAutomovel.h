#ifndef _NODOAUTOMOVEL_H_
#define _NODOAUTOMOVEL_H_

#include "Automovel.h"
#include <iostream>

class NodoAutomovel {
public:
    Automovel *conteudo;
    NodoAutomovel *proximo;
    
    NodoAutomovel(Automovel *_conteudo= NULL, NodoAutomovel *_proximo = NULL);
    ~NodoAutomovel();
    double calculeRendimento();
};
#endif