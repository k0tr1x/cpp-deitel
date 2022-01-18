// Fig07_18: fig07_18.cpp
// Sorting and binary_search
#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm> // Contem sort e binary_search
using namespace std;

int main(){

    const size_t arraySize = 7;
    array<string, arraySize> colors = {"red","orange","yellow",
        "green","blue","indigo","violet"};

    // output original array
    cout << "Unsorted array:\n";
    for( string color: colors){
        cout << color << " ";
    } // fim do for

    sort( colors.begin(), colors.end()); // misturar as cores

    // output sorted array
    cout << "\nSorted array:\n";
    for( string item : colors){
        cout << item << " ";
    } // fim do for

    // search for "indigo" in colors
    bool found = binary_search( colors.begin(), colors.end(), "indigo");
    cout << "\n\n\"indigo\"" << (found ? "was" : "was not") << " found in colors" << endl;

    found = binary_search( colors.begin(), colors.end(), "cyan");
    cout << "\"cyan\"" << (found ? "was" : "was not") << " found in colors" << endl;

} // fim do main
