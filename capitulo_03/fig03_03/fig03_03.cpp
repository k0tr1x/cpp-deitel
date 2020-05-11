// Figura 03.03: fig03_03.cpp
// Define a classe GradeBook com uma função-membro que aceita um parâmetro;
// Cria um objeto GradeBook e chama sua função-membro displayMessage.
// Autor: Anderson Misson

#include<iostream>
	using std::cout;
	using std::cin;
	using std::endl;

#include<string> // O programa utiliza classe de string padrão C++
	using std::string;
	using std::getline;

// Definição da classe GradeBook
class GradeBook{
	public:
		// Funcção que exibe uma mensagem de Boas-Vindas ao usuário do GradeBook
		void displayMessage( string courseName ){
		cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
		} // Fim da Função displayMessage


}; // Fim da classe GradeBook

// Função main inicia a execução do programa
int main(){
	string nameOfCourse; // strings de caracteres para armazenar o nome do curso
	GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook

	// prompt para entrada do nome do curso
	cout << "Please enter the course name: " << endl;
	getline( cin, nameOfCourse ); // lê o nome de um curso com espaços em branco
	cout << endl; // gera saída de uma linha em branco

	// chama a função displayMessage de myGradeBook
	// e passa nameOfCourse como um argumento
	myGradeBook.displayMessage( nameOfCourse );

	return 0;

} // Fim da Função main.
