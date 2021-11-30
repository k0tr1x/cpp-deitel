// fig 06_08: fig06_08.cpp
// Usando Inteiros Aleatorios

#include<iostream>
#include<iomanip>
#include<cstdlib> // Função RAND fica aqui
using namespace std;

int main(){

    // Loop 20 vezes
    for( unsigned int contador = 1; contador <= 20; contador++){

        cout << setw(10) << (1+ rand() % 6); // random de 1 a 6

        // se for divisivel por 5, uma nova linha
        if( contador % 5 == 0){
            cout << endl;
        } // fim do if

    } // fim do for

} // fim do main
