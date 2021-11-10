// Exercício 04_17: ex04_17.cpp

#include<iostream>
using namespace std;

int main()
{
   int contador;
   int numero = 0;
   int maior = 0;

   cout << "Escolha 10 números, e eu vou descobrir o maior" << endl;

   for(contador = 1; contador < 11; contador++)
   {
   cout << contador << "° número de 10: ";
   cin >> numero;
   if (numero > maior)
   {
   maior = numero;
   }

   } // fim do for

   cout << "Maior Número é: " << maior << endl;

return 0;
} //Fim do main
