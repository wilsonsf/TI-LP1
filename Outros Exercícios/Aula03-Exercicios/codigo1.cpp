#include <iostream>

void misterio (int *p, int *q) {
  int *temp;
  temp = new(int);
  // temp = p; // nao viabiliza a troca, o valor *q serah atribuido as duas variaveis p e temp
  *temp = *p;
  *p = *q;
  *q = *temp;
  delete(temp);
}

int main () {
  int i=6, j=10;
  misterio(&i,&j);
  std::cout << "I: " << i << std::endl
	    << "J: " << j << std::endl;

  return 0;
}
