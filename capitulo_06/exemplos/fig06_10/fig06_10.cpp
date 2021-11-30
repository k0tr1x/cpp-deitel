// Figura 06_10: fig06_10.cpp
// Aleatorizando o programa de lançamento de dados

#include<iostream> // cout, cin, endl
#include<iomanip>  // setw
#include<cstdlib>  // rand e srand
using namespace std;

int main(){

    unsigned seed = 0;

    cout << "Enter The Seed: " << endl;
    cin >> seed;
    srand(seed);

    for( unsigned int contador = 1; contador <= 10; contador++){

        cout << setw(10) << (1 + rand() % 6);

        if( contador %5 == 0){

            cout << endl;

        } // fim do laço if

    } // fim do laço for

} // fim do main
