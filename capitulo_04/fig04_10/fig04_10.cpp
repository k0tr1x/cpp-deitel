// Figura 04.10: fig04_10.cpp
// Cria o objeto da classe GradeBook e invoca sua função determineClassAverage
// Autor: Anderson Misson

#include <iostream>
using namespace std;
#include "GradeBook.h" // inclui a definição de classe GradeBook

int main()
{
	// Cria o objeto myGradeBook da classe GradeBook e
	// passa o nome do cursor para o construtor
	GradeBook myGradeBook("CS101 C++ Programming");
	
	myGradeBook.displayMessage(); // Exibe a mensagem de boas-vindas
	myGradeBook.determineClassAverage(); // Calcula a média das 10 notas	

	return 0; // indica terminação bem-sucedida
} // fim de main
