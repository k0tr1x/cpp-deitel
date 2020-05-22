// Figura 03.13: fig03_13.cpp
// Demonstração de classe GradeBook depois de separar
// sua interface de sua implementação
// Autor: Anderson Misson

#include<iostream>
using namespace std;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// A função main inicia a execução do programa
int main()
{

	// cria dois objetos GradeBook
	GradeBook gradeBook1( "CS101 Introdução to C++ Programming" );
	GradeBook gradeBook2( "CS102 Data Structures in C++" );

	// exibe valor inicial de courseName para cada GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;

	return 0; // indica terminação bem-sucedida
} // Fim de main
