// Figura 03.10: fig03_10.cpp
// Incluindo a classe GradeBook a partir do arquivo GradeBook.h para uso em main
// Autor: Anderson Misson

#include<iostream>
	using std::cout;
	using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// A função main inicia a execução do programa
int main()
{
	// cria dois objetos GradeBook
	GradeBook gradeBook1( "CS101 Introduction to C++ Programmig" );
	GradeBook gradeBook2( "CS102 Data Structures in C++" );

	// Exibe valor inicial de courseName para cada GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;

	return 0; // indica terminação bem-sucedida

} // fim do main
