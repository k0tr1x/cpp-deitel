// Exercício 5.7: ex05_07.cpp
// O que esse programa imprime?
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
int x; // declara x
int y; // declara y
// solicita a entrada do usuário
cout << "Enter two integers in the range 1-20: ";
cin >> x >> y; // lê valores para x e y
for ( int i = 1; i <= y; i++ ) // conta de 1 a y
{
for ( int j = 1; j <= x; j++ ) // conta de 1 a x
cout << '@'; // envia @ para saída
cout << endl; // inicia nova linha
} // fim do for externo
return 0; // indica terminação bem-sucedida
} // fim de main
