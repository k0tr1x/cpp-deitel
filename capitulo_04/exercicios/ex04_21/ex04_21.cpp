// Exercício 04_21: ex04_21.cpp
// O que esse programa imprime?

#include <iostream>
using namespace std;

int main()
{
   int contador = 1;

   while( contador <= 10)
   {
      cout << (contador % 2 ? "****" : "++++++++") << endl;
      contador++;
   
   } // fim do while

return 0;
}
