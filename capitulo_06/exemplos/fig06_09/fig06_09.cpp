// Figura 06_09: fig06_09.cpp
// Dado de 6 faces jogadas 6 milhões de vezes

#include<iostream>
#include<iomanip>
#include<cstdlib> // função RAND
using namespace std;

int main(){

    unsigned int frequencia1 = 0;
    unsigned int frequencia2 = 0;
    unsigned int frequencia3 = 0;
    unsigned int frequencia4 = 0;
    unsigned int frequencia5 = 0;
    unsigned int frequencia6 = 0;

    // laço de 6 milhões de vezes
    for( unsigned int rolar = 1; rolar <= 6000000; rolar++){

        unsigned int dado = 1 + rand() % 6;

        // determine dado de 1 a 6
        switch(dado){

        case 1:
            ++frequencia1; // incrementa 1 na frequencia1
            break;

        case 2:
            ++frequencia2; // incrementa 1 na frequencia2
            break;

        case 3:
            ++frequencia3; // incrementa 1 na frequencia3
            break;

        case 4:
            ++frequencia4; // incrementa 1 na frequencia4
            break;

        case 5:
            ++frequencia5; // incrementa 1 na frequencia5
            break;

        case 6:
            ++frequencia6; // incrementa 1 na frequencia6
            break;

        default:
            cout << "Invalido" << endl;
        } // fim do Switch
    } // fim do for

    cout << "Dado " << setw(13) << "Frequência" << endl;
    cout << "   1" << setw(13) << frequencia1
       << "\n   2" << setw(13) << frequencia2
       << "\n   3" << setw(13) << frequencia3
       << "\n   4" << setw(13) << frequencia4
       << "\n   5" << setw(13) << frequencia5
       << "\n   6" << setw(13) << frequencia6 << endl;

} // fim do main
