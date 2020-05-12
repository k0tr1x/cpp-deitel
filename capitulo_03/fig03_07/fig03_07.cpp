// Figura 03.07: fig03_07.cpp
// Instanciando múltiplos objetos da classe GradeBook e utilizando
// o construtor GradeBook para especificar o nome do curso
// quando cada objeto GradeBook é criado
// Autor: Anderson Misson

#include<iostream>
	using std::cout;
	using std::endl;

#include<string> // O programa utiliza classe de string padrão C++
	using std::string;

// Definição da classe GradeBook
class GradeBook
{

public:
	// O contrutor inicializa courseName com a string fornecida como argumento
	GradeBook( string name )
	{
	setCourseName( name ); // chama a função set para inicializar courseName
	} // fim do construtor GradeBook

	// função para configurar o nome do curso
	void setCourseName( string name)
	{
		courseName = name; // armazena o nome do curso no objeto
	} // Fim da função setCourseName

	// função para obter o nome do curso
	string getCourseName()
	{
	return courseName; // retorna o courseName do Objeto
	} // fim da função getCourseName

	// exibe uma mensagem de boaas-vindas para o usuário GradeBook
	void displayMessage()
	{
	// Chama getCourseName para obter o courseName	
	cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
	} // Fim da função displayMessage
		
private:
	string courseName; // Nome do curso para esse GradeBook		

}; // fim da classe GradeBook

// a função main inicia a execução do programa
int main (){

	// Cria dois objetos GradeBook
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	// exibe valor inicial de courseName para cada GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;

	return 0; // indica terminação bem-sucedida
} // fim do main
