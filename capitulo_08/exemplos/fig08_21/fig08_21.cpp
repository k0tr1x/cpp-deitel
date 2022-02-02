// Figura 08_21 : fig08_21.cpp
// Copiando uma string utilizando a notação de array e a notação de ponteiro.
#include <iostream>
using namespace std;

void copy1( char *, const char * ); // prototipo 1
void copy2( char *, const char * ); // prototipo 2

int main(){

    char string1[ 10 ];
    char *string2 = "Hello";
    char string3[ 10 ];
    char string4[] = "Good Bye";

    copy1( string1, string2); // copia string
    cout << "String1 = " << string1 << endl;

    copy2( string3, string4 ); // copia string
    cout << "string3 = " << string3 << endl;

    return 0;

} // fim do main

// copia s2 para s1 utilizando notação de array
void copy1( char * s1, const char * s2){

    // a cópia ocorre no cabeçalho do for
    for( int i =0; (s1[i] = s2[i]) !='\0'; i++);

} // fim do copy1

// copia s2 para s1 utilizando notação de ponteiro
void copy2( char *s1, const char *s2){

    // a cópia ocorre no cabeçalho do for
    for( ; (*s1 = *s2) !='\0'; s1++, s2++)
    ; // não faz nada no corpo

} // fim da função copy2
