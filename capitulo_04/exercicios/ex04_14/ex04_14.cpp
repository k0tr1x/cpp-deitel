// Exercício 04_14: ex04_14.cpp

#include <iostream> // cout, cin, cerr, fixed
#include <iomanip> // Biblioteca para setprecision
using namespace std;

int main()
{
   unsigned int numeroDaConta;

  cout << "Entre com o número da conta (-1 para terminar): ";
  cin >> numeroDaConta;

  while (numeroDaConta != -1)
  {
   cout << "Entre com o saldo inicial: ";
   double saldoInicial;
   cin >> saldoInicial;

   cout << "Entre com o total de taxas: ";
   double taxas;
   cin >> taxas;

   cout << "Entre com o total de creditos: ";
   double creditos;
   cin >> creditos;

   cout << "Entre com o limite de credito: ";
   double limite;
   cin >> limite;  
  
   double novoSaldo;
   novoSaldo = (saldoInicial + taxas - creditos);
   
  if (novoSaldo > limite)
  {
  cout << "Novo saldo: " << setprecision(2) << fixed << novoSaldo << endl;
  cout << "Conta: " << numeroDaConta << endl;
  cout << "Limite de credito: " << setprecision(2) << fixed << limite << endl;
  cout << "Saldo: " << setprecision(2) << fixed << novoSaldo << endl;
  cout << "Limite de crédito ultrapassado.";
  } else{
  cout << "Saldo: " << setprecision(2) << fixed << novoSaldo << endl;  
  }
  cout << "" << endl;
  
  cout << "Entre com o número da conta (-1 para terminar): ";
  cin >> numeroDaConta;

  } // Fim do While

   return 0;

}
