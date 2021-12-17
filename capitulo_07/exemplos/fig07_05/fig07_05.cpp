// Figura 7.5: fig07_05.cpp
// Configura o array s para os inteiros pares de 2 a 20.

#include<iostream>
#include<iomanip>
#include<array>
using namespace std;

int main(){

    const size_t arraySize = 5;

    array<int, arraySize> s;

    for( size_t i = 0; i < s.size(); ++i ){
        s[i] = 2 + 2 * i;
    }

    cout << "Element" << setw(13) << "Value" << endl;

    for( size_t j = 0; j < s.size(); ++j ){
        cout << setw(7) << j << setw(13) << s[j] << endl;
    }
}


