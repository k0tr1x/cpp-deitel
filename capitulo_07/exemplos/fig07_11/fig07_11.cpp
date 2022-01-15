// Fig 07_11: fig07_11.cpp
// Programa de análise de enquetes
#include <iostream>
#include <iomanip>
#include<array>
using namespace std;

int main(){

    const size_t responseSize = 20; // tamanho do array de response
    const size_t frequencySize = 6; // tamanho do array de frequency

    // place survey responses in array responses
    const array< unsigned int, responseSize> responses =
    {1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5};

    // inicializa contador frequency para 0
    array<unsigned int, frequencySize> frequency = {};

    // para cada resposta, selecione o elemento de respostas e use esse valor
    // como subscrito de frequência para determinar o elemento a ser incrementado
    for( size_t answer = 0; answer < responses.size(); ++answer){
        ++frequency[ responses[answer]];
    }


    cout << "Rating" << setw( 17 ) << "Frequency" << endl;

    // gera o valor de cada elemento do array
    for( size_t rating = 1; rating < frequency.size(); ++rating){
        cout << setw(6) << rating << setw(17) << frequency[rating] << endl;
}









}

