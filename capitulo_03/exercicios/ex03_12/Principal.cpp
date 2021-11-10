// Exercicio 03_12 : Principal.cpp

#include <iostream>
#include "Conta.h"
using namespace std;

int main()
{
	// Cria Objeto
	Conta conta1(1000);
	Conta conta2(-100);
	
	cout << "---------------"<< endl;
	cout << "Conta 1 - Saldo - R$" << conta1.getSaldo() << endl;
	
	// Creditos
	conta1.creditoConta(100);
	cout << "Conta 1 - Credito de R$ 100 -  Saldo Atual R$" << conta1.getSaldo() << endl;

	// Debito
	conta1.debitoConta(600);
	cout << "Conta 1 - Debito de R$ 600 - Saldo Atual R$ " << conta1.getSaldo() << endl;

	// Debito Acima do Saldo
	cout << "Tentando retirar mais dinheiro do que tem na conta." << endl;
	conta1.debitoConta(600);
	
	
	return 0;
}
