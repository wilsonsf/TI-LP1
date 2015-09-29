#ifndef _LISTAENCADEADA_H_
#define _LISTAENCADEADA_H_
struct Item {
    int valor;
    struct Item *proximo;
    struct Item *anterior;
};
struct Item * allocaItem();
struct Item * allocaItemComValor(int);
struct Item * leiaLista();
// void insira(struct Item *, struct Item *);
void imprimaLista(struct Item *);
void liberaLista(struct Item *);

#endif