// Figura 8.12: fig08_12.cpp
// Tentando modificar um ponteiro constante para dados constantes.
#include <iostream>
using namespace std;

int main(){

    int x = 5, y;

    // ptr é um ponteiro constante para um inteiro constante.
    // ptr sempre aponta para a mesma posição; o inteiro
    // nessa posição não pode ser modificado.
    const int *const ptr = &x;

    cout << *ptr << endl;

    *ptr = 7; // erro: *ptr é const; não é possível atribuir novo valor
    ptr = &y;  // error: ptr é const; não é possível atribuir endereço

    return 0;

} // fim do main
