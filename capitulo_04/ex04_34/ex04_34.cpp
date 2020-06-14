// Exercício 04_34: ex04_34.cpp
// Criptografia

#include <iostream>
using namespace std;

int criptografia( int numero)
{
	int a = numero / 1000;
	int b = (numero % 1000) / 100;
	int c = (numero % 100) / 10;
	int d = numero % 10;

	a = (a + 7) % 10;
	b = (b + 7) % 10;
	c = (c + 7) % 10;
	d = (d + 7) % 10;

	return (c * 1000 + d * 100 + a * 10 + b);

} // fim da criptografia

int descriptografia ( int numero )
{
	int a = numero / 1000;
	int b = (numero % 1000) / 100;
	int c = ( numero % 100) / 10;
	int d = numero % 10;

	a = (a + 3) % 10;
	b = (b + 3) % 10;
	c = (c + 3) % 10;
	d = (d + 3) % 10;

	return (c * 1000 + d * 100 + a * 10 + b);

}// fim da descriptografia

int main()
{
	int numero;
	cout << "Entre com 4 números inteiros: ";
	cin >> numero;
	cout << "Criptografar : " << criptografia(numero) << endl;
	cout << "Descriptografar: " << descriptografia(criptografia(numero)) << endl;

}





