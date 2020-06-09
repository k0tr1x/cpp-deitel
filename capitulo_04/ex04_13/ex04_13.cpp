// Exercício 04_13: ex04_13.cpp

#include <iostream> // para usar fixed
#include <iomanip> // Usar setprecision
using namespace std;

int main()
{
   unsigned int quilometragem;
   unsigned int litros;
   unsigned int totalQuilometragem = 0;
   unsigned int totalLitros = 0;

   cout << "Entre com a quilometragem (-1 para sair): ";
   cin >> quilometragem;
   
   while (quilometragem != -1)
   {
   cout << "Entre com os litros: ";
   cin >> litros;

   totalQuilometragem += quilometragem;
   totalLitros += litros;

   double tanque;
   double total;

   tanque = static_cast<double>(quilometragem) / litros;
   total = static_cast<double>(totalQuilometragem) / totalLitros;

   cout << "km/litro desde tanque: " << setprecision(6) << fixed << tanque << endl;
   cout << "Total km/litro: " << setprecision(6) << fixed << total << endl;
   cout << "Entre com a quilometragem (-1 para sair): ";
   cin >> quilometragem;   
   
   }// fim do while

   return 0;
}
