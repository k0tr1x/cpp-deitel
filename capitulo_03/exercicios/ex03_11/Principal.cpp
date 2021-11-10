// Exercício

#include<iostream>
	using namespace std;
	using std::string;

#include "LivroDeNotas.h"

int main()
{
	LivroDeNotas teste1("CS101 Introdução ao C++", "Paul Deitel");
	LivroDeNotas teste2("CS102 Estrutura de Dados C++", "Harvey Deitel");

	cout << "TESTE1 CRIOU - " << teste1.getnomeDoCurso()
		<< "\nTESTE2 CRIOU - " << teste2.getnomeDoCurso() << endl;

	cout << "\n" << endl;
	teste1.displayMessage();
	teste2.displayMessage();

	return 0;
}
