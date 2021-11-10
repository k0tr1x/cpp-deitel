// Exercício 04_05: ex04_05.cpp
// Calcula a soma dos inteiro de 1 a 10

#include <iostream>
using namespace std;

int main()
{
   unsigned int soma;
   unsigned int x;

   x = 1;
   soma = 0;

   while ( x <= 10 )
   {
      soma += x;
      x++;   
   } // fim do while

   cout << "A soma é: " << soma << endl;
   
   return 0;

} // fim do main
