// Fig 07_23: GradeBook.cpp
// Definições de função-membro para a classe GradeBook que
// utiliza um array bidimensional para armazenar notas.
#include <iostream>
#include <iomanip>
using namespace std;

// include GradeBook
#include "GradeBook.h"

// two-argument constructor
GradeBook::GradeBook(const string &name,
    std::array< std::array<int, tests>, students>&gradesArray)
    : courseName( name ), grades(gradesArray){

}// fim da GradeBook Constructor

// função para set Course Name.
void GradeBook::setCourseName(const string &name){

    courseName = name;

} // fim setCouseName

string GradeBook::getCourseName() const{

    return courseName;

} // fim de getCouseName

void GradeBook::displayMessage() const{

    cerr << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;

} // end function displayMessage

void GradeBook::processGrades() const
{
   // output grades array
   outputGrades();

   // call functions getMinimum and getMaximum
   cout << "\nLowest grade in the grade book is " << getMinimum()
      << "\nHighest grade in the grade book is " << getMaximum() << endl;

   // output grade distribution chart of all grades on all tests
   outputBarChart();
} // end function processGrades

// find minimum grade in the entire gradebook
int GradeBook::getMinimum() const
{
   int lowGrade = 100; // assume lowest grade is 100

   // loop through rows of grades array
   for ( auto const &student : grades )
   {
      // loop through columns of current row
      for ( auto const &grade : student )
      {
         // if current grade less than lowGrade, assign it to lowGrade
         if ( grade < lowGrade )
            lowGrade = grade; // new lowest grade
      } // end inner for
   } // end outer for

   return lowGrade; // return lowest grade
} // end function getMinimum

// find maximum grade in the entire gradebook
int GradeBook::getMaximum() const
{
   int highGrade = 0; // assume highest grade is 0

   // loop through rows of grades array
   for ( auto const &student : grades )
   {
      // loop through columns of current row
      for ( auto const &grade : student )
      {
         // if current grade greater than highGrade, assign to highGrade
         if ( grade > highGrade )
            highGrade = grade; // new highest grade
      } // end inner for
   } // end outer for

   return highGrade; // return highest grade
} // end function getMaximum

// determine average grade for particular set of grades
double GradeBook::getAverage( const array<int, tests> &setOfGrades ) const
{
   int total = 0; // initialize total

   // sum grades in array
   for ( int grade : setOfGrades )
      total += grade;

   // return average of grades
   return static_cast< double >( total ) / setOfGrades.size();
} // end function getAverage

// output bar chart displaying grade distribution
void GradeBook::outputBarChart() const
{
   cout << "\nOverall grade distribution:" << endl;

   // stores frequency of grades in each range of 10 grades
   const size_t frequencySize = 11;
   array< unsigned int, frequencySize > frequency = {}; // init to 0s

   // for each grade, increment the appropriate frequency
   for ( auto const &student : grades )
      for ( auto const &test : student )
         ++frequency[ test / 10 ];

   // for each grade frequency, print bar in chart
   for ( size_t count = 0; count < frequencySize; ++count )
   {
      // output bar label ("0-9:", ..., "90-99:", "100:" )
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
   cout << "            "; // align column heads

   // create a column heading for each of the tests
   for ( size_t test = 0; test < tests; ++test )
      cout << "Test " << test + 1 << "  ";

   cout << "Average" << endl; // student average column heading

   // create rows/columns of text representing array grades
   for ( size_t student = 0; student < grades.size(); ++student )
   {
      cout << "Student " << setw( 2 ) << student + 1;

      // output student's grades
      for ( size_t test = 0; test < grades[ student ].size(); ++test )
         cout << setw( 8 ) << grades[ student ][ test ];

      // call member function getAverage to calculate student's average;
      // pass row of grades as the argument
      double average = getAverage( grades[ student ] );
      cout << setw( 9 ) << setprecision( 2 ) << fixed << average << endl;
   } // end outer for
} // end function outputGrades
