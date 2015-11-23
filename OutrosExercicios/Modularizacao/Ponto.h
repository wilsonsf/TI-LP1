    #ifndef _PONTO_H_
    #define _PONTO_H_

    namespace geometria
    {
        class Ponto
        {
            // Definição dos atributos
            int x;
            int y;

        public:
            // Definição dos métodos
            Ponto( int _x, int _y );
            int distancia( const Ponto& ponto );
            void imprimir();
        };
    }

    #endif
