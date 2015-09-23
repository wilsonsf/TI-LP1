#include <iostream>

int mdc (int m, int n);

int main () {

    while(true) {
        int m, n;
        std::cout << "MDC(m,n): ";
        std::cin >> m >> n;
        if ( m < 0 || n < 0 ) break;
        std::cout << "Resultado: " << mdc(m,n) << std::endl;
    }

    return 0;
}

int mdc (int m, int n) {
    if (m == 0) {
        return n;
    }
    else {
        return mdc(n%m,m);
    }
}