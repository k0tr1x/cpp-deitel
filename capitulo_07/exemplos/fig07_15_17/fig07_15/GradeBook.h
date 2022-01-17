// GradeBook.h
#include <string>
#include <array>

//GradeBook class
class GradeBook{

public:
    // Constant
    static const size_t students = 10;

    // Constructor initializes course
    GradeBook( const std::string &, const std::array<int, students> &);

    void setCourseName( const std::string &);
    std::string getCourseName() const;
    void displayMessage() const; // display a welcome message
    void processGrades() const;
    int getMinimum() const;
    int getMaximum() const;
    double getAverage() const;
    void outputBarChart() const;
    void outputGrades() const;

private:
    std::string courseName;
    std::array<int, students> grades;
}; // end class GradeBook
