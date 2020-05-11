// Figura 03.05: fig 03_05.cpp
// Define a classe GradeBook que contém um membro de dados courseName
// e funções-membro para configurar e obter seu valor;
// Autor: Anderson Misson

// Cria e manipula um objeto GradeBook com essas funções
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
		// Função que configura o nome do curso
		void setCourseName( string name )
		{
			courseName = name; //Armazena o nome do curso no objeto
		} // Fim da função setCourseName

		// Função que obtém o nome do curso
		string getCourseName()
		{
		return courseName; // Retorna o courseName do objeto
		} // Fim da função getCourseName 

		// função que exibe uma mensagem de boas-vindas
		void displayMessage()
		{
		// essa instrução chama getCourseName para obter o
		// nome do curso que esse GradeBook representa
		cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
		} // fim da função displayMessage

	private:
		string courseName; // Nome do curso para esse GradeBook

};

// A função main inicia a execução do programa
int main()
{
	string nameOfCourse; // string de caracteres para armazenar o nome do curso
	GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook

	// exibe valor inicial de courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

	// Solicita, insere e configura o nome do curso
	cout << "\nPlease enter the course name: " << endl;
	getline ( cin, nameOfCourse ); // lê o nome de um curso com espaços em branco
	myGradeBook.setCourseName( nameOfCourse ); // configura o nome do curso

	cout << endl; // gera saída de uma linha em branco
	myGradeBook.displayMessage(); // exibe a mensagem com o novo nome do curso
	return 0; // indica terminação bem-sucedida

} // fim do main
