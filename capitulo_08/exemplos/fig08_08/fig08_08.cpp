// Figura 8.08: fig08_08.cpp
// Imprimindo uma string um caractere por vez utilizando
// um ponteiro não constante para dados constantes.
#include <iostream>
using namespace std;

void imprimindoCaracteres( const char *); // prototipo

int main(){

    const char frase[] = "print characters of a string";

    cout << "The string is \n";
    imprimindoCaracteres(frase);
    cout << endl;

} // fim do main

// sPtr pode ser modificado, mas não pode modificar o caractere para o qual
// ele aponta, isto é, sPtr é um ponteiro ‘de leitura’
void imprimindoCaracteres(const char *sPtr){

    for( ; *sPtr != '\0'; sPtr++ ) // nenhuma inicialização
        cout << *sPtr;
} // fim do imprimindoCaracteres
