// Figura 08_06: fig08_06.cpp
// Eleva uma variável ao cubo utilizando passagem por valor.
#include <iostream>
using namespace std;

int cuboPorValor(int); // prototipo

int main(){

    int numero = 5;

    cout << "O valor original do número é " << numero;

    numero = cuboPorValor(numero); // Pasando o número por valor
    cout << "\nO novo valor do número é " << numero << endl;

} // fim do main

int cuboPorValor(int n){

return n * n * n;

} // fim fo cuboPorValor
