template <class T>
Pilha<T>::Pilha() : cabeca{NULL}, tamanho{0} { };

template <class T>
bool Pilha<T>::adiciona(T valor) {
	try {
		Nodo<T> *novaCabeca = new Nodo<T>();
		novaCabeca->setValor(new T{valor});
		novaCabeca->setProximo(this->cabeca);

		this->cabeca = novaCabeca;
		++tamanho;
		return true;
	} catch (...) {
		return false;
	}
	return false;
}

template <class T>
T Pilha<T>::remove() {
	if (!cabeca)
		return NULL;

	T retorno = *this->cabeca->getValor();
	
	Nodo<T> *seraRemovido = cabeca;
	this->cabeca = seraRemovido->getProximo();

	if (seraRemovido) {
		delete seraRemovido;
	}
	
	--tamanho;
	
	return retorno;
}

template <class T>
int Pilha<T>::getTamanho() const {
	return tamanho;
}

template <class T>
Nodo<T>* Pilha<T>::getCabeca() const {
	return this->cabeca;
}

template <class T>
std::ostream& operator << (std::ostream& os, Pilha<T> &pilha){
	Nodo<T> *atual = pilha.getCabeca();

	while (atual) {
		os << *atual->getValor() << ( atual->getProximo() ? ", " : "" );
    atual = atual->getProximo();
	}

	return os;
}