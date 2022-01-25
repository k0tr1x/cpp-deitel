// Fig08_14 : fig08_14.cpp
// usando sizeof para ver o tamanho dos arquivos bases
#include<iostream>
using namespace std;

int main(){

    char c;         // variavel do tipo char
    short s;        // variavel do tipo short
    int i;          // variavel do tipo inteiro (integer)
    long l;         // variavel do tipo long
    long long ll;   // variavel do tipo long long
    float f;        // variavel do tipo float
    double d;       // variavel do tipo double
    long double ld; // variavel do tipo long double
    int array[20];  // array embutido em int
    int *ptr = array; // ponteiro tipo int

    cout << "sizeof c = " << sizeof c << "\tsizeof(char) = " << sizeof(char)
        << "\nsizeof s = " << sizeof s << "\tsizeof(short) = " << sizeof(short)
        << "\nsizeof i = " << sizeof i << "\tsizeof(int) = " << sizeof(int)
        << "\nsizeof l = " << sizeof l << "\tsizeof(long) = " << sizeof(long)
        << "\nsizeof ll = " << sizeof ll << "\tsizeof(long long) = " << sizeof(long long)
        << "\nsizeof f = " << sizeof f << "\tsizeof(float) = " << sizeof(float)
        << "\nsizeof d = " << sizeof d << "\tsizeof(double) = " << sizeof(double)
        << "\nsizeof ld = " << sizeof ld << "\tsizeof(long double) = " << sizeof(long double)
        << "\nsizeof array = " << sizeof array
        << "\nsizeof ptr = " << sizeof ptr << endl;

    return 0;
} // fim do main
