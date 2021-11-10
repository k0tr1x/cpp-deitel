// Exercício 02_19: ex02_19.cpp
// Três Inteiros, fazer soma, média, produto, menor e maior
// Autor: Anderson Misson

#include<iostream>

	using std::cout;
	using std::cin;
	using std::endl;

int main(){

	int x,y,z,soma,media,produto;

	cout << "Coloque três números inteiros: ";
	cin >> x >> y >> z;

	soma = x + y + z;
	media = (x + y + z) / 3;
	produto = x * y * z;

	cout << "SOMA: " << soma << endl;
	cout << "MÉDIA: " << media << endl;
	cout << "Produto: " << produto << endl;

	if (( x > y ) && ( x > z ))
		cout << "Maior = " << x << endl;

	if (( y > x ) && ( y > z ))
		cout << "Maior = " << y << endl;

	if (( z > x ) && ( z > y ))
		cout << "Maior = " << z << endl;	

	if (( x < y ) && ( x < z ))
		cout << "Menor = " << x << endl;

	if (( y < x ) && ( y < z ))
		cout << "Menor = " << y << endl;

	if (( z < x ) && ( z < y ))
		cout << "Menor = " << z << endl;

	return 0;
}
