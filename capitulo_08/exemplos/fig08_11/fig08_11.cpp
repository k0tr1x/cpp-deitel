// Figura 8.11: fig08_11.cpp
// Tentar modificar um ponteiro constante para dados não constantes.

int main(){

    int x, y;

    // ptr é um ponteiro constante para um inteiro que pode
    // ser modificado por ptr, mas ptr sempre aponta para a
    // mesma posição da memória.
    int * const ptr = &x; // ponteiro const deve ser inicializado

    *ptr = 7; // permitido: *ptr não é const
    ptr = &y; // erro: ptr é constante; não é possível atribuí-lo a um novo endereço

    return 0;
} //fim do main
