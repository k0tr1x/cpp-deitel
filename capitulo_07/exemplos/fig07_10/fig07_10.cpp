// Figura 7.10: fig07_10.cpp
// Rola um dado de seis lados 6.000.000 vezes.
#include<iostream>
#include<iomanip>
#include<array>
#include<random>
#include<ctime>
using namespace std;

int main()
{
   // use o mecanismo de geração de números aleatórios padrão para
   // produzir valores int pseudo-aleatórios uniformemente distribuídos de 1 a 6
   default_random_engine engine( static_cast< unsigned int >( time(0) ) );
   uniform_int_distribution< unsigned int > randomInt( 1, 6 );

   const size_t arraySize = 7; // ignore o elemento zero
   array< unsigned int, arraySize > frequency = {}; // inicializar em 0s

   // role o dado 6.000.000 vezes; use o valor do dado como índice de frequência
   for ( unsigned int roll = 1; roll <= 6000000; ++roll )
      ++frequency[ randomInt( engine ) ];

   cout << "Face" << setw( 13 ) << "Frequency" << endl;

   // produza o valor de cada elemento da matriz
   for ( size_t face = 1; face < frequency.size(); ++face )
      cout << setw( 4 ) << face << setw( 13 ) << frequency[ face ]
         << endl;
} // end main
