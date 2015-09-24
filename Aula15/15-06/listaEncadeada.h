#ifndef _LISTAENCADEADA_H_
#define _LISTAENCADEADA_H_
struct Item {
    int valor;
    struct Item *proximo;
};
void leiaLista(struct Item *);
void insira(int);
void imprimaLista(struct Item *);
void liberaLista(struct Item *);
#endif