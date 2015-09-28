#ifndef _LISTAENCADEADA_H_
#define _LISTAENCADEADA_H_
struct Item {
    int valor;
    struct Item *proximo;
    struct Item *anterior;
};
struct Item * allocaItem();
struct Item * leiaLista(struct Item *);
void insira(int);
void imprimaLista(struct Item *);
void liberaLista(struct Item *);

#endif