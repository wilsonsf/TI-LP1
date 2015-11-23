    #include <iostream>
    #include <Ponto.h>
    #include <Circulo.h>

    using namespace geometria;

    int main()
    {
        Ponto ponto1( 0, 0 );
        Ponto ponto2( 10, 5 );
        Ponto ponto3 = ponto2;
        Circulo circulo1( 100, 50, 10 );
        Circulo circulo2( ponto2, 20 );

        ponto1.imprimir();
        ponto2.imprimir();
        ponto3.imprimir();
        circulo1.imprimir();
        circulo2.imprimir();

        std::cout << ponto1.distancia( ponto2 ) << std::endl;
        std::cout << circulo1.distancia( ponto3 ) << std::endl;
        std::cout << circulo2.area() << std::endl;
        return 0;
    }
