// Exercício 02_25: ex02_25.cpp
// Se o Primeiro é Multiplo do Segundo
// Autor: Anderson Misson

#include<iostream>

	using std::cout;
	using std::cin;
	using std::endl;

int main(){

	int num1, num2;

	cout << "Escolha dois números inteiros: ";
	cin >> num1 >> num2;

	if (num1 % num2 == 0)
		cout << num1 << " É múltiplo de " << num2 << endl;
	else
		cout << num1 << " Não é múltiplo de " << num2 << endl;

	return 0;
}
