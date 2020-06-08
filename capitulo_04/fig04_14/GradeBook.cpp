// Figura 04_13: GradeBook.cpp
// Definições De Função-Membro para a classe GradeBook que resolve o
// programa de média de classe com repetição controlada por sentinela

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::fixed; // assegura que o ponto de fração decimal seja exibido

#include <iomanip> // manipuladores de fluxo parametrizados
using std::setprecision;

# include "GradeBook.h"

// Construtor
GradeBook::GradeBook( string name)
{
   setCourseName( name );
}

void GradeBook::setCourseName( string name )
{
   if ( name.size() <= 25 ) // Se o nome tiver até 25 caracteres
   {
	   courseName = name; // armazena o nome do curso no Objeto
   }else
   {
      courseName = name.substr( 0, 25 );
      cerr << "Name \"" << name << "\" exceeds maximum length (25). \n"
	      << "Limiting courseName to first 25 characters.\n" << endl;
   } // fim do if... else
} // fim da função setCourseName

// Função getCourseName
string GradeBook::getCourseName() const
{
   return courseName;
} // fim da função getCourseName

void GradeBook::displayMessage() const
{
   cout << "Welcome to the grade book for \n" << getCourseName() << "!\n"
	   << endl;
} // fim da função displayMessage

void GradeBook::determineClassAverage() const
{
   // Inicializa
   int total = 0;
   unsigned int gradeCounter = 0; // unsigned é para números positivos

   // Processando
   cout << "Enter grade or -1 to quit: ";
   int grade = 0;
   cin >> grade;

   while ( grade != -1)
   {
   total = total + grade;
   gradeCounter = gradeCounter + 1;
   
   cout << "Enter grade or -1 to quit: ";
   cin >> grade;
   } // Fim do while

   // Fim
   if ( gradeCounter != 0 )
   {
      // Calculando Média
      double average = static_cast<double>( total ) / gradeCounter;

      // display total e media (duas casas apos a virgula)
      cout << "\nTotal of all" << gradeCounter << "grades entered is "
	      << total << endl;
      cout << setprecision(2) << fixed;
      cout << "Class average is " << average << endl;
   
   } // Fim do IF
   else // Se não tiver informação nenhuma
	   cout << "No grades were entered" << endl;
} // fim da função determineClassAverage
