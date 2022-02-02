// Figura 8.27: fig08_27.cpp
// Programa de embaralhamento e distribuição de cartas.
#include "DeckOfCards.h" // Definição da classe DeckOfCards

int main(){

    DeckOfCards deckOfCards1; // cria objeto DeckOfCards

    deckOfCards1.shuffle(); // embaralha as cartas
    deckOfCards1.deal();    // distribui as cartas

    return 0;

} // fim do main

