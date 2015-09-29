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
    catch (...){
        return false;
    }
    
}

int calculaSomaRecursivo() {

    return 0;
}
 
int calculaSomaIterativo() {

    return 0;
}
