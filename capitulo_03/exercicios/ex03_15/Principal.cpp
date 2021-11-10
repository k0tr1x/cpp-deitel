// Exercício 03_15: Principal.cpp

#include <iostream>
#include "Data.h"
using namespace std;

int main()
{
	Data data1(1, 10, 1979);
	Data data2(1, 15, 2015);

	data1.displayDate();
	cout << endl;
	data2.displayDate();

	return 0;
}
