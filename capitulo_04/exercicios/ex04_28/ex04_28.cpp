// Exercício 04_28: ex04_28.cpp

#include <iostream>
using namespace std;

int main()
{
 int linha = 1;
 int coluna = 1;

	while (linha <= 8)
 	{

    		while (coluna <= 16)
    		{
     		(linha + coluna) %2 ? cout << " " : cout << "*";
		coluna++;
    		}
   	cout << endl;
    	linha++;
	coluna = 1;
	} // fim do while

return 0;

} // fim do main
