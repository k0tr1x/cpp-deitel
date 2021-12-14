// Figura 6.29: fig06_29.cpp
// Testando a função fibonacci recursiva.

#include<iostream>
using namespace std;

unsigned long fibonacci( unsigned long);

int main(){

    for( unsigned int contador = 0; contador <= 10; contador++){
        cout << "fibonacci(" << contador << ") = "
        << fibonacci(contador) << endl;
    }

    // display
    cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
    cout << "fibonacci(30) = " << fibonacci(30) << endl;
    cout << "fibonacci(35) = " << fibonacci(35) << endl;

return 0;
} // fim do main

// função recursiva de fibonacci
unsigned long fibonacci( unsigned long numero){

    if(( numero == 0 ) || ( numero == 1 )){
        return numero;
    } else{
        return fibonacci(numero -1) + fibonacci(numero -2);
    } // fim do else

} // fim da função fibonacci
