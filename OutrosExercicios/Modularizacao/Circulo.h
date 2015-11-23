    #ifndef _CIRCULO_H_
    #define _CIRCULO_H_

    #include "Ponto.h"

    namespace geometria
    {
        class Circulo
        {
            // Defini��o dos atributos
            Ponto ponto;
            int raio;

        public:
            // Defini��o dos m�todos
            Circulo( int _x, int _y, int _raio );
            Circulo( const Ponto& _ponto, int _raio );
            int area();
            int distancia( const Ponto& _ponto );
            void imprimir();
        };
    }

    #endif
