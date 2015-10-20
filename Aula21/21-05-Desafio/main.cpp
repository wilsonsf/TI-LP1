/*
  Uma lista mantém nomes de 40 alunos (objetos) por ordem de classificação no 
  vestibular em um curso superior. 
  Supondo que esta lista está implementada na forma de um deque, construa um 
  método
    exibe(pos inteiro, ordem caractere) 
  que escreve na tela os nomes de alunos a partir de pos, na ordem direta ou 
  inversa ('d' / 'i') indicado por ordem.

  - Exemplo de lista:
  0: Rafael Souza; 1: Bruna Silva; 2: Marcos Santos; 3: Clóvis Pereira; 
  ...; 39: Tânia Oliveira

  - Exemplos de chamadas:
  exibe(2, 'd') | Marcos Santos, Clóvis Pereira,..., Tânia Oliveira
  exibe(2, 'i') | Marcos Santos, Bruna Silva, Rafael Souza
  
*/

// g++ -std=c++11 NoChar.cpp FilaDupla.cpp FilaVestibular.cpp main.cpp -o teste

#include <iostream>
#include "FilaVestibular.h"
using namespace std;

void preencheLista(FilaVestibular &);

int main () {

  FilaVestibular *listaCandidatos = new FilaVestibular();

  preencheLista(*listaCandidatos);

  cout << "Usando método exibe(0,'d')" << endl;
  listaCandidatos->exibe(0,'d');

  cout << endl << "Usando método exibe(0,'i')" << endl;
  listaCandidatos->exibe(0,'i');

  cout << endl << "Usando método exibe(3,'d')" << endl;
  listaCandidatos->exibe(3,'d');

  cout << endl << "Usando método exibe(5,'d')" << endl;
  listaCandidatos->exibe(5,'d');

  cout << endl << "Usando método exibe(3,'i')" << endl;
  listaCandidatos->exibe(3,'i');

  cout << endl << "Usando método exibe(5,'i')" << endl;
  listaCandidatos->exibe(5,'i');

  return 0;
}

void preencheLista(FilaVestibular &fila) {
  fila.adicionaCauda("0 Primeiro Lugar");
  fila.adicionaCauda("1 Segundo Lugar");
  fila.adicionaCauda("2 Terceiro Lugar");
  fila.adicionaCauda("3 Quarto Lugar");
  fila.adicionaCauda("4 Quinto Lugar");
  fila.adicionaCauda("5 Sexto Lugar");
  fila.adicionaCauda("6 Setimo Lugar");
  fila.adicionaCauda("7 Oitavo Lugar");
  fila.adicionaCauda("8 Nono Lugar");
  fila.adicionaCauda("9 Decimo Lugar");
}