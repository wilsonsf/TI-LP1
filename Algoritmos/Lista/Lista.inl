#include "Lista.h"

Lista::Lista() {
    this->primeiro = NULL;
    this->ultimo = NULL;
}

Lista::~Lista() {
    if (this->primeiro) {
        delete this->primeiro;
        this->primeiro = NULL;
    }

    if (this->ultimo) {
        delete this->ultimo;
        this->ultimo = NULL;
    }
}

bool Lista::adiciona(int valor) {
    try {
        if (!this->primeiro) {
            this->primeiro = new Nodo (valor);
            this->ultimo = this->primeiro;
        } else {
            Nodo *novo = new Nodo (valor);
            ultimo->proximo = novo;
            this->ultimo = novo;
        }
        return true;
    }
    catch (...) {
        return false;
    }
    return false;
}

int Lista::calculaSomaRecursiva() {
    return calculaSomaNodo(primeiro);
}