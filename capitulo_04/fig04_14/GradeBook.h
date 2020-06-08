// Figura 04.12: GradeBook.h
// Definição Da Classe GradeBook que determina a média de uma classe.
// As Funções-Membro são definidas no GradeBook.cpp
// Autor: Anderson Misson

#include<string>
using std::string;

// Definição da classe GradeBook
class GradeBook
{
public:
   explicit GradeBook( string );
   void setCourseName( string );
   string getCourseName() const;
   void displayMessage() const;
   void determineClassAverage() const;

private:
   string courseName;

};
