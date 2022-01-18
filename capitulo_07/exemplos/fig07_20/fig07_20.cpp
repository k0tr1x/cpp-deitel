// Fig07_20 : fig07_20.cpp
//Inicializando arrays multidimensionais
#include <iostream>
#include <array>
using namespace std;

const size_t linhas = 2;
const size_t colunas = 3;
void printArray(const array<array<int, colunas>, linhas> &);

int main(){

    array<array<int, colunas>, linhas> array1 = {1,2,3,4,5,6};
    array<array<int, colunas>, linhas> array2 = {1,2,3,4,5};

    cout << "Values in array1 by row are: " << endl;
    printArray(array1);

    cout << "\nValues in array2 by row are: " << endl;
    printArray(array2);

} //fim do main

void printArray( const array<array<int, colunas>, linhas> & a){

    // loop through array's rows
    for( auto const &linha : a){

        //loop through columns of current row
        for( auto const &elemento : linha){
            cout << elemento << ' ';
        } // fim do for interno

        cout << endl;

    } // fim do for externo

} // fim do printArray










