/*
  Um deque mantém uma lista de caracteres. Implemente um método ehSimétrico() 
  que retorna verdadeiro caso as duas metades desta lista sejam simétricas.
  Exemplos:
  A B A A B A | verdadeiro
  A B C X Y A | falso
  X Y Z Y X | verdadeiro
*/

#include <iostream>
#include <cstring>

using namespace std;
int main () {


  char entrada[256];
  while (true) {

    cin.getline(entrada,256);

    cout << entrada << endl;
    for (int i = 0; i < strlen(entrada); i++) {
      // Inserir os elementos na pilha
    }

    // chamar o teste de simetria a partir da estrutura de dados
    cout << entrada << (true ? "" : " nao ") << " eh simetrico" << endl;
  }

  return 0;
}