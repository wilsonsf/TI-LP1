template <class T>
Nodo<T>::Nodo(T valor, Nodo *proximo) {
    this->valor = valor;
    this->proximo = proximo;
}

template <class T>
Nodo<T>::~Nodo() {
    if (proximo)
        delete this->proximo;
    if (valor) 
        delete this->valor;

    proximo = NULL;
    valor = NULL;
}

template <class T>
T Nodo<T>::getValor() const {
    return this->valor;
}

template <class T>
void Nodo<T>::setValor (T valor) {
    this->valor = valor;
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
    std::cout << this->valor;
    if (proximo) {
        std::cout << " - ";
        proximo->imprime();
    } else {
        std::cout << std::endl;
    }
}