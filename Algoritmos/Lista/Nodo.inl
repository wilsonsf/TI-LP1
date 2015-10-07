template <class T>
Nodo<T>::Nodo(T* conteudo, Nodo *proximo) {
  this->conteudo = conteudo;
  this->proximo = proximo;
}

template <class T>
Nodo<T>::Nodo(T conteudo, Nodo *proximo) {
  this->conteudo = new T();
  *this->conteudo = conteudo;
  this->proximo = proximo;
}

template <class T>
Nodo<T>::~Nodo() {
  // std::cout << "Liberando: " << this << " | Proximo: " << this->proximo << std::endl;
  if (proximo) {
    delete this->proximo;
  }
  if (conteudo) {
    delete this->conteudo;
  }

  this->proximo = NULL;
  this->conteudo = NULL;

  // std::cout << "Proximo liberado: " << this->proximo << " | Saindo de: " << this << std::endl;
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
  std::cout << *this->conteudo;
  if (proximo) {
    std::cout << " - ";
    proximo->imprime();
  } else {
    std::cout << std::endl;
  }
}

// template <class T>
// std::ostream& operator<< (std::ostream& os, Nodo<T> nodo) {
//   // os << nodo.getConteudo();
//   // if (nodo.getProximo()) {
//   //   os << " - " << nodo.getProximo();
//   // }
//   return os;
// }