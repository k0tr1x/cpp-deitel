// Figura 05.09: gradebook.h
// Definições de GradeBook que conta as notas A, B, C, D, E
// As funções-membro são definidas no GradeBook.cpp

#include <string>
using std::string;

// Definição da classe GradeBook
class GradeBook{

public:
    GradeBook( string ); // Inicia o contrutor... nesse caso o nome do curso
    void setCourseName( string ); // função para configurar o nome do curso
    string getCourseName(); // função para recuperar o nome do curso
    void displayMessage(); // função que exibe uma mensagem de boas vindas
    void inputGrades(); // insere um número arbitrario de notas do usuario
    void displayGradeReport(); // exibe o relatorio baseado em notas
private:
    string courseName; // nome do curso para esse GradeBook
    int aCount; // contagem de notas A
    int bCount; // contagem de notas B
    int cCount; // contagem de notas C
    int dCount; // contagem de notas D
    int fCount; // contagem de notas F

}; // fim da classe GradeBook
