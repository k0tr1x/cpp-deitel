// Figura 2.13: fig02_13.cpp
// Comparando inteiro utilizando instruções if, operadores relacionais
// e operadores de igualdade

#include <iostream> // Permite ao programa realizar entrada e saida

using std::cout; // O programam ultiliza cout
using std::cin;  // O programam ultiliza cin
using std::endl; // O programam utiliza endl

// A função main inicia a execução do programa
int main(){

	int numero1; // Primeiro número a comparar
	int numero2; // Segundo número a comparar

	cout << "Entre com dois números inteiros para comparar: "; // Solicita dados do usuário
	cin >> numero1 >> numero2; // lê os dois números fornecidos pelo usuário

	if ( numero1 == numero2 )
		cout << numero1 << " == " << numero2 << endl;

	if ( numero1 != numero2 )
		cout << numero1 << " != " << numero2 << endl;
	
	if ( numero1 < numero2 )
		cout << numero1 << " < " << numero2 << endl;

	if ( numero1 > numero2 )
		cout << numero1 << " > " << numero2 << endl;

	if ( numero1 <= numero2 )
		cout << numero1 << " <= " << numero2 << endl;

	if ( numero1 >= numero2 )
		cout << numero1 << " >= " << numero2 << endl;

	return 0; // Indica que o programa terminou com sucesso

} // Fim da função main
