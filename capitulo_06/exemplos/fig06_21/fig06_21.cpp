// Figura 06_21: fig06_21.cpp
// Usando argumentos default

#include<iostream>
using namespace std;

// prototipo da função
unsigned int boxVolume(unsigned int comprimento = 1,
    unsigned int largura = 1, unsigned int altura = 1);

int main(){

    cout << "O Valor Default do Volume é: " << boxVolume();

    cout << "\n\nO Volume quando o Comprimento = 10,\n"
        << "Largura = 1 e a Altura = 1 é: " << boxVolume(10);

    cout << "\n\nO Volume quando o Comprimento = 10,\n"
        << "Largura = 5 e a Altura = 1 é: " << boxVolume( 10, 5 );

    cout << "\n\nO Volume quando o Comprimento = 10,\n"
        << "Largura = 5 e a Altura = 2 é: " << boxVolume(10, 5, 2);

    cout << endl;

return 0;
} // fim da função main

unsigned int boxVolume(unsigned int comprimento, unsigned int largura, unsigned int altura){

    return comprimento * largura * altura;

} // fim da função boxVolume
