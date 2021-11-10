// Exercício 02_16: ex02_16.cpp
// Soma, Produto, Diferença e Quociente
// Autor: Anderson Misson

#include<iostream>

	using std::cout;
	using std::cin;
	using std::endl;

int main(){

	int x;
	int y;
	int soma;
	int subtracao;
	int multiplicacao;
	int divisao;

	cout << "Coloque dois números inteiros: ";
	cin >> x >> y;
	soma = x + y;
	multiplicacao = x * y;
	subtracao = x - y;
	divisao = x / y;
	
	cout << "Soma = " << soma << endl;
	cout << "Produto = " << multiplicacao << endl;
	cout << "Diferença = " << subtracao << endl;
	cout << "Quociente = " << divisao << endl;

	return 0;
}
