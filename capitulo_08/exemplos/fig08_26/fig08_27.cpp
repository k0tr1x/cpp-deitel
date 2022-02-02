// Figura 8.26: DeckOfCards.cpp
// Definições de função-membro para a classe DeckOfCards que simula
// o embaralhamento e distribuição de um baralho.

#include <iostream> // cout, left, right
#include <iomanip>  // setw
#include <cstdlib>  // rand, srand
#include <ctime>    // time;

#include "DeckOfCards.h"

using namespace std;

DeckOfCards::DeckOfCards(){

    // itera pelas linha do baralho
    for( int row = 0; row <= 3; row++){

        // itera pelas colunas do baralho para linha
        for( int column = 0; column <= 12; column++){

            deck[ row][ column] = 0;

        } // fim do for interno
    } // fim do for externo

    srand( time(0));

} // fim do contrutor padrão DeckOfCards

// embaralha as cartas do baralho
void DeckOfCards::shuffle(){

    int row; // representar o valor
    int column; // represernta

    // para cada uma das 52 cartas, escolhe um slot aleatoriamente
    for ( int card = 1; card <= 52; card++){

        do {// escohe uma nova localização aleatoria até um slot vazio ser encontrado

            row = rand() % 4; // seleciona a linha aleatoriamente
            column = rand() % 13; // seleciona a coluna aleatoriamente

        } while ( deck[ row ][ column ] != 0); // fim da instrução do...while

        // coloca o número de carta no slot escolhido
        deck[ row ][ column ] = card;

    } // fim do for
} // fim do shuffle

// distribui as cartas do baralho
void DeckOfCards::deal(){

    // inicializa o array suit
    static const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    // inicializa o array face
    static const char *face[ 13 ] =
        { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    // para cada uma das 52 cartas
    for( int card = 1; card <= 52; card++){

        // itera pelas linhas do baralho
        for( int row = 0; row <= 3; row++){

            // intera pelas colunas de baralho para linha atual
            for( int column = 0; column <= 12; column++){

                // se o slot contiver a carta atual, exiba a carta
                if( deck[ row ][ column ] == card){

                    cout << setw( 5 ) << right << face[ column ]
                        << " of " << setw( 8 ) << left << suit[ row ]
                        << ( card % 2 == 0 ? '\n' : '\t');
                } // fim do if
            } // fim do for de column
        } // fim do for interno
    } // fim do for externo
}// fim do Deal

