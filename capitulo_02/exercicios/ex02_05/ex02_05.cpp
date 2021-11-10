// Exercicio 02_05: ex02_05.cpp
// Calcula o produto de três inteiros
// Autor: Anderson Misson

#include<iostream> // permite ao programa realizar entrada e saída

using std::cout; // o programa utiliza cout
using std::cin;  // o programam utiliza cin
using std::endl; // o programa utiliza endl

// a função main inicia a execução do programa
int main(){
	int x; // Primeiro Inteiro A Multiplicar
	int y; // Segundo Inteiro A Multiplicar
	int z; // Terceito Inteiro A Multiplicar
	int resultado; // O produto dos três inteiros

	cout << "Entre com os três inteiros: "; // Solicita dados ao usuário
	cin >> x >> y >> z; // lê três inteiros do usuário
	resultado = x * y * z; // Multiplica os três inteiros, resultado de armazenamento
	cout << "O Produto é " << resultado << endl; // Imprime o resultado; termina a linha

	return 0; // indica que o programa executou com sucesso

} // fim da função main
