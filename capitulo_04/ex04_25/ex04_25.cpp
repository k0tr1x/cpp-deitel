// Exercício 04_25: ex04_25.cpp

#include <iostream>
using namespace std;

int main()
{
   int numero;
   int linha = 1;
   int coluna = 1;

   cout << "Escolha um número entre 1 e 20: ";
   cin >> numero;

   while (linha <= numero)
   {
      while (coluna <= numero)
      {
         if(linha == 1 or linha == numero or coluna == 1 or coluna == numero)
	 {
	    cout << "*";
	 } else
	 {
	    cout << " ";
	 }
	 coluna++;
      
      } // fim do while interno
       cout << endl;
       linha++;
       coluna = 1;

   }// Fim do While externo

return 0;
} // Fim do main
