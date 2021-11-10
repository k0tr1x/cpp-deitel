// Exercício 02_27: ex02_27.cpp
// Usando static_cast<int> pela primeira vez
// Autor: Anderson Misson

#include<iostream>

	using std::cout;
	using std::cin;
	using std::endl;

int main(){

	cout << "A = "<< static_cast<int>('A') << endl;
	cout << "a = "<< static_cast<int>('a') << endl;
	cout << "M = "<< static_cast<int>('M') << endl;
	cout << "m = "<< static_cast<int>('m') << endl;
	cout << "0 = "<< static_cast<int>('0') << endl;
	cout << "5 = "<< static_cast<int>('5') << endl;
	cout << "@ = "<< static_cast<int>('@') << endl;
	cout << "$ = "<< static_cast<int>('$') << endl;

	return 0;
}
