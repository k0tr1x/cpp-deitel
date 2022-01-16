// Figura 07_12: fig07_12.cpp
// Array estatico e Array Autormatico
#include<iostream>
#include<array>
using namespace std;

void staticArrayInit();
void automaticArrayInit();
const size_t arraySize=3;

int main(){

    cout << "First call to each function:\n";
    staticArrayInit();
    automaticArrayInit();
    cout << endl;

    cout << "\n\nSecond call to each function:\n";
    staticArrayInit();
    automaticArrayInit();

} // end main

void staticArrayInit(){

    static array<int, arraySize> array1; // static local array

    cout << "\nValues on entering staticArrayInit:\n";

    // output contens of array1
    for( size_t i=0; i < array1.size(); ++i){
        cout << "array1[" << i << "] = " << array1[i] << " ";
    }

    cout << "\nValue on existing staticArrayInit:\n";

    for( size_t j = 0; j < array1.size(); ++j){
        cout << "array1[" << j << "] = " << (array1[j] +=5) << " ";
    }

} // End function staticArrayInt

void automaticArrayInit(){

    array<int, arraySize> array2 = { 1,2,3 }; // automatic local array

    cout << "\n\nValues on entering automaticArrayInit:\n";

    for( size_t i = 0; i < array2.size(); ++i){
        cout << "array2[" << i << "] = " << array2[i] << " ";
    }

    cout << "\nValues on existing automaticArrayInit:\n";

    for( size_t j = 0; j << array2.size(); ++j){
        cout << "array2[" << j << "] = " << (array2[j]+=5) << " ";
    }

} // fim da função automaticArrayInit






















