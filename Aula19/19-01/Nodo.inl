template <class T>
Nodo<T>::Nodo(T* conteudo, Nodo *proximo) {
   // cout << "Atual ponteiro: " << this << " | Valor: " << *conteudo 
   //                      << " | Proximo: " << proximo << endl;
  this->conteudo = conteudo;
  this->proximo = proximo;
}

template <class T>
Nodo<T>::Nodo(T conteudo, Nodo<T> *proximo) {
  // cout << "Atual: " << this << " | Valor: " << conteudo 
  //         << " | Proximo: " << proximo << endl;
  this->conteudo = new T();
  if (this->conteudo) {
    *this->conteudo = conteudo;
    this->proximo = proximo;
  }
}

template <class T>
Nodo<T>::~Nodo() {
  // cout << "Liberando: " << this << " | Proximo: " << this->proximo << endl;
  if (proximo) {
    delete this->proximo;
  }
  if (conteudo) {
    delete this->conteudo;
  }

  this->proximo = NULL;
  this->conteudo = NULL;

  // cout << "Proximo liberado: " << this->proximo << " | Saindo de: " << this << endl;
}

template <class T>
T* Nodo<T>::getConteudo() const {
  return this->conteudo;
}

template <class T>
void Nodo<T>::setConteudo (T conteudo) {
  this->conteudo = conteudo;
}

template <class T>
Nodo<T> * Nodo<T>::getProximo() const {
  return this->proximo;
}

template <class T>
void Nodo<T>::setProximo(Nodo<T> *proximo) {
  this->proximo = proximo;
}

template <class T>
void Nodo<T>::imprime() const {
  cout << *this->conteudo;
  if (proximo) {
    cout << " - ";
    proximo->imprime();
  } else {
    cout << endl;
  }
}


template <class T>
ostream& operator << (ostream& os, const Nodo<T>& nodo) {
  os << *nodo.getConteudo();
  if (nodo.getProximo()) {
    os << " - " << *nodo.getProximo();
  }
  return os;
}









