// Exercício 04_17: ex04_17.cpp

#include<iostream>
using namespace std;

int main()
{
   int contador = 1;
   int numero = 0;
   int maior = 0;

   cout << "Escolha 10 números, e eu vou descobrir o maior" << endl;

   while (contador < 11)
   {
   cout << contador << "° número de 10: ";
   cin >> numero;

   if (numero > maior)
   {
   maior = numero;
      }
  
   contador++;

   } // fim do for

   cout << "Maior Número é: " << maior << endl;

return 0;
} //Fim do main
