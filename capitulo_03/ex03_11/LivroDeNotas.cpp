// Exercicio

#include<iostream>
	using namespace std;

#include "LivroDeNotas.h"

LivroDeNotas::LivroDeNotas(string nome1, string nome2)
{
	setnomeDoCurso(nome1);
	setnomeDoProfessor(nome2);
}

void LivroDeNotas::setnomeDoCurso(string nome1)
{
	nomeDoCurso = nome1;
}

string LivroDeNotas::getnomeDoCurso()
{
	return nomeDoCurso;
}

void LivroDeNotas::setnomeDoProfessor(string nome2)
{
	nomeDoProfessor = nome2;
}

string LivroDeNotas::getnomeDoProfessor()
{
	return nomeDoProfessor;
}

void LivroDeNotas::displayMessage()
{
	cout << "Bem vindo ao Livro De Notas para " << getnomeDoCurso() << "!" << endl;
	cout << "Esse Curso é apresentado por " << getnomeDoProfessor() << "." << endl;
	cout << "\n" << endl;
}
