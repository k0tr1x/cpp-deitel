// Exercícios 02_24: ex02_24.cpp
// É Par ou Impar
// Autor: Anderson Misson

#include<iostream>

	using std::cout;
	using std::cin;
	using std::endl;

int main(){

	int numero;

	cout << "Escolha um número inteiro: ";
	cin >> numero;

	if (numero % 2 == 0)
		cout << numero << " É PAR" << endl;
	
	if (numero % 2 == 1)
		cout << numero << " É IMPAR" << endl;

	return 0;
}
