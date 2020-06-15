// Figura 05_02: fig05_02.cpp
// Repetição controlada por contador com instrução for

#include <iostream>
using std::cout;
using std::endl;

int main()
{
   // cabeçãlho da instrução for inclui inicialização
   // condição de continuação do loop de incremento.
   for ( int contador = 1; contador <= 10; contador++  )
   {
      cout << contador << " ";
   }// fim do for

cout << endl; // gera a saída de um caractere de nova linha

return 0; // terminação bem-sucedida

} // fim do main
