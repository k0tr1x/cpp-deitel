// Exercício 04_12: ex04_12.cpp
// O que esse exercício mostra?
#include <iostream>
using namespace std;

int main()
{
   unsigned int y = 0;
   unsigned int x = 1;
   unsigned int total = 0;

   while ( x <= 10)
   {
      y = x * x;
      cout << y << endl;
      total += y;
      ++x;
   } // end while

   cout << "Total é " << total << endl;

}
