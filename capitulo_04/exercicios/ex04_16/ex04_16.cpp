// Exercício 04_16: ex04_16.cpp

#include <iostream> // cout, cin, fixes
#include <iomanip> // setprecision
using namespace std;

int main()
{
  int horasTrabalhadas;
  double valorHora;
  double valorExtra;
  double salario;

  cout << "Entre com as horas trabalhadas (-1 para terminar): ";
  cin >> horasTrabalhadas; 

  while (horasTrabalhadas != -1)
  {
  cout << "Entre com o valor por hora trabalhada ($00.00): ";
  cin >> valorHora;

  if(horasTrabalhadas > 40)
  {
  valorExtra = horasTrabalhadas - 40;
  horasTrabalhadas = 40;
  salario = (horasTrabalhadas * valorHora) + (valorExtra * valorHora * 1.5);
  }else
  {
  salario = (horasTrabalhadas * valorHora);
  }

  
  cout << "Salário: $" << setprecision(2) << fixed << salario << endl;

  cout << endl;
  cout << "Entre com as horas trabalhadas (-1 para terminar): "; 
  cin >> horasTrabalhadas;
  } // Fim do While



   return 0;
} // fim do main
