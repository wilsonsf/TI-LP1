#ifndef _LISTAENCADEADA_H_
#define _LISTAENCADEADA_H_
struct Item {
    int valor;
    struct Item *proximo;
    struct Item *anterior;
};
struct Item * allocaItem();
struct Item * leiaLista(struct Item *);
void imprimaListaNaOrdemDeInsercao(struct Item *);
void imprimaListaNaOrdemInversaDeInsercao(struct Item *);
void liberaLista(struct Item *);

#endif