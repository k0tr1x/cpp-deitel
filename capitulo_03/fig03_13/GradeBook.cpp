// Figura 03.12: GradeBook.cpp
// Definições de função-membro de GradeBook. Esse arquivo contém
// implementações das funções-membro prototipadas em GradeBook.h.
// Autor: Anderson Misson

#include<iostream>
#include "GradeBook.h" // inclui a definição de classe GradeBook
using namespace std;

// O construtor inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook(string name)
{
	setCourseName(name); // Chama a função set para inicializar courseName
} // fim do construtor GradeBook

// Função para configurar o nome do curso
void GradeBook::setCourseName( string name )
{
	courseName = name; // armazena o nome do curso no objeto
} // fim da função setCourseName

// Função para obter o nome do curso
string GradeBook::getCourseName()
{
	return courseName; // retorna courseName do objeto
} // fim da função getCourseName

// exibe uma mensagem de boas-vindas para o usuário GradeBook
void GradeBook::displayMessage() 
{
	// chama getCourseName para obter o courseName
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
} // fim da função displayMessage
