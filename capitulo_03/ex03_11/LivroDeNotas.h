// Exercicio

#include<string>
	using std::string;

class LivroDeNotas
{
public:
	LivroDeNotas(string, string);
	void setnomeDoCurso(string);
	string getnomeDoCurso();
	void setnomeDoProfessor(string);
	string getnomeDoProfessor();
	void displayMessage();
	
private:
	string nomeDoCurso;
	string nomeDoProfessor;	
	
};
