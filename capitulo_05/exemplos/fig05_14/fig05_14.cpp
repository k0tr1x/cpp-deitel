// figura 05.14: fig05_14.cpp
// continua instrução que termina uma interação de uma instrução for

#include <iostream>
using namespace std;

int main(){

    for(unsigned int count = 1; count <=10; count++){
        if (count == 5){
            continue;
        } // fim do if

        cout << count << "";
    } // fim do for

    cout << "\nUsado continuar a ignorar a impressão 5" << endl;

    return 0;
} // fim do main
