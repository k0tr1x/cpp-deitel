// Figura 04_18: fig04_18.cpp
// Examination-Results problems: Nested control statemens.
// Autor: Anderson Misson

#include <iostream>
using namespace std;

int main()
{
   // Initializing variables in declaration
   unsigned int passes = 0;
   unsigned int failures = 0;
   unsigned int studentCounter = 1;

   // Contador
   while ( studentCounter <= 10 )
   {
      // Pegar o valor do Usuario
      cout << "Enter result (1 = pass, 2 = fail): ";
      int result = 0;
      cin >> result;

      // if ... else nested in while
      if ( result == 1)
      {
         passes = passes + 1;
      } else
      {
      failures = failures + 1;
      }

      // increment student so loop eventually terminates
      studentCounter = studentCounter + 1;
   
   } // end while

   // Frases final
   cout << "Passed " << passes << "\nFailure " << failures << endl;

   // Determine whether more than eight students passed
   if( passes > 8 )
	  cout << "Bonus para o Instrutor" << endl; 
}
