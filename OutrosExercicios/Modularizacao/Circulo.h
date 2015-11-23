    #ifndef _CIRCULO_H_
    #define _CIRCULO_H_

    #include "Ponto.h"

    namespace geometria
    {
        class Circulo
        {
            // Definição dos atributos
            Ponto ponto;
            int raio;

        public:
            // Definição dos métodos
            Circulo( int _x, int _y, int _raio );
            Circulo( const Ponto& _ponto, int _raio );
            int area();
            int distancia( const Ponto& _ponto );
            void imprimir();
        };
    }

    #endif
