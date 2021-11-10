// Figura 03.11: GradeBook.h
// Definição da classe GradeBook. Esse arquivo apresenta a interface pública de
// GradeBook sem revelar as implementações de funções-membro de GradeBook
// que são definidas em GradeBook.cpp
// Autor: Anderson Misson

#include <string> // A Classe GradeBook utiliza a classe de string padrão C++
	using std::string;
// definição da classe GradeBook
class GradeBook
{
public:
	explicit GradeBook( std::string ); // construtor que inicializa courseName
	void setCourseName( std::string ); // função que configura o nome do curso
	std::string getCourseName(); // função que obtém o nome do curso
	void displayMessage(); // função que exibe uma mensagem de boas-vindas

private:
	std::string courseName; // nome do curso para esse GradeBook

}; // fim da classe GradeBook
