#include "Lista.h"

Lista::Lista() {
    primeiro = NULL;
    ultimo = NULL;
}

Lista::~Lista() {
    if (primeiro) {
        delete primeiro;
        primeiro = NULL;
    }

    if (ultimo) {
        delete ultimo;
        ultimo = NULL;
    }
}

bool Lista::adiciona(int valor) {
    try {
        if (!primeiro) {
            primeiro = new Nodo (valor);
            ultimo = primeiro;
            return true;
        } else {
            Nodo *novo = new Nodo (valor);
            ultimo->proximo = novo;
            ultimo = novo;
            return true;
        } 
    }
    catch (...) {
        return false;
    }
    
}

int Lista::calculaSomaRecursiva() {
    return calculaSomaNodo(primeiro);
}

int Lista::calculaSomaNodo(Nodo * atual) {
    if (!atual){
        return 0;
    } else {
        return atual->valor+calculaSomaNodo(atual->proximo);
    }
}
 
int Lista::calculaSomaIterativa() {
    int soma = 0;

    Nodo *atual = primeiro;
    while (atual) {
        soma += atual->valor;
        atual = atual->proximo;
    }

    return soma;
}
