// Figura 8.10: fig08_10.cpp
// Tentando modificar dados por meio de um
// ponteiro não-constante para dados constantes.

void f( const int *); //prototipo

int main(){

    int y;

    f( &y ); // f tenta um modificação não valida

    return 0;

} // fim do main

// xPtr não pode modificar o valor da variável constante para a qual ele aponta
void f( const int *xPtr){

    *xPtr = 100; // erro: não é possivel modificar objeto const

}
