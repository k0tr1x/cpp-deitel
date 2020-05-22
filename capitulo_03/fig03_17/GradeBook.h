// Figura 03.15: GradeBook.h
// Definição de classe GradeBook apresenta a interface public da
// classe. Definições de gunção-membro aparecem em GradeBook.cpp
// Autor: Anderson Misson

#include <string> // o programa utiliza classe de string padrão do C++
using std::string;

// Definição da classe GradeBook
class GradeBook
{
public:
	GradeBook( string ); // constructor que inicializa um objeto GradeBook
	void setCourseName( string ); // função que configura o nome do curso
	string getCourseName(); // função que obtém o nome do curso
	void displayMessage(); // função que exibe uma mensagem de boas-vindas

private:
	string courseName; // nome do Curso para esse GradeBook
}; // Fim da classe GradeBook
