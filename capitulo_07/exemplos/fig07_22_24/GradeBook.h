// Fig 07_22: fig07_22_24.cpp
// Definição da classe GradeBook que utiliza um
// array bidimensional para armazenar notas de teste.
// As funções-membro são definidas em GradeBook.cpp
#include <array>
#include <string>

// GradeBook Definition
class GradeBook{

    public:
    //Constants
    static const size_t students = 10;
    static const size_t tests = 3;

    // construtor initializes course name and array of grades
    GradeBook( const std::string &,
      std::array< std::array< int, tests >, students > & );

    void setCourseName( const std::string &);
    std::string getCourseName() const;
    void displayMessage() const;
    void processGrades() const; // perform operations on the grade data
    int getMinimum() const; // find the minimum grade in the grade book
    int getMaximum() const; // find the maximum grade in the grade book
    double getAverage( const std::array< int, tests > & ) const;
    void outputBarChart() const; // output bar chart of grade distribution
    void outputGrades() const; // output the contents of the grades array

    private:
    std::string courseName;
    std::array<std::array<int, tests>, students> grades;
}; // fim da classe GradeBook
