// Exercício 03_13: Fatura.cpp

#include <iostream>
#include <string>
#include "Fatura.h"
using namespace std;
using std::string;

Fatura::Fatura ( string numero, string descricao, int quantidade, int preco )
{
	setNumeroFatura(numero);
	setDescricaoFatura(descricao);
	setQuantidadeFatura(quantidade);
	setPrecoFatura(preco);
}

void Fatura::setNumeroFatura( string numero )
{
	numeroFatura = numero;
}

string Fatura::getNumeroFatura()
{
	return numeroFatura;
}

void Fatura::setDescricaoFatura( string descricao )
{
	descricaoFatura = descricao;
}

string Fatura::getDescricaoFatura()
{
	return descricaoFatura;
}

void Fatura::setQuantidadeFatura( int quantidade )
{
	quantidadeFatura = quantidade;
}

int Fatura::getQuantidadeFatura()
{
	return quantidadeFatura;
}

void Fatura::setPrecoFatura( int preco)
{
	if (preco >= 0){
	precoFatura = preco;
	} else{
	precoFatura = 0;
	}
}

int Fatura::getPrecoFatura()
{
	return precoFatura;
}

int Fatura::getValorDaFatura()
{
	return quantidadeFatura * precoFatura;
}
