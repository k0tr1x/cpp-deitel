// Exercício 03_15: Data.cpp

#include <iostream>
#include "Data.h"
using namespace std;

// Contrutor
Data::Data (int dd, int mm, int yy)
{
	setDia(dd);
	setMes(mm);
	setAno(yy);
}

// Get e Set

void Data::setDia(int dd)
{
	dia = dd;
}

int Data::getDia()
{
	return dia;
}

void Data::setMes(int mm)
{
	if((mm > 0) && (mm < 13)){
	mes = mm;
	}else {
	mes = 1;
	}
}

int Data::getMes()
{
	return mes;
}

void Data::setAno(int yy)
{
	ano = yy;
}

int Data::getAno()
{
	return ano;
}

void Data::displayDate()
{
	cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
}
