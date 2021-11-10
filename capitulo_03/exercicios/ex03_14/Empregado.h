// Exercício 03_14: Empregado.h

#include <iostream>
#include <string>
using namespace std;
using std::string;

class Empregado
{
	public:
		Empregado(string nome, string sobrenome, int salario);
		void setNomeEmpregado( string nome );
		string getNomeEmpregado();
		void setSobrenomeEmpregado( string sobrenome );
		string getSobrenomeEmpregado();
		void setSalarioEmpregado( int salario );
		int getSalarioEmpregado();

	private:
		string nomeEmpregado;
		string sobrenomeEmpregado;
		int salarioEmpregado;

};
