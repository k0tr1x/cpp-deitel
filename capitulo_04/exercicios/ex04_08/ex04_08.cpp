// Exercícios 04_08: ex04_08.cpp
// Eleva x a potência de y

#include <iostream>
using namespace std;

int main()
{
   unsigned int i = 1;
   unsigned int potencia = 1;

   cout << "Enter base as an integer: ";
   unsigned int x;
   cin >> x;

   cout << "Enter exponent as an integer: ";
   unsigned int y;
   cin >> y;

   while ( i <= y)
   {
      potencia *= x;
      ++i;
   }
   
   cout << potencia << endl;

}
