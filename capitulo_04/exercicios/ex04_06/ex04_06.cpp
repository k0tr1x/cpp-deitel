// Exercício 04_06: ex04_06.cpp
// Calcula o valor do produto e quociente

# include <iostream>
using namespace std;

int main()
{
   int x = 5;
   int produto = 5;
   int quociente = 5;

   // Parte A
   produto *=x++;
   cout << "Valor do Produto Depois de Calcular = " << produto << endl;
   cout << "Valor de X depois de Calcular = " << x << endl << endl;

   // Parte B
   x = 5;
   quociente /= ++x;
   cout << "Valor do Quociente depois de Calcular = " << quociente << endl;
   cout << "Valor de x depois de Calcular = " << x << endl << endl;

   return 0;

} // Fim do Main
