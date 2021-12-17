// Figura 7.3: fig07_03.cpp
// Inicializando um array.

#include<iostream>  // cout, cin, endl
#include<iomanip>   // setw
#include<array>     //
using namespace std;

int main(){

    array<int, 5> n; // array com 5 inteiros

    for( size_t i = 0; i < n.size(); ++i){
        n[i] = 0;
    } // fim do for

    cout << "Elemento" << setw(13) << "Valor" << endl;

    for( size_t j = 0; j < n.size(); ++j){
        cout << setw(8) << j << setw(13) << n[j] << endl;
    }

} // fim do main
