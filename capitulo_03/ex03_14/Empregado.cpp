// Exercício 03_14: Empregado.cpp

#include <iostream>
#include <string>
#include "Empregado.h"
using namespace std;
using std::string;

// Construtor
Empregado::Empregado(string nome, string sobrenome, int salario)
{
	setNomeEmpregado(nome);
	setSobrenomeEmpregado(sobrenome);
	setSalarioEmpregado(salario);
}

// Getters e Setters

void Empregado::setNomeEmpregado(string nome)
{
	nomeEmpregado = nome;
}

string Empregado::getNomeEmpregado()
{
	return nomeEmpregado;
}

void Empregado::setSobrenomeEmpregado(string sobrenome)
{
	sobrenomeEmpregado = sobrenome;
}

string Empregado::getSobrenomeEmpregado()
{
	return sobrenomeEmpregado;
}

void Empregado::setSalarioEmpregado(int salario)
{
	if (salario >= 0){
	salarioEmpregado = salario;
	} else{
	salarioEmpregado = 0;
	}
}	

int Empregado::getSalarioEmpregado()
{
	return salarioEmpregado;
}
