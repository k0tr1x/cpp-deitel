// Exercício 04_22: ex04_22.cpp
// O que esse programa faz?

#include <iostream>
using namespace std;

int main()
{
   int linha = 10;
   int coluna;

   while ( linha >= 1)
   {
      coluna = 1;

      while ( coluna <= 10 )
      {
         cout << ( linha % 2 ? "<" : ">");
	 coluna++;
      
      } //fim do while interno
   
      linha--;
      cout << endl;
   
   } // fim do while externo

return 0;

} // fim do main
