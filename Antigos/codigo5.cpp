#include <iostream>
int menor (int *,int);

int main () {
  int v[] = {5,1,-3100,3,7,-1,8,-99,250};
  int tamanho = sizeof(v)/sizeof(int);
  std::cout << "Menor: " << menor (v,tamanho)
	    << std::endl;
  return 0;
}

int menor (int *p,int tam) {
  //condicao de parada: chegar ao fim do vetor
  if (tam==1) {
    return *p;
  } else {
    int atual = *p;
    int prox = menor(++p, tam-1);

    if (prox < atual)
      return prox;
    else 
      return atual;
  }
}
