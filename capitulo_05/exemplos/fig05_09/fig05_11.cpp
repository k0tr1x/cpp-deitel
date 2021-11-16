// Figura 05.11: fig05_11.cpp
// Cria objeto GradeBook, insere as notas e exibe o relatorio de notas

#include "GradeBook.h"

int main(){

    // cria o objeto GradeBook
    GradeBook myGradeBook( "CS101 C++ Programming" );

    myGradeBook.displayMessage();     // exibe a mensagem de boas vindas
    myGradeBook.inputGrades();        // lê as notas fornecidas pelo usuario
    myGradeBook.displayGradeReport(); // exibe relatorio baseado em notas
    return 0; // indica terminação bem sucedida
} // fim do main
