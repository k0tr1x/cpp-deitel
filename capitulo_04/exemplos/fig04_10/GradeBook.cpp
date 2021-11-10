// Figura 04.09: GradeBook.cpp
// Definições de função-membro para a classe GradeBook que resolve o
// programa de média da classe com repretição controlada por contador

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
	if ( name.size() <= 25 ){ // Se o nome tiver 25 ou menos caracteres
	      courseName = name; // armazena o nome do curso no objeto
	} else // se tiver mais
	{
	// configura courseName como os primeiros 25 caracteres do parametro name
	courseName = name.substr( 0,25 ); // Inicia em 0, comprimento de 25

	cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
		<< "Limiting courseName to first 25 characters.\n" << endl;
	} // fim do if... else
} // fim da função setCourseName

// função para obter o nome do curso
string GradeBook::getCourseName() const
{
	return courseName; // retorna courseName do objeto
} // fim da função getCourseName

// exibe uma mensagem de boas-bindas para o usuário GradeBook
void GradeBook::displayMessage() const
{
	// chama getCourseName para obter o courseName
	cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;

} // fim da função displayMessage

// determina a média da classe com base em 10 notas inseridas pelo usuário
void GradeBook::determineClassAverage() const
{
	// Fase de inicialização
	int total = 0; // Inicializa o total
	unsigned int gradeCounter = 1; // Inicializa o contador de Loops

	// Fase de Processamento
	while ( gradeCounter <= 10 ) //Faz Loop 10 Vezes
	{
	cout << "Enter grade: "; // Solicita entrada
	int grade = 0; // Valor da nota inserida pelo usuário
	cin >> grade; // Insere a próxima nota
	total = total + grade; // adiciona grade a total
	gradeCounter = gradeCounter + 1; // incrementa o contador por 1
	} // fim do while

	// Fase de término
	int average = total / 10; // divisão de inteiros produz um resultado inteiro

	// Exibe o total e a média das notas
	cout << "\nTotal of all 10 grades is " << total << endl;
	cout << "Class average is " << average << endl;

} // fim da classe determineClassAverage
