// Exercício 02_18: ex02_18.cpp
// Qual é maior?
// Autor: Anderson Misson

#include<iostream>

	using std::cout;
	using std::cin;
	using std::endl;

int main(){

	int x,y;

	cout << "Digite dois números inteiros: ";
	cin >> x >> y;

	if ( x > y )
		cout << x << " É maior que " << y << endl;
	if ( y > x )
		cout << y << " É maior que " << x << endl;
	if ( x == y )
		cout << "Estes números são iguais. " << endl;

	return 0;
}
