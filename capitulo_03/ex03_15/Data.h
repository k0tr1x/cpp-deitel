// Exercício 03_15: Date.h

#include <iostream>
using namespace std;

class Data
{
public:
	Data (int dd, int mm, int yy);
	void setDia(int dd);
	int getDia();
	void setMes(int mm);
	int getMes();
	void setAno(int yy);
	int getAno();
	void displayDate();	

private:
	int dia;
	int mes;
	int ano;
};
