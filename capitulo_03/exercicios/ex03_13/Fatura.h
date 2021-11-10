// Exercicio 03_13 : Fatura.h

#include <iostream>
#include <string>
using namespace std;
using std::string;

class Fatura
{
public:
	Fatura(string, string, int, int);
	void setNumeroFatura(string numero);
	string getNumeroFatura();
	void setDescricaoFatura(string descricao);
	string getDescricaoFatura();
	void setQuantidadeFatura(int quantidade);
	int getQuantidadeFatura();
	void setPrecoFatura(int preco);
	int getPrecoFatura();
	int getValorDaFatura();

private:
	string numeroFatura;
	string descricaoFatura;
	int quantidadeFatura;
	int precoFatura;	
};
