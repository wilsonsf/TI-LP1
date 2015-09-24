#ifndef _LISTAENCADEADA_H_
#define _LISTAENCADEADA_H_
struct Item {
    int valor;
    struct Item *proximo;
};
void leiaListaIterativa(struct Item *);
void leiaListaRecursiva(struct Item *);
void imprimaLista(struct Item *);
void liberaLista(struct Item *);
#endif