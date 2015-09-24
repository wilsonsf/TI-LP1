/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */

#include "BuscaTernaria.h"

int busca_ternaria(int v[], int ini, int fim, int x) {
  // 1 terco = a + (b-a)/3 = (3a -a + b)/3 = (2a+b)/3
  // 2 terco = a + (b-a)x2/3 = (3a - 2a + 2b)/3 = (a+2b)/3
  
  int parte1 = ini + (fim-ini)/3;   // (2 * ini + fim)/3
  int parte2 = ini + (fim-ini)*2/3; // (ini + 2 * fim)/3

  if (x < v[ini] || x > v[fim]) {
    return 0;
  } else if (v[ini]==x || v[fim] == x) {
    return 1;
  } else if (v[parte1] == x) {
    return 1;
  } else if (v[parte1] > x) {
    return busca_ternaria(v,ini, parte1-1,x);
  } else if (v[parte2] == x) {
    return 1;
  } else if (v[parte2] > x) {
    return busca_ternaria(v,parte1+1,parte2-1,x);
  } else {
    return busca_ternaria(v,parte2+1,fim,x);
  }

  return 0;
}