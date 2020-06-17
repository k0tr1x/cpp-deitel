// Figura 05_05: fig05_05.cpp
// Somando inteiros com a instrução for

#include <iostream>
using namespace std;

int main()
{
   unsigned int total = 0; // inicializa total

   // total de inteiros pares de 2 a 20
   for ( unsigned int numero = 2; numero <= 20; numero += 2 )
	   total += numero;

   cout << "Soma é " << total << endl;

   return 0; // terminação bem-sucedida
} // fim do main
