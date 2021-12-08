// Figura 06_14: fig06_14
// Função square utilizada para demonstrar a pilha
// de chamadas de função e os registros de ativação.

#include<iostream>
using namespace std;

int quadrado( int ); // Prototipo da Função

int main(){

 int a = 10; // valor para square (variável automática local em main)

 cout << a << " ao Quadrado: " << quadrado( a ) << endl; // exibe o quadrado de int

return 0;
} // fim do main

// Retorna um quadrado de um inteiro
int quadrado( int x ){ // x é uma variavel local

    return x * x; // calcula o resultado e retorna ele.
} // fim da função quadrado

