// Figura 6.20: fig06_20.cpp
// Comparando a passagem por valor e a passagem por referência com as referências.

#include<iostream>
using namespace std;

int squareByValue( int ); // Passando por valor
void squareByReference( int &); // passando por referencia

int main(){

    int x = 2; // por valor
    int z = 4; // por referencia

    // Demonstra squareByValue
    cout << "x = " << x << " antes de squareByValue" << endl;
    cout << "Valor retornado depois do calculo " << squareByValue( x ) << endl;
    cout << "x = " << x << " depois de squareByValue\n" << endl;

    cout << "z = " << z << " antes de squareByReference" << endl;
    squareByReference( z );
    cout << "z = " << z << " depois de squareByReference\n" << endl;

    return 0;

} // fim do main

// squareByValue multiplica um número por ele próprio, armazena o
// resultado em number e retorna o novo valor de number
int squareByValue( int number){

    return number *= number;
} // fim do squereByValue

// squareByReference multiplica numberRef por si mesmo e armazena o resultado
// na variável à qual numberRef se refere na função main
void squareByReference( int &numberRef){

    numberRef *= numberRef;
} // fim do squareByReference
