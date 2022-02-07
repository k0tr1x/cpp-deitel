// Exercicio 05_05: ex05_05.cpp
// Escreva um programa que utiliza uma instrução for para somar uma seqüência de inteiros. Assuma que o primeiro inteiro lido especifica
// o número de valores que restam a ser inseridos. Seu programa deve ler somente um valor por instrução de entrada. Uma típica seqüência
// de entrada talvez seja - 5 100 200 300 400 500
// onde o 5 indica que os valores 5 subseqüentes devem ser somados.

#include <iostream>
using namespace std;

int main(){

    int x;
    int numero;
    int soma = 0;

    cout << "Quantos números, você vai somar? : ";
    cin >> x;
    cout << "\nSerão " << x << " números. Quais são eles: \n";

    for( int a = 1; a <= x; a++){

    cin >> numero;
    soma += numero;

    } // fim do for

    cout << "A soma dos " << x << " números é = " << soma << "." << endl;

    return 0;
} // fim do main
