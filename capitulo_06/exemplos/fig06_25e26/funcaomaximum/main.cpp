// Figura 6.26: main.cpp
// Programa de teste do template de função maximum.

#include <iostream>
#include "maximum.h"
using namespace std;

int main(){

    int int1, int2, int3;

    cout << "Por favor, insira 3 números inteiros: ";
    cin >> int1 >> int2 >> int3;

    cout << "Maior Inteiro é: "
        << maximum(int1, int2, int3) << endl;


    double double1, double2, double3;

    cout << "Por favor, insira 3 números flutuantes: ";
    cin >> double1 >> double2 >> double3;

    cout << "Maior Double é: "
        << maximum(double1, double2, double3) << endl;;

    char char1, char2, char3;

    cout << "Por Favor, insira 3 caracteres: ";
    cin >> char1 >> char2 >> char3;

    cout << "Maior Char é: "
        << maximum( char1, char2, char3) << endl;

    return 0;
} // fim do main
