// Exercício 04_35: ex04_35.cpp

#include <iostream>
using namespace std;
	
int fatorial( int numero)
   {
      int contador = 1;
      int resultado = 1;
      
      while (contador <= numero)
      {
	resultado *= contador;
	contador++;
      }
    return resultado;
   }
	
double constante( int adicao)
   {
      double resultado = 1;
      int contador = 1;
     
      while (contador <= adicao)
      {
         resultado += 1.0 / fatorial(contador);
         contador++;
      }
    return resultado;
   }
	
double potencia (int adicao, double x)
   {
      double resultado = 1;
      int contador = 1;
      double potenciaX = x;

      while (contador <= adicao)
      {
         resultado += potenciaX / fatorial(contador);
         potenciaX *= x;
         contador++;
      }
    return resultado;
   }
	
int main()
{
int numero, adicao;
double x;

// a)
cout << "Factorial de: ";
cin >> numero;
cout << "Fatorial de " << numero << " é: " << fatorial(numero) << endl;

// b)
cout << "Entre com o valor de 'e' e 'e^x': (<= 13) ";
cin >> adicao;
cout << "Constante: " << adicao << " é: " << constante(adicao) << endl;

// c)
cout << "Entre com a potencia x: ";
cin >> x;
cout << "e^" << x << " com precisão " << adicao << " é: " << potencia(adicao, x) << endl;

return 0;
}
