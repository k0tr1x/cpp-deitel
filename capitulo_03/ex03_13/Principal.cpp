// Exercício 03_13: Principal.cpp

#include <iostream>
#include <string>
#include "Fatura.h"
using namespace std;
using std::string;

int main()
{
	Fatura fatura1("1", "Computador", 10, 1500);

	// Fatura 1
	cout << "Número Da Fatura - " << fatura1.getNumeroFatura() << endl;
	cout << "Descrição - " << fatura1.getDescricaoFatura() << endl;
	cout << "Quantidade - " << fatura1.getQuantidadeFatura() << endl;
	cout << "Preço - R$ " << fatura1.getPrecoFatura() << endl;
	cout << "Valor Total - R$ " << fatura1.getValorDaFatura() << endl;
return 0;
}
