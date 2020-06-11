// Exercício 04_19: ex04_19.cpp

#include<iostream>
using namespace std;

int main()
{
   int contador = 1;
   int numero = 0;
   int maior = 0;
   int segundoMaior = 0;

   cout << "Escolha 10 números, e eu vou descobrir o maior" << endl;

   while (contador < 11)
   {
   cout << contador << "° número de 10: ";
   cin >> numero;

   if (numero > maior)
   {
   maior = numero;
      }

   if ((numero < maior) && (numero > segundoMaior))
   {
   segundoMaior = numero;
   }
   
   contador++;

   } // fim do for
   cout << endl;
   cout << "Maior Número é : " << maior << endl;
   cout << "Segundo Maior é: " << segundoMaior << endl;

return 0;
} //Fim do main
