// Figura 05_01: fig05_01.cpp
// Reoetução controlada por contador

#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int contador = 1; // Declara e inicializa a variável de controle

   while ( contador <= 10 ) // condição de continuação do loop
   {
      cout << contador << " ";
      contador++; // incrementa a variável de controle por 1
   }// fim do while

cout << endl; // gera a saída de um caractere de nova linha

return 0; // terminação bem-sucedida

} // fim do main
