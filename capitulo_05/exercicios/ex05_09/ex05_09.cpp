// exercicio 05_09 : ex05_09.cpp
// Escreva um programa que utiliza uma instrução for para calcular e imprimir o produto dos inteiros ímpares de 1 a 15.

#include <iostream>
using namespace std;

int main(){

    int resultado = 1;

    for( int i = 1; i <= 15; i++){

        if( i%2 == 1 ){
            resultado *= i;
        } // fim do if

    } // fim do for

    cout << "Resultado é " << resultado << endl;

    return 0;

} // fim do main
