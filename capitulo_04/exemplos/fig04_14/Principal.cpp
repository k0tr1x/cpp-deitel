// Figura 04_14: Principal.cpp
// Criando um objeto da Classe GradeBook e invoca determineClassAverage

#include "GradeBook.h"

int main()
{
   // cria o objeto myGradeBook da classe GradeBook
   // passa o nome do cursor para construtor
   GradeBook myGradeBook( "CS101 C++ Programming" );

   myGradeBook.displayMessage(); // Exibe a mensagem de boas vindas
   myGradeBook.determineClassAverage(); // Calcula media das 10 notas 

   return 0;

}
