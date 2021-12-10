// Fig 06_22: fig06_22.cpp
// escopo unirio
#include<iostream>
using namespace std;

int number = 7;

int main(){

    double number = 10.5;

    cout << "Valor double local: " << number
        << "\nValor global: " << ::number << endl;

    return 0;
}
