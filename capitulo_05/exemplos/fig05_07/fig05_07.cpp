// Figura 05_07: fig05_07.cpp
// instrução de repetição do...while.
#include<iostream>
using namespace std;

int main()
{
   int contador = 1; // inicializa o contador

   do
   {
      cout << contador << " ";  // exibe o contador
      contador++; // incrementa o contador
   } while ( contador <= 10); // fim da instrução do...while

   cout << endl; // gera a saída de um caractere de nova linha
   return 0;
} // fim do main
