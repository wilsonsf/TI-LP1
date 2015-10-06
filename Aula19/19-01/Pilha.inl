
template <class T>
Pilha<T>::Pilha() {
  this->topo = NULL;
}

template <class T>
Pilha<T>::~Pilha() {
  if (this->topo) {
    delete this->topo;
   this->topo = NULL;
  }
}

template <class T>
bool Pilha<T>::push (T valor) {
  try {
    if (!this->topo) {
      this->topo = new Nodo<T>(valor);
    } else {
      Nodo<T> *temp = new Nodo<T>(valor); //  , this->topo);
      temp->setProximo(this->topo);
      this->topo = temp;
    }
  }
  catch (...) {
    return false;
  }
  return false;
}

template <class T>
T Pilha<T>::pop() {
  T saida = this->topo->getValor();
  Nodo<T> *temp = this->topo;
  this->topo = temp->getProximo();

  if (temp) {
    // delete temp;
    temp = NULL;
  }

  return saida;
}

template <class T>
void Pilha<T>::imprime() {
  this->topo->imprime();
}


template <class T>
T Pilha<T>::getTopo() {
  return this->topo->getValor();
}