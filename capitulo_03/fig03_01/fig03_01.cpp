// Figura 03_01: fig03_01.cpp
// Define a classe GradeBook com uma função-Membro displayMessage;
// Cria um objeto GradeBook e chama sua função displayMessage.
// Autor: Anderson Misson

#include<iostream>
using std::cout;
using std::endl;

// Defubução da classe GradeBook
class GradeBook{
	public:
		// função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
		void displayMessage(){
		
			cout << "Welcome to the Grade Book!" << endl;
		
		} // Fim da função displayMessage
}; // fim da classe GradeBook

// a função main inicia a execução do programa
int main(){

	GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook
	myGradeBook.displayMessage(); // Chama a função displayMessage do Objeto

	return 0; // indica terminação bem-sucedida
} // fim do main
