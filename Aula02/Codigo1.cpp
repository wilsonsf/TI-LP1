#include <iostream>
#include <iomanip>
#include "Codigo1.h"
using namespace std;

int main () {

  float n1, n2 ,n3;

  cout << "Insira as notas dos alunos separadas por espaco (n1 n2 n3): ";
  cin >> n1 >> n2 >> n3;

  cout << "Media: " << setprecision(3) << media(n1,n2,n3) << endl;
  return 0;
}

float media(float n1, float n2, float n3) {
  return (n1+n2+n3)/3;
}