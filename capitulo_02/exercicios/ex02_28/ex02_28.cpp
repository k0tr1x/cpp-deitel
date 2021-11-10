// Exercício 02_28: ex02_28.cpp
// Imprima cinco inteiros separados por espaço
// Autor: Anderson Misson

#include<iostream>

	using std::cout;
	using std::cin;
	using std::endl;

int main(){

	int total, n1,n2,n3,n4,n5;

	cout << "Digite cinco números inteiros: ";
	cin >> total;

	if (total < 10000)
		cout << "Poucos Digitos, Tente Novamente" << endl;

	if (total > 99999)
		cout << "Muitos Digitos, Tente Novamente" << endl;


	n1 = (total / 10000);
	n2 = (total / 1000) % 10;
	n3 = (total / 100) % 10;
	n4 = (total / 10) % 10;
	n5 = (total % 10);

	cout << n1 << "\t" << n2 << "\t" << n3 << "\t" << n4 << "\t" << n5 << endl;

	return 0;
}
