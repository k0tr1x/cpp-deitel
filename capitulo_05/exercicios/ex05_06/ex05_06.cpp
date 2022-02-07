// Exercicio 05_06 : ex05_06.cpp
// Escreva um programa que utiliza uma instrução for para calcular e imprimir a média de vários inteiros. Assuma que o último valor lido
// é o sentinela 9999. Uma típica seqüência de entrada talvez seja
// EXEMPLO: 10 8 11 7 9 9999

#include <iostream>
using namespace std;

int main(){

    int soma = 0;
    int contador = 0;

    cin >> soma;

    for( int x = 0; x != 9999; contador++){

    soma += x;
    cin >> x;

    } // fim do for

    cout << "Soma = " << soma;
    cout << "\nNúmeros = " << contador;
    cout << "\nMédia = " << soma / contador;

    return 0;

} // fim do main

