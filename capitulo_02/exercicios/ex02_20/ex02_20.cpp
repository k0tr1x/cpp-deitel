// Exercício 02_20: ex02_20.cpp
// Ler o raio, diametro, circunferencia e área do circulo
// Autor: Anderson Misson

#include<iostream>

	using std::cout;
	using std::cin;
	using std::endl;

int main(){

	double pi = 3.14159;
	int raio, diametro, circunferencia,area;

	cout << "Qual é o tamanho do raio: ";
	cin >> raio;

	diametro = 2 * raio;
	circunferencia = 2 * pi * raio;
	area = pi * raio * raio;

	cout << "Raio = " << raio << endl;
	cout << "Diâmetro = " << diametro << endl;
	cout << "Circunferência = " << circunferencia << endl;
	cout << "Área do Círculo = " << area << endl;

	return 0;
}
