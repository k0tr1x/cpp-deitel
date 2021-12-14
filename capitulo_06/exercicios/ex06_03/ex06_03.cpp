// Exercício 6.3: Ex06_03.cpp
// Testando a biblioteca de funções matemáticas.

#include <iostream> // cout, endl, fixed
#include <iomanip>  // setprecision
#include <cmath>    // calculos matematicos
using namespace std;

int main()
{
   cout << fixed << setprecision( 1 );

   cout << "sqrt(" << 9.0 << ") = " << sqrt( 9.0 );
   cout << "\nexp(" << 1.0 << ") = " << setprecision( 6 )
      << exp( 1.0 ) << "\nexp(" << setprecision( 1 ) << 2.0
      << ") = " << setprecision( 6 ) << exp( 2.0 );
   cout << "\nlog(" << 2.718282 << ") = " << setprecision( 1 )
      << log( 2.718282 )
      << "\nlog(" << setprecision( 6 ) << 7.389056 << ") = "
      << setprecision( 1 ) << log( 7.389056 );
   cout << "\nlog10(" << 10.0 << ") = " << log10( 10.0 )
      << "\nlog10(" << 100.0 << ") = " << log10( 100.0 ) ;
   cout << "\nfabs(" << 5.1 << ") = " << fabs( 5.1 )
      << "\nfabs(" << 0.0 << ") = " << fabs( 0.0 )
      << "\nfabs(" << -8.76 << ") = " << fabs( -8.76 );
   cout << "\nceil(" << 9.2 << ") = " << ceil( 9.2 )
      << "\nceil(" << -9.8 << ") = " << ceil( -9.8 );
   cout << "\nfloor(" << 9.2 << ") = " << floor( 9.2 )
      << "\nfloor(" << -9.8 << ") = " << floor( -9.8 );
   cout << "\npow(" << 2.0 << ", " << 7.0 << ") = "
      << pow( 2.0, 7.0 ) << "\npow(" << 9.0 << ", "
      << 0.5 << ") = " << pow( 9.0, 0.5 );
   cout << setprecision( 3 ) << "\nfmod("
      << 2.6 << ", " << 1.2 << ") = "
      << fmod( 2.6, 1.2 ) << setprecision( 1 );
   cout << "\nsin(" << 0.0 << ") = " << sin( 0.0 );
   cout << "\ncos(" << 0.0 << ") = " << cos( 0.0 );
   cout << "\ntan(" << 0.0 << ") = " << tan( 0.0 ) << endl;
}
