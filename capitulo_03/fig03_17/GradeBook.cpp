// Figura 03.16: GradeBook.cpp
// Implementações das definições de função-membro de GradeBook
// A função setCourseName realiza a validação

#include <iostream>
using namespace std;

#include "GradeBook.h" // Inclui a definição de classe GradeBook

// construtor inicializa courseName com String fornecido como argumento
GradeBook::GradeBook( string name )
{
	setCourseName( name ); // Valida e armazena courseName
} // Fim do construtor GradeBook

// Função que configura o nome do curso;
// Assegura que o nome do curso tenha no máximo 25 caracteres
void GradeBook::setCourseName( string name )
{
	if ( name.length() <= 25 ) // Se o nome tiver 25 ou menos caracteres
	      courseName = name; // armazena o nome do curso no objeto

	if ( name.length() > 25 ) // Se o nome tiver mais de 25 caracteres
	{
	// configura courseName como os primeiros 25 caracteres do parametro name
	courseName = name.substr( 0,25 ); // Inicia em 0, comprimento de 25

	cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
		<< "Limiting courseName to first 25 characters.\n" << endl;
	} // fim do if
} // fim da função setCourseName

// função para obter o nome do curso
string GradeBook::getCourseName()
{
	return courseName; // retorna courseName do objeto
} // fim da função getCourseName

// exibe uma mensagem de boas-bindas para o usuário GradeBook
void GradeBook::displayMessage()
{
	// chama getCourseName para obter o courseName
	cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;

} // fim da função displayMessage
