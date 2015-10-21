#ifndef _LISTA_H_
#define _LISTA_H_

#include "Nodo.h"

template <class T>
class Lista {
private:
  int comprimento;
  Nodo<T> * primeiro;
  Nodo<T> * ultimo;
public:
  Lista();
  ~Lista();

  bool adiciona(T);
  bool remove(T);

  int getTamanho() const;
  bool isVazia() const;

  Nodo<T>* getPrimeiro() const;
  void setPrimeiro(Nodo<T>*);
  Nodo<T>* getUltimo() const;
  void setUltimo(Nodo<T>*);

  template <class U>
  friend std::ostream& operator<<(std::ostream&, const Lista<T>&);
};

#include "Lista.inl"
#endif