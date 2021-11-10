// Exercício 04_26: ex04_26.cpp
// Um Palíndromo

#include<iostream>
using namespace std;

int main()
{
  int numero;
  int dezMil,milhar, dezena, unidade;

  cout << "Insira um número com 5 digitos: ";
  cin >> numero;

  dezMil = numero / 10000;
  unidade = numero % 10;
  milhar = (numero / 1000) % 10;
  dezena = (numero % 100) / 10;

  if( (dezMil == unidade) && (milhar == dezena))
  {
     cout << "É Palíndromo" << endl;				  
  } else
  {
     cout << "Não É Palíndromo" << endl;
  }

return 0;
}// fim do Main
