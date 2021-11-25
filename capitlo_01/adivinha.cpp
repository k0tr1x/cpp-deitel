// Resolução do exercício 3.38
// Jogo de adivinhação

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void jogoAdivinha(); // Prototipo da Função
bool estaCerto( int, int ); // Prototipo da Função

int main(){

// usando srand( time(0) )
jogoAdivinha();

return 0;

} // fim do main

void jogoAdivinha(){

    int pergunta;  // gerando numeros automaticamente
    int adivinha; // usuario
    char resposta; // boleano de SIM ou NÃO

    // Loop para usuarios digitarem 'n' para sair
    do{
    // gerar um número automatico entre 1 a 1000
    //
    pergunta = 1 + rand() % 1000;

    // terminal
    cout << "Tenho um número entre 1 e 1000. \n"
           << "Você consegue adivinhar meu número? \n"
           << "Por favor, digite seu primeiro palpite." << endl;
      cin >> adivinha;

      // loop para o numero correto
     while (!estaCerto(adivinha, pergunta)){
        cin >> adivinha;
    } // fim do while

    // Prompt estando correto
    cout << "\n Excelente! Você adivinhou o número!"
        << "Você gostaria de jogar denovo ('y'ou 'n')?";
    cin >> resposta;

    cout << endl;
    }while (resposta == 'y');

} // fim da função

// estaCerto vai retornar quando g e a serém igual
bool estaCerto(int g, int a){

if( g == a){
    return true;
}

// se o usuario errou
if( g < a){
    cout << "Muito Baixo. Tente Novamente.\n";
}else{
    cout << "Muito Alto. Tente Novamente.\n";
}// fim do else

return false;
} // fim da função

