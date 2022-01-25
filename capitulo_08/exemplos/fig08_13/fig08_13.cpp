// Fig. 8.13: fig08_13.cpp
// Sizeof operator when used on a built-in array's name
// returns the number of bytes in the built-in array.
#include <iostream>
using namespace std;

size_t verTamanho(double *); // prototipo

int main(){

    double numeros[20]; // 20 numeros double, ocupando 160bytes no seu sistema

    cout << "Número de bytes no array é " << sizeof(numeros);

    cout << "\nO número de bytes retornados no verTamanho é " << verTamanho(numeros) << endl;

} // fim do main

size_t verTamanho(double *ptr){

    return sizeof(ptr);

} // end function getSize
