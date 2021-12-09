// Figura 6.18: fig06_18.cpp
// Utilizando uma função inline para calcular o volume de um cubo.
#include<iostream>
using namespace std;

// Definição da função inline cube. A definição de função aparece antes
// de a função ser chamada, então um protótipo de função não é necessário.
// A primeira linha da definição de função atua como o protótipo.
inline double cubo(const double lado){

    return lado * lado * lado;
} // fim da função cubo

int main(){

    double valorLado;

    cout << "Entre com o valor que vai ser elevado ao cubo" << endl;
    cin >> valorLado;

    cout << "Valor elevado ao cubo de " << valorLado << " é " << cubo(valorLado) << endl;

return 0;
}
