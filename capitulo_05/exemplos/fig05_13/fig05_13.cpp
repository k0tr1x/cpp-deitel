// figura 05.13: fig05_13.cpp
// a instrução break, sai de uma instrução for

#include <iostream>
using namespace std;

int main(){
    unsigned int count; // Variavel de controle

    for(count = 1; count <=10; count++){

        if(5==count){
            break;
        }

        cout << count <<"";
    } // fim do for

    cout << "\nSaiu do loop na contagem = " << count << endl;
}
