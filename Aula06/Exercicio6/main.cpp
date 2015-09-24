/* 
    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1 
    Curso: Bacharelado em Tecnologia da Informação 
 */
 
 // g++ -std=c++11 SomasFracionarias.cpp main.cpp -o teste
 // Instruções Wolfram Alpha
 // https://reference.wolfram.com/language/tutorial/PlottingListsOfData.html
 
#include <iostream>
#include <sys/time.h>
#include <queue>
#include <string>
#include "SomasFracionariasRecursivas.h"
#include "SomasFracionariasIterativas.h"
using namespace std;

class Coord {
public:
    int n, t;
    Coord () {};
    Coord (int _n, int _t) {
        n = _n;
        t = _t;
    }
    string toString() {
        string s = "{";
        s+= n;
        s+= ",";
        s+= t;
        s+= "}";
        return s;
    }
};

/*
typdef struct {
    int n,t;
} Coord;
*/

int main () {
    int t;
    queue<Coord> umR, umI,doisR, doisI;
//    int t_um_I,t_um_R, t_dois_I, t_dois_R;    
//    t_um_I = t_um_R = t_dois_I = t_dois_R = 0;
   
//    for (int n = 50; n <= 10000; n+= 50) {
    for (int n = 1; n < 11; n++) {

        int t;                  // Armazena a diferenca
        struct timeval t0, t1;  // Armazena hora inicial e final
        Coord *c;
        
        gettimeofday(&t0, NULL); // Armazena hora inicial
            // Iterativa
            somaFracionariaUmI(n);
        
        gettimeofday(&t1, NULL); // Armazena hora final
        t = (t1.tv_sec - t0.tv_sec) * 1000000; //diferenca em microsegundos
        t += t1.tv_usec - t0.tv_usec;
            // Inicializa objeto do tipo Coord com n e t

            // Adiciona na pilha equivalente
  
        gettimeofday(&t0, NULL); // Armazena hora inicial
            // Iterativa
            somaFracionariaDoisI(n);
        
        gettimeofday(&t1, NULL); // Armazena hora final
        t = (t1.tv_sec - t0.tv_sec) * 1000000; //diferenca em microsegundos
        t += t1.tv_usec - t0.tv_usec;
 
        gettimeofday(&t0, NULL); // Armazena hora inicial
            // Recursiva    
            somaFracionariaUmR(n,0.0);
        
        gettimeofday(&t1, NULL); // Armazena hora final
        t = (t1.tv_sec - t0.tv_sec) * 1000000; //diferenca em microsegundos
        t += t1.tv_usec - t0.tv_usec;
        
        gettimeofday(&t0, NULL); // Armazena hora inicial
             // Recursiva
            somaFracionariaDoisR(n,0.0);
        
        gettimeofday(&t1, NULL); // Armazena hora final
        t = (t1.tv_sec - t0.tv_sec) * 1000000; //diferenca em microsegundos
        t += t1.tv_usec - t0.tv_usec;
        
        delete(c);
    }
    return 0;
}
