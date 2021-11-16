// Figura 05_10: gradebook.cpp
// Definições de função membro para a classe GradeBook que
// utiliza uma instrução switch para contar as notas A, B, C, D, F
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h"

// construtor inicializa courseName com string de classe GradeBook
// inicializa membros de dados de contato como 0
GradeBook::GradeBook( string name ){

    setCourseName( name ); // Valida e armazena courseName
    aCount = 0; // Inicializa a contagem de notas A como 0
    bCount = 0; // Inicializa a contagem de notas B como 0
    cCount = 0; // Inicializa a contagem de notas C como 0
    dCount = 0; // Inicializa a contagem de notas D como 0
    fCount = 0; // Inicializa a contagem de notas F como 0
} // fim do construtor GradeBook

// função para configurar o nome do curso; limita o nome a 25 ou menos caracteres
void GradeBook::setCourseName( string name ){

    if ( name.length() <= 25 ){ // se o nome tiver 25 ou menos caracteres
        courseName = name;
    } else{ // se o nome tiver mais do que 25 caracteres
        // configura courseName com os 25 primeiros caracteres do nome do parametro
        courseName = name.substr(0, 25); // seleciona os 25 primeiros caracteres
        cout << "Name \"" << name << "\" exceeds maximum lenght (25).\n"
            << "Limiting courseName to first 25 caracters.\n" << endl;
    } // fim do if... else
} // fim da  função setCourseName

// função para recuperar o nome do curso
string GradeBook::getCourseName(){

    return courseName;
} // fim da função getCourseName

// exibe uma mensagem de boas-vindas para o usuario de GradeBook
void GradeBook::displayMessage(){

    // essa instrução chama getCourseName para obter o
    // nome do curso que esse GradeBook representa
    cout << "Welcome to the grade book for \n" << getCourseName() << "!\n"
        << endl;
} // fim da função displayMessage

// insere um numero arbitrario de notas fornecidas pelo usuario; atualiza o contador de notas
void GradeBook::inputGrades(){

    int grade; // nota inserida pelo usuario

    cout << "Enter the letter grades " << endl
        << "Enter the EOF caracter to end input." << endl;

    // faz um loop até o usuario digitar uma sequencia de teclas de fim de arquivo
    while((grade = cin.get() ) != EOF ){

        // determina a nota inserida
        switch ( grade ){ // instrução switch alinhada com o while

            case 'A': // a nota era letra A maiúscula
            case 'a': // ou a minúscula
            aCount++; // incrementa aCount
            break;    // necessario para fechar o switch

            case 'B': // a nota era letra B maiúscula
            case 'b': // ou b minúscula
            bCount++; // incrementa bCount
            break;    // necessario para fechar o switch

            case 'C': // a nota era letra C maiúscula
            case 'c': // ou c minúscula
            cCount++; // incrementa cCount
            break;    // necessario para fechar o switch

            case 'D': // a nota era letra D maiúscula
            case 'd': // ou d minúscula
            dCount++; // incrementa dCount
            break;    // necessario para fechar o switch

            case 'F': // a nota era letra F maiúscula
            case 'f': // ou f minúscula
            fCount++; // incrementa fCount
            break;    // necessario para fechar o switch

            case '\n': // ignora nova linha,
            case '\t': // tabulações
            case ' ':  // e espaços de entrada
            break;     // necessario para fechar o switch

            default: // captura todos os outros caracteres
                cout << "Incorrect letter grade entered."
                    << " Enter a new grade." << endl;
            break;     // necessario para fechar o switch
        } // fim do switch
    } // fim do while
} // fim do inputGrades

// exibe um relatorio baseado nas notas inseridas pelo usuario
void GradeBook::displayGradeReport(){

    // gera uma saida com o resumo dos resultados
    cout << "\n\nNumber of students who received each letter grade:"
        << "\nA: " << aCount // exibe número de notas A
        << "\nB: " << bCount // exibe número de notas B
        << "\nC: " << cCount // exibe número de notas C
        << "\nD: " << dCount // exibe número de notas D
        << "\nF: " << fCount // exibe número de notas F
        << endl;
} // fim do displayGradeReport
