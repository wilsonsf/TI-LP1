template <class T>
Nodo<T>::Nodo() : valor(NULL), anterior(NULL), proximo(NULL) { }

template <class T>
Nodo<T>::Nodo(const Nodo<T>& copia) : anterior(NULL), proximo(NULL) {
  this->valor = new T;
  *this->valor = *copia.getValor();
}

template <class T>
Nodo<T>::~Nodo() {
  // std::cout << "Liberando" << std::endl << *this << std::endl;
  if (this->valor) {
    delete valor;
    this->valor = NULL;
  }
  if (this->anterior) {
    this->anterior = NULL;
  }
  if (proximo) {
    this->proximo = NULL;
  }
}

// Getters e Setters
template <class T>
T * Nodo<T>::getValor() const { return this->valor; }

template <class T>
void Nodo<T>::setValor(T *valor) { 
  if (this->valor){
    delete this->valor; 
  }
  this->valor = valor;
}

template <class T>
Nodo<T> * Nodo<T>::getAnterior() const { return this->anterior; }

template <class T>
void Nodo<T>::setAnterior(Nodo *anterior) {
  if (this->anterior) {
    this->anterior = NULL;
  }
  this->anterior = anterior;
}

template <class T>
Nodo<T> * Nodo<T>::getProximo() const { return this->proximo; }

template <class T>
void Nodo<T>::setProximo(Nodo *proximo) {
  if (this->proximo) {
    this->proximo = NULL;
  }
  this->proximo = proximo;
}

// Sobrecarga de operadores
template <class T>
std::ostream& operator << (std::ostream& os, const Nodo<T>& nodo) {
  if (nodo.getValor() != NULL)
    os << *nodo.getValor();

  // Impressão para debug
  /*
  os << "This: " << &nodo << std::endl;
  os << "Valor (" << nodo.getValor() << " : " << *nodo.getValor() << ")" << std::endl;
  os << "Anterior : " << nodo.getAnterior() << std::endl;
  os << "Proximo : " << nodo.getProximo() << std::endl;
  */

  return os;
}