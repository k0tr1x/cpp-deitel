// fig 08.25 : fig08_25.h
// Definição da classe DeckOfCards que
// representa um baralho

// Definição da classe DeckOfCards

class DeckOfCards{

    public:
        DeckOfCards();
        void shuffle();
        void deal();
    private:
        int deck[4][13];

}; // fim da classe DeckOfCards
