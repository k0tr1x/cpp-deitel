// Figura 2.5: fig02_05.cpp
// Programa de adição que exibe a soma de dois números.
// Autor: Anderson Misson

#include <iostream> // permite ao programa realizar entrada e saída

// A função main inicia a execução do programa
int main(){

	// Declarações de variável
	int numero1; // Primeiro inteiro a adicionar
	int numero2; // Segundo inteiro a adicionar
	int soma; // Ira somar numero1 e numero2

	std::cout << "Entre com o primeiro inteiro: "; // Solicita dados do usuário
	std::cin >> numero1; // Lê primeiro inteiro inserido pelo usuário em numero1

	std::cout << "Entre com o segundo inteiro: "; // Solicita dados do usuário
	std::cin >> numero2; // Lê segundo inteiro inserido pelo usuário em numero2

	soma = numero1 + numero2; // Adiciona os números, armazena o resultado em soma

	std::cout << "A soma é " << soma << std::endl; // Exibe soma, termina a linha

	return 0; // Indica que o programa terminou com sucesso

} // Fim da função main
