    #ifndef _PONTO_H_
    #define _PONTO_H_

    namespace geometria
    {
        class Ponto
        {
            // Defini��o dos atributos
            int x;
            int y;

        public:
            // Defini��o dos m�todos
            Ponto( int _x, int _y );
            int distancia( const Ponto& ponto );
            void imprimir();
        };
    }

    #endif
