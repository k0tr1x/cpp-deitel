// Exercício 04_30: ex04_30

#include<iostream>
using namespace std;

int main()
{
	double raio;
	double pi = 3.14159;

	cout << "Entre com o Valor Do Raio: ";
	cin >> raio;

	cout << "Diâmetro: " << raio * 2 << endl;
	cout << "Circunferência: " << 2 * pi * raio << endl;
	cout << "Área: " << pi * raio * raio << endl;

return 0;
} // fim do main
