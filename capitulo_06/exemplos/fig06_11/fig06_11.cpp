// Figura 06_11: fig06_11.cpp
// Simulação do Jogo CRAPS

#include<iostream>
#include<cstdlib> // Para função rand e srand
#include<ctime> // função para tempo
using namespace std;

unsigned int rolarDado();

int main(){

    enum Status{ CONTINUE, VENCEU, PERDEU };

    srand(static_cast<unsigned int>(time(0)));

    unsigned int minhaPontuacao = 0;
    Status gameStatus = CONTINUE;
    unsigned int somatoriaDosDados = rolarDado();

    switch( somatoriaDosDados){

    case 7:
    case 11:
        gameStatus = VENCEU;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = PERDEU;
        break;
    default:
        gameStatus = CONTINUE;
        minhaPontuacao = somatoriaDosDados;
        cout << "Pontuação é " << minhaPontuacao << endl;
        break;
    } // fim do switch

    while( gameStatus == CONTINUE){

        somatoriaDosDados = rolarDado();

        if(somatoriaDosDados == minhaPontuacao){
            gameStatus = VENCEU;
        }else if(somatoriaDosDados == 7){
            gameStatus == PERDEU;
            } // fim do else if
        } // fim do While

        if(VENCEU == gameStatus){
            cout << "Jogador Venceu";
        } else{
            cout << "Jogador Perdeu";
        } // fim do if ... else

} // fim do main

unsigned int rolarDado(){

    unsigned int dado1 = 1 + rand() % 6;
    unsigned int dado2 = 1 + rand() % 6;

    unsigned int soma = dado1 + dado2;

    cout << "Jogador jogou " << dado1 << " + " << dado2
        << " = " << soma << endl;

    return soma;

} // fim da função jogarDado
