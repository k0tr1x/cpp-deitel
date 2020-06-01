// Exercício 03_12: Conta.cpp

#include<iostream>
#include "Conta.h"
using namespace std;

// Construtor
Conta::Conta(int saldoInicial)
{
	if ( saldoInicial >= 0 ){
	saldo = saldoInicial;
	cout << "Saldo Inicial - R$ " << saldo << endl; 
	}
	
	if ( saldoInicial < 0 ){
	saldo = 0;
	cout << "Não Podemos Abrir Conta Com Saldo Negativo. Saldo = 0 " << endl;
	}
} // Fim do Construtor

int Conta::getSaldo()
{
return saldo;
}// fim getSaldo

// Credito
void Conta::creditoConta(int credito)
{
	saldo = saldo + credito;
}

// Debito
void Conta::debitoConta(int debito)
{
	if ( debito > saldo ){
		cout << "Debito Não pode ser maior que o Saldo" << endl;
	} else{
		saldo = saldo - debito;
	}
}
