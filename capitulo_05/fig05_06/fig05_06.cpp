// Figura 05_06: fig05_06.cpp
// Cálculos de juros compostos com for
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw; // permite que o programa configure a largura de um campo
using std::setprecision;

#include <cmath> // biblioteca de matemática C++ padrão
using std::pow; // permite ao programa utilizar a função pow

int main()
{
   double montante; // quantia em depósito ao fim de cada ano
   double principal = 1000.0; // quantia inicial antes dos juros
   double taxa = .05; // taxa de juros

   // exibe cabeçalhos
   cout << "Ano" << setw(21) << "Valor em Depósito" << endl;

   // configura o formato de número de ponto flutuante
   cout << fixed << setprecision(2);

   // calcula quantia de depósito para cada um dos dez anos
   for ( unsigned int ano = 1; ano <= 10; ano++ )
   {
      // Calcula nova quantia durante ano especificado
      montante = principal * pow( 1.0 + taxa, ano );

      // exibe o ano e a quantia
      cout << setw( 3 ) << ano << setw( 20 ) << montante << endl;
   
   } // fim do for

   return 0;
} // fim do main
