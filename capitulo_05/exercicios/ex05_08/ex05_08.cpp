// Exercicio 08_05 : ex05_08.cpp
// Escreva um programa que utiliza uma instrução for para localizar o menor de vários inteiros. Assuma que o primeiro valor lido especifica
// o número de valores restantes e que o primeiro número não é um dos inteiros a ser comparado.

#include <iostream>
using namespace std;

int main()
{
  int i, smallest;
  cout << "Insira números inteiros (O primeiro valor lido\nespecifica o número de valores restantes): ";
  cin >> i;
  cin >> smallest;

  for(int b; i > 1; i-- )
  {
  cin >> b;
    if( b < smallest )
      smallest = b;
   }
  cout << "O menor número é " << smallest << endl;

   //for pause
   system("PAUSE");
   return 0;
}
