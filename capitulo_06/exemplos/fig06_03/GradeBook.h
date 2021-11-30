// Figura 06_03: fig06_03.h
// Definição da gradebook com apenas 3 notas

#include <string>

// Classe GradeBook
class GradeBook{

public:
    explicit GradeBook( std::string );
    void setCourseName( std::string);
    std::string getCourseName()const;
    void displayMessage() const;
    void inputGrades();
    void displayGradeReport() const;
    int maximum(int, int, int) const;

private:
    std::string courseName;
    int maximumGrade; // maximo 3 notas

}; // fim da classe GradeBook
