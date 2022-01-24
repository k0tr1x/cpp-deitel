// Figura 8.7: fig08_07.cpp
// Eleva uma variável ao cubo usando passagem por referência com um argumento nPtr.

#include <iostream>
using namespace std;

void cuboPorReferencia(int *);

int main(){

    int numero = 5;

    cout << "O valor original do número é " << numero;

    cuboPorReferencia( &numero); // Pasando o número por valor

    cout << "\nO novo valor do número é " << numero << endl;
} // fim do main

void cuboPorReferencia( int *nPtr){

   *nPtr = *nPtr * *nPtr * *nPtr;

} // fim do cuboPorReferencia
