    #include <iostream>
    #include <cmath>

    #include "Ponto.h"

    namespace geometria
    {
        Ponto::Ponto( int _x, int _y )
           : x( _x ), y( _y ) {}

        int Ponto::distancia( const Ponto& ponto )
        {
            return std::sqrt( std::pow( x - ponto.x, 2 ) +
                              std::pow( y - ponto.y, 2 ) );
        }

        void Ponto::imprimir()
        {
            std::cout << x << ", " << y << std::endl;
        }
    }
