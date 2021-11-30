// Figura 06_04: fig06_04.cpp
// Livro de Notas

#include<iostream>
using namespace std;

#include "GradeBook.h" // inclui Cabeçalho GradeBook

GradeBook::GradeBook( string name)
    :maximumGrade(0){

    setCourseName(name);

} // fim do contrutor GradeBook

void GradeBook::setCourseName( string name){

if(name.size() <= 25){
    courseName = name;
}else{
    courseName = name.substr(0, 25); // 25 caracteres no maximo
    cerr << "Nome \"" << name << "\" excedeu o máximo de 25 caracteres.\n"
        << "Limite máximo para courseName é de 25 caracteres.\n" << endl;
    } // fim do if e else

} // fim do setCourseName

string GradeBook::getCourseName() const{

    return courseName;

} // fim do getCourseName

void GradeBook::displayMessage() const{

    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
        << endl;

} // fim da função displayMessage()

void GradeBook::inputGrades(){

    int grade1;
    int grade2;
    int grade3;

    cout << "Enter three integer grades: ";
    cin >> grade1 >> grade2 >> grade3;

    maximumGrade = maximum(grade1, grade2, grade3);

} // fim da função inputGrades

int GradeBook::maximum(int x, int y, int z) const{

    int maximumValue = x; // Assumindo que X é o maior numero

    if(y > maximumValue){
        maximumValue = y;
    }

    if(z > maximumValue){
        maximumValue = z;
    }

    return maximumValue;

} // fim da função maximum

void GradeBook::displayGradeReport() const {

    cout << "Maximum of Grades entered: " << maximumGrade << endl;

} // fim da função displayGradeReport
