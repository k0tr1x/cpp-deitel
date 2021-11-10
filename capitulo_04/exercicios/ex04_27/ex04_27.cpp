// Exercício 04_27: ex04_27.cpp

#include <iostream>
using namespace std;

int main()
{
   int binario;
   int decimal = 0;
   int atual = 1;
   int digito;

   cout << "Entre com o número binário (somente 0 ou 1, maximo 10 digitos): ";
   cin >> binario;

   while ( binario > 0)
   {
      digito = binario % 10;
      decimal += digito * atual;
      binario /= 10;
      atual *= 2;   
   }
   cout << "Decimal equivalente do binário é: " << decimal << endl;

return 0;
}
