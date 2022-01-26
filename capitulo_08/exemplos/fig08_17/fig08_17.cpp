// Figura 8.17: fig08_17.cpp
// Usando subscritos e notações de ponteiro com arrays integrados.
#include <iostream>
using namespace std;

int main(){

    int b[] = { 10, 20, 30, 40};
    int *bPtr = b;

    cout << "Array b displayed with:\n\nArray subscript notation\n";

    for (size_t i = 0; i < 4; ++i){
        cout << "b[" << i << "] = " << b[i] << '\n';
    } // fim do for

    cout << "\nPointer/offset notation where "
        << "the pointer is the array name\n";

    for( size_t offset1 = 0; offset1 < 4; ++offset1){
        cout << "*(b + " << offset1 << ") = " << *( b + offset1) << '\n';
    } // fim do for

    cout << "\nPointer subscript notation\n";

    for( size_t j = 0; j < 4; ++j){
        cout << "bPtr[" << j << "] = " << bPtr[j] << '\n';
    } // fim do for

    cout << "\nPointer/offset notation\n";

    for(size_t offset2 = 0; offset2 < 4; ++offset2){
        cout << "*(bPtr + " << offset2 << ") = " << *(bPtr + offset2) << '\n';
    } // fim do for

} // fim do main
