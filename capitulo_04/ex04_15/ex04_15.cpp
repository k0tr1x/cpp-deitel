// Exercícios 04_15: ex04_15.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double vendas;
   double salario;
   double comissao;
   double semana = 200;

   cout << "Entre com as vendas em dólar (-1 para terminar): ";
   cin >> vendas;

   while (vendas != -1)
   {
   comissao = vendas * 9/100;
   salario = comissao + semana;
   cout << "Salário: $" << setprecision(2) << fixed << salario << endl;
   
   cout << "Entre com as vendas em dólar (-1 para terminar): ";
   cin >> vendas;
   } // fim do while


   return 0;
}
