#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
  int x1,x2,y1,y2;
} Retangulo;

void misterio (int);
void ehNula (int n, int m, int matriz[n][m]);
int divisao (int *, int *, int );

/* Funcoes opcionais */
void preencheMatriz(int n, int m, int matriz[n][m]);
int main () {
  int n = 3, m = 3;
  int matriz[n][m];
  int *a, *b; /* Questao 3 */
  

  printf("Questao 1\n");
  misterio(5);

  printf("Questao 2\n");
  preencheMatriz(n,m,matriz);
  ehNula(n,m,matriz);
  printf("Questao 3\n");
  a = (int*) malloc(sizeof(int));
  b = (int*) malloc(sizeof(int));

  *a = 27;
  *b = 16;
  printf("Chamando funcao divisao(27,16,5) - saida: %d\n", divisao(a,b,5));
  printf("a = %d\tb = %d\n", *a, *b);

  printf("Chamando funcao divisao(27,16,3) - saida: %d\n", divisao(a,b,3));
  printf("a = %d\tb = %d\n", *a, *b);
  return 0;  
}

/* Questao 1 */
void misterio (int n) {
  printf("%i\n",n);
  if (n>0) {
    if (n % 2 == 1)
      misterio(n+1);
    else 
      misterio(n-3);
  }
}

/* Questao 2 */

void ehNula (int n, int m, int matriz[n][m]){
  int numLinhas = 0;
  int numColunas = 0;
  int i = 0;
  int j = 0;

  /* tipo bool nao eh nativo de C */

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (matriz[i][j]) {
        break;
      }
    }
    if (j == m) numLinhas++;
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (matriz[j][i]) {
        break;
      }
    }
    if (j == m) numColunas++;
  }

  printf("Numero de linhas nulas: %d\n", numLinhas);
  printf("Numero de colunas nulas: %d\n", numColunas);
}

/* Questão 3 */
int divisao (int *m, int *n, int d) {
  int saida = 0;
  if (*m % d == 0) {
    *m /= d;
    saida = 1;
  }

  if (*n % d == 0) {
    *n /= d;
    saida = 1;
  }

  return saida;
}

void preencheMatriz(int n, int m, int matriz[n][m]) {
  int i, j;
  printf("Matriz: \n");
  for (i = 0; i < n; i ++) {
    for (j = 0; j < m; j ++) {
      if (i % 2 == 0 || j % 2 == 0  ) matriz[i][j] = 0;
      else matriz[i][j] = (i+1)*(j+1);
      printf("%d\t",matriz[i][j]);
    }
    printf("\n");
  }
}