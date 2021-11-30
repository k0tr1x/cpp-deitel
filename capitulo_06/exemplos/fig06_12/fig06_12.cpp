// Fig 06_12: fig06_12.cpp
// Usando numeros Randomicos com c++

#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>
using namespace std;

int main(){

    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 6);

    for( unsigned int contador = 1; contador <= 100; ++contador){

        cout << setw(10) << randomInt(engine);

        if( contador % 5 == 0){
            cout << endl;
        }
    }
}
