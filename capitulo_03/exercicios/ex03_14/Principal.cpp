// Exercício 03_14: Principal.cpp

#include <iostream>
#include <string>
#include "Empregado.h"
using namespace std;
using std::string;

int main()
{
	Empregado empregado1("José", "Das Couves", 1000);
	Empregado empregado2("Maria", "Das Verduras", -1000);

	cout << "Nome Completo: " << empregado1.getNomeEmpregado() << " " << empregado1.getSobrenomeEmpregado() << endl;
	cout << "Salário: R$ " << empregado1.getSalarioEmpregado() << endl;
	cout << endl;
	cout << "Nome Completo: " << empregado2.getNomeEmpregado() << " " << empregado2.getSobrenomeEmpregado() << endl;
	cout << "Salário: R$ " << empregado2.getSalarioEmpregado() << endl;	
	cout << endl;

	// aumento de 10%
	empregado1.setSalarioEmpregado(empregado1.getSalarioEmpregado() * 1.1);
		
	cout << "Nome Completo: " << empregado1.getNomeEmpregado() << " " << empregado1.getSobrenomeEmpregado() << endl;
	cout << "Salário + 10%: R$ " << empregado1.getSalarioEmpregado() << endl;
	

	return 0;
}
