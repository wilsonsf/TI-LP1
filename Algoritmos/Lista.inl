template <class T>
Lista<T>::Lista() : primeiro(NULL), ultimo(NULL), comprimento(0) { }

template <class T>
Lista<T>::~Lista() {
  Nodo<T> *atual = this->primeiro;
  while (atual) {
    Nodo<T> *proximo = atual->getProximo();

    if (atual){
      delete atual;
    }
    atual = proximo;
  }
}

template <class T>
Lista<T>::Lista(const Lista<T>& copia) : primeiro(NULL), ultimo(NULL), comprimento(0) {
  Nodo<T> *atual = copia.getPrimeiro();
  while (atual) {
    this->adiciona(*atual->getValor());
    atual = atual->getProximo();
  }
  atual = NULL;
}

template <class T>
bool Lista<T>::adiciona(T valor) {
  try {
    if (!this->primeiro) {
      this->primeiro = new Nodo<T> (valor);
      this->ultimo = this->primeiro;
    } else {
      Nodo<T> *novo = new Nodo<T> (valor);
      ultimo->setProximo(novo);
      this->ultimo = novo;
    }
    this->comprimento++;
    return true;
  }
  catch (...) {
    return false;
  }
  return false;
}

template <class T>
bool Lista<T>::remove(T valor) {
  try {
    if (isVazia()) {
      return false;
    } else {
      Nodo<T>* atual = this->primeiro;
      while (atual) {
        if (*atual->getValor() == valor) {
          if (atual->getAnterior()) {
            atual->getAnterior()->setProximo(atual->getProximo());
          }
          if (atual->getProximo()) {
            atual->getProximo()->setAnterior(atual->getAnterior());
          }
          this->comprimento--;
          delete atual;

          return true;
        }
      }
    }
  } catch (...) {
    return false;
  }
  return false;
}

template <class T>
int Lista<T>::getTamanho() const {
  return this->comprimento;
}

template <class T>
bool Lista<T>::isVazia() const {
  return getTamanho() == 0;
}

template <class T>
Nodo<T>* Lista<T>::getPrimeiro() const{
  return this->primeiro;
}

template <class T>
void Lista<T>::setPrimeiro (Nodo<T>* primeiro) {
  this->primeiro = primeiro;
}

template <class T>
Nodo<T>* Lista<T>::getUltimo() const{
  return this->ultimo;
}

template <class T>
void Lista<T>::setUltimo (Nodo<T>* ultimo) {
  this->ultimo = ultimo;
}

template <class T>
std::ostream& operator << (std::ostream& os, const Lista<T>& lista) {
  Nodo<T> * atual = lista.getPrimeiro();
  while (atual) {
    os << *atual->getValor() << ( atual->getProximo() ? ", " : "" );
    atual = atual->getProximo();
  }

  return os;
}