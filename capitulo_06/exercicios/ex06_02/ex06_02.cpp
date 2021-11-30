// Exercicio 06_02: ex06_02.cpp
#include <iostream>

using namespace std;

int cubo(int y); // prototipo

int main(){

    int x = 0;

    for( x = 1; x <= 10; x++ ){

        cout << cubo(x) << endl; // calculando o CUBO de x
    }

} // fim do main

int cubo(int y){

    return y * y * y;

} // fim da função cubo
