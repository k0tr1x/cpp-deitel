// Figura 7.8: fig07_08.cpp
// Calcula a soma dos elementos do array.
#include<iostream>
#include<array>
using namespace std;

int main(){

    const size_t arraySize = 4;
    array<int, arraySize> a = {10,20,30,40};
    int total = 0;

    for(size_t i=0; i < a.size();++i){
        total += a[i];
    }

    cout << "Soma dos Elementos do Array = " << total << endl;

}
