// Figura 6.17: fig06_17.cpp
// Funções que não aceitam argumentos.

#include<iostream>
using namespace std;

void funcao1(); // função que não aceita argumentos
void funcao2( void ); // função que não aceita argumentos

int main(){

    funcao1(); // chama a função sem argumentos
    funcao2(); // chama a função sem argumentos

return 0;
}

// function1 utiliza uma lista de parâmetros vazia para especificar que
// a função não recebe argumentos
void funcao1(){

    cout << "função1 não aceita argumentos" << endl;

}

// function2 utiliza uma lista de parâmetros void para especificar que
// a função não recebe argumentos
void funcao2( void ){

    cout << "função2 não aceita argumentos também" << endl;

}
