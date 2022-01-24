// Figura 08.09: fig08_09.cpp
// Convertendo minúsculas em maiúsculas
// utilizando um ponteiro não constante para dados não constantes.
#include <iostream>
#include <cctype> // islower, toupper
using namespace std;

void convertendoParaMaiusculas(char *); // prototipo

int main(){

    char frase[] = "characters and $32.98";

    cout << "A frase antes da conversão: " << frase;
    convertendoParaMaiusculas(frase);
    cout << "\nA frase depois da conversão: " << frase << endl;

    return 0;

} // fim do main

void convertendoParaMaiusculas(char *sPtr){

    while( *sPtr != '\0'){ // faz um loop enquanto o caractere atual não é '/0'

        if( islower( *sPtr ) ) { // se o caractere estiver em minúscula
            *sPtr = toupper( *sPtr ); // sera convertido para maiúscula
        } // fim do if

        sPtr++;

    } // fim do while

} // fim do convertendoParaMaiusculas
