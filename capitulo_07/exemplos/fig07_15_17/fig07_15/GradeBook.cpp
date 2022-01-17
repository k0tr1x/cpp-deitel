// Fig. 07_16: GradeBook.cpp

#include <iostream>
#include <iomanip>
#include "GradeBook.h"
using namespace std;

// Construtor
GradeBook::GradeBook(const string &name,
    const array<int, students> &gradesArray)
    : courseName( name ), grades( gradesArray )
{
} // fim do GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( const string &name){
    courseName = name;
}

string GradeBook::getCourseName() const
{
   return courseName;
} // end function getCourseName

void GradeBook::displayMessage() const
{
   // this statement calls getCourseName to get the
   // name of the course this GradeBook represents
   cerr << "Welcome to the grade book for\n" << getCourseName() << "!"
      << endl;
} // end function displayMessage

void GradeBook::processGrades() const{

    outputGrades();

    cout << setprecision(2) << fixed;
    cout << "\nClass average is " << getAverage() << endl;

    cout << "Lowest grade is " << getMinimum() << "\nHighest grade is "
        << getMaximum() << endl;

    outputBarChart();
}

// find minimum grade
int GradeBook::getMinimum() const{
    int lowGrade = 100;

    for( int grade:grades){

        if( grade < lowGrade){
            lowGrade = grade;
        }
    } // fim do for

    return lowGrade;
} // fim do getMinimum

int GradeBook::getMaximum() const{

    int highGrade = 0;

    for( int grade : grades){

        if( grade > highGrade){
            highGrade = grade;
        } // fim do if
    } // fim do for

    return highGrade;
}

double GradeBook::getAverage() const{

    int total = 0;

    for( int grade:grades){
        total += grade;
    } // fim do for

    return static_cast<double>(total) / grades.size();

} // fim do getAvarage

// output bar chart displaying grade distribution
void GradeBook::outputBarChart() const
{
   cout << "\nGrade distribution:" << endl;

   // stores frequency of grades in each range of 10 grades
   const size_t frequencySize = 11;
   array< unsigned int, frequencySize > frequency = {}; // init to 0s

   // for each grade, increment the appropriate frequency
   for ( int grade : grades )
      ++frequency[ grade / 10 ];

   // for each grade frequency, print bar in chart
   for ( size_t count = 0; count < frequencySize; ++count )
   {
      // output bar labels ("0-9:", ..., "90-99:", "100:" )
      if ( 0 == count )
         cout << "  0-9: ";
      else if ( 10 == count )
         cout << "  100: ";
      else
         cout << count * 10 << "-" << ( count * 10 ) + 9 << ": ";

      // print bar of asterisks
      for ( unsigned int stars = 0; stars < frequency[ count ]; ++stars )
         cout << '*';

      cout << endl; // start a new line of output
   } // end outer for
} // end function outputBarChart

// output the contents of the grades array
void GradeBook::outputGrades() const
{
   cout << "\nThe grades are:\n\n";

   // output each student's grade
   for ( size_t student = 0; student < grades.size(); ++student )
      cout << "Student " << setw( 2 ) << student + 1 << ": " << setw( 3 )
         << grades[ student ] << endl;
} // end function outputGrades


