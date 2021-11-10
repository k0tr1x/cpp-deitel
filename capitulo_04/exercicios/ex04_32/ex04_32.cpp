// Exercício 04_32: ex04_32.cpp
// Lados do triangulo

#include <iostream>
using namespace std;

int main()
{
	double lado1, lado2, lado3;

	cout << "Entre com três valores inteiros: ";
	cin >> lado1 >> lado2 >> lado3;

	bool resultado = ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2));
	if(resultado)
	{
	cout << "Forma um triângulo." << endl;
	} else
	{
	cout << "Não Forma Um Triângulo" << endl;
	}

return 0;
}
