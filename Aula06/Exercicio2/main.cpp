#include <iostream>
#include <iomanip>
#include <string>
#include "ConversorDecBin.h"
using namespace std;

int main () { 
    cout << "Conversão de decimal para inteiro:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << setw(4) << i << " -> ";
        cout << setw(8) << preencheZeros(converteDecEmBin(i),8) << endl;
    }
    
    return 0;
}
