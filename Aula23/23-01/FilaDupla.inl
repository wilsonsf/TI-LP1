template <class T>
FilaDupla<T>::FilaDupla(Nodo<T>* cabeca, Nodo<T>* cauda) 
  : cabeca(cabeca), cauda(cauda), comprimento(0){ }

template <class T>
FilaDupla<T>::~FilaDupla() {
  Nodo<T> * seraApagado = this->cabeca;
  while (seraApagado) {
    Nodo<T> * proximo = seraApagado->getProximo();
    delete seraApagado;
    seraApagado = proximo;
  }
}

template <class T>
bool FilaDupla<T>::adicionaCabeca(T valor) {
  Nodo<T> *novaCabeca = new Nodo<T>(valor,NULL,this->cabeca);

  if (!novaCabeca) {
    return false;
  } else {
    if (temCabeca()) {
      this->cabeca->setAnterior(novaCabeca);
    }
    this->cabeca = novaCabeca;

    if (!temCauda()) {
      this->cauda = this->cabeca;
    }
    return true;
  }
}

template <class T>
T FilaDupla<T>::removeCabeca() {

  T retorno;
  if (!isVazia()) {
    retorno = *cabeca->getValor();
    
    Nodo<T> *seraApagado = this->cabeca;
    if (temApenasUmElemento()) {
      this->cabeca = NULL;
      this->cauda = NULL;
    } else {
      this->cabeca = this->cabeca->getProximo();
      this->cabeca->setAnterior(NULL);
    }
    if (seraApagado) {
      delete seraApagado;
    }
  }
  return retorno;
}

template <class T>
bool FilaDupla<T>::adicionaCauda(T valor) {
  Nodo<T> *novaCauda = new Nodo<T>(valor,cauda);
  if (!novaCauda) {
    return false;
  } else {
    if (temCauda()) {
      this->cauda->setProximo(novaCauda);
    }
    this->cauda = novaCauda;

    if (!temCabeca()) {
      this->cabeca = this->cauda;
    }
    return true;
  }
}

template <class T>
T FilaDupla<T>::removeCauda() {

  T retorno;
  if (!isVazia()) {
    retorno = *this->cauda->getValor();

    Nodo<T> *seraApagado = this->cauda;
    if (temApenasUmElemento()) {
      this->cabeca = NULL;
      this->cauda = NULL;
    } else {
      this->cauda = this->cauda->getAnterior();
      this->cauda->setProximo(NULL);
    }
    if (seraApagado) {
      delete seraApagado;
    }
  }

  return retorno;
}

template <class T>
void FilaDupla<T>::removeTudo() {
  while (this->cabeca) {
    removeCabeca();
  }
}

template <class T>
bool FilaDupla<T>::isVazia() {
  return !temCabeca() && !temCauda();
}

template <class T>
bool FilaDupla<T>::temApenasUmElemento() {
  return this->cabeca == this->cauda;
}

// Acesso aos ponteiros
template <class T>
Nodo<T>* FilaDupla<T>::getCabeca() {
  return this->cabeca;
}

template <class T>
Nodo<T>* FilaDupla<T>::getCauda() {
  return this->cauda;
}

// métodos privados
template <class T>
bool FilaDupla<T>::temCabeca() {
  return (this->cabeca ? true : false);
}

template <class T>
bool FilaDupla<T>::temCauda() {
  return (this->cauda ? true : false);
}

// Sobrecarga de operadores
template <class T>
std::ostream& operator << (std::ostream& os, FilaDupla<T>& fila) {

  Nodo<T>* atual = fila.getCabeca();
  while (atual) {
      os << *atual->getValor() << (atual->getProximo() ? " , " : "");
      atual = atual->getProximo();
  }
  return os;
}