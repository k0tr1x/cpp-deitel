// Figura 04.08: GradeBook.h
// Definição de classe GradeBook que determina a média da classe 
// As funções-membro são definidas no GradeBook.cpp
// Autor: Anderson Misson

#include <string> // o programa utiliza classe de string padrão do C++
using std::string;

// Definição da classe GradeBook
class GradeBook
{
public:
	explicit GradeBook( string ); // constructor que inicializa um objeto GradeBook
	void setCourseName( string ); // função que configura o nome do curso
	string getCourseName() const; // função que obtém o nome do curso
	void displayMessage() const; // função que exibe uma mensagem de boas-vindas
	void determineClassAverage() const;

private:
	string courseName; // nome do Curso para esse GradeBook
}; // Fim da classe GradeBook
