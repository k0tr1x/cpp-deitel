// Exercício 03_12: Conta.h

#include<iostream>
	using namespace std;

class Conta
{

public:
	Conta (int);
	int getSaldo();
	void debitoConta(int);
	void creditoConta(int);

private:
	int saldo;
};
