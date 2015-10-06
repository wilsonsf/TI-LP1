template <class T>
Lista<T>::Lista() {
    this->primeiro = NULL;
    this->ultimo = NULL;
}

template <class T>
Lista<T>::~Lista() {
    if (this->primeiro) {
        delete this->primeiro;
        this->primeiro = NULL;
    }

    if (this->ultimo) {
        delete this->ultimo;
        this->ultimo = NULL;
    }
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
        return true;
    }
    catch (...) {
        return false;
    }
    return false;
}

template <class T>
T Lista<T>::getPrimeiro() const{
    return this->primeiro;
}

template <class T>
void Lista<T>::setPrimeiro (T primeiro) {
    this->primeiro = primeiro;
}

template <class T>
T Lista<T>::getUltimo() const{
    return this->ultimo;
}

template <class T>
void Lista<T>::setUltimo (T ultimo) {
    this->ultimo = ultimo;
}

template <class T>
void Lista<T>::imprime() const {
    this->primeiro->imprime();
}

template <class T>
std::ostream& Lista<T>::operator<<(std::ostream& os, const T& obj);
{
  // write obj to stream


  return os;
}