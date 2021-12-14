// // Figura 6.31: fig06_31.cpp
// Testando a função fatorial iterativa.

#include<iostream> // cout, cin, endl
#include<iomanip> // setw
using namespace std;

unsigned long fatorial( unsigned int );

int main(){

    for( unsigned int contador = 0; contador <= 10; ++contador){
        cout << setw(2) << contador << "! = " << fatorial(contador) << endl;
    } // fim do for

    return 0;
} // fim da função main

unsigned long fatorial( unsigned int numero){

    unsigned long resultado = 1;

    for( unsigned int i = numero; i >= 1; i--){
        resultado *= i;
    } // fim do for

    return resultado;

} // fim da função fibonacci
