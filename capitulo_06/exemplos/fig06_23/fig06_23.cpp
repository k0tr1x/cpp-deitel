// Figura 06_23: fig06_23.cpp
// sobreposição das funções int e double

#include<iostream>
using namespace std;

int quadrado( int x ){
    cout << "Quadrado do inteiro " << x << " é ";
    return x * x;
}

double quadrado( double y){
    cout << "Quadrado do double "<< y << " é ";
    return y * y;
}

int main(){

    cout << quadrado(7);
    cout << endl;
    cout << quadrado(7.5);
    cout << endl;

} // fim do main
