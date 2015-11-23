    #include <iostream>
    #include <cmath>
    #include "Circulo.h"
    #define PI 3.14159

    namespace geometria
    {
        Circulo::Circulo( int _x, int _y, int _raio )
            : ponto( _x, _y ), raio( _raio ) {}

        Circulo::Circulo( const Ponto& _ponto, int _raio )
            : ponto( _ponto ), raio( _raio ) {}

        int Circulo::area()
        {
            return PI * raio * raio;
        }

        int Circulo::distancia( const Ponto& _ponto )
        {
            return ponto.distancia( _ponto );
        }

        void Circulo::imprimir()
        {
            ponto.imprimir();
            std::cout << raio << std::endl;
        }
    }
