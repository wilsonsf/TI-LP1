/*
  Uma palavra é um palíndromo se a sequência de caracteres que a constitui é a
  mesma quer seja lida da esquerda para a direita ou da direita para a esquerda. 
  Por exemplo, as palavras RADAR e MIRIM são palíndromos. 
  Usando deque, crie uma função que, recebendo uma palavra, determinar se 
  ela é, ou não, palíndromo.
*/

#include <iostream>

int main () {

  return 0;
}

/*
   2 condicoes de parada
   Numero de elementos pares resulta numa dequeue vazia no final
   Numero de elementos ímpares, resulta e 1 ultimo elemento
  
  testa se está vazia
    return true;
  testa se tem apenas 1 elemento
    return true;
  senao remove os elementos das pontas e compara, se forem diferentes
    return false;
  se forem iguais
    continue;


*/