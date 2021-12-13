// Figura 6.26: maximum.h
// Definição do template de função maximum.

template< class T> // ou template< typename T>
T maximum( T valor1, T valor2, T valor3 ){

    T maximumValor = valor1;

    if( valor2 > maximumValor ){
        maximumValor = valor2;
    } // fim do if

    if( valor3 > maximumValor){
        maximumValor = valor3;
    } // fim do if

    return maximumValor;
} // fim do tamplate maximum
