// Figura 6.28: fig06_28.cpp
// Testando a função fatorial recursiva.

#include <iostream> // cout, cin, endl
#include <iomanip> // setw
using namespace std;

unsigned long fatorial(unsigned long);

int main(){

    for(unsigned int contador = 0; contador <= 10; contador++){

        cout << setw(2) << contador << "! = " << fatorial(contador) << endl;
    }

    return 0;
} // fim do main

unsigned long fatorial(unsigned long numero){

    if( numero <= 1){
        return 1;
    } else {
        return numero * fatorial(numero -1);
    }

} // fim de fatorial
