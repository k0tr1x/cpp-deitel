// Figura 03.09: GradeBook.h
// Definição de classe GradeBook em um arquivo main separado.
// Autor: Anderson Misson

#include<iostream>
	using std::cout;
	using std::endl;

#include<string> // a classe GradeBook utiliza a classe de string padrão C++
	using std::string;

// Definição da classe GradeBook
class GradeBook
{
	public:
		// O construtor inicializa couseName com a string fornecida como argumento
		GradeBook( string name )
		{
		setCourseName( name ); // chama a função set para inicializar courseName
		} // fim do construtor GradeBook

		// Função para configurar o nome do curso
		void setCourseName( string name )
		{
		courseName = name; // Armazena o nome do curso no objeto
		} // fim da função setCourseName

		// Função para obter o nome do curso
		string getCourseName()
		{
		return courseName; // retorna courseName do objeto
		} // fim da função getCourseName

		// Exibe uma mensagem de boas-vindas para o usuário GradeBook
		void displayMessage()
		{
		cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
		} // fim da função displayMessage

	private:
		string courseName; // Nome do curso para esse GradeBook
}; // Fim da classe GradeBook
