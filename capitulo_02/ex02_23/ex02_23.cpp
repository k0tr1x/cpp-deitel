// Exercício 02_23: ex02_23.cpp
// O MAIOR e o MENOR número de cinco inteiros.
// Autor: Anderson Misson

#include<iostream>

	using std::cout;
	using std::cin;
	using std::endl;

int main(){

	int n1,n2,n3,n4,n5;

	cout << "Coloque cinco números inteiros: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;

	if ((n1 > n2) && (n1 > n3) && (n1 > n4) && (n1 > n5))
		cout << "MAIOR = " << n1 << endl;

	if ((n2 > n1) && (n2 > n3) && (n2 > n4) && (n2 > n5))
		cout << "MAIOR = " << n2 << endl;

	if ((n3 > n1) && (n3 > n2) && (n3 > n4) && (n3 > n5))
		cout << "MAIOR = " << n3 << endl;

	if ((n4 > n1) && (n4 > n2) && (n4 > n3) && (n4 > n5))
		cout << "MAIOR = " << n4 << endl;

	if ((n5 > n1) && (n5 > n2) && (n5 > n3) && (n5 > n1))
		cout << "MAIOR = " << n5 << endl;

	if ((n1 < n2) && (n1 < n3) && (n1 < n4) && (n1 < n5))
		cout << "MENOR = " << n1 << endl;

	if ((n2 < n1) && (n2 < n3) && (n2 < n4) && (n2 < n5))
		cout << "MENOR = " << n2 << endl;

	if ((n3 < n1) && (n3 < n2) && (n3 < n4) && (n3 < n5))
		cout << "MENOR = " << n3 << endl;

	if ((n4 < n1) && (n4 < n2) && (n4 < n3) && (n4 < n5))
		cout << "MENOR = " << n4 << endl;

	if ((n5 < n1) && (n5 < n2) && (n5 < n3) && (n5 < n4))
		cout << "MENOR = " << n5 << endl;

	return 0;
}
