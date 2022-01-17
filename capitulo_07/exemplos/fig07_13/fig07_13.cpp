// Fig 07_13: fig07_13.cpp
//Usando Range para multiplicar array
#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int, 5> items = {1,2,3,4,5};

    cout << "items before modification: ";
    for( int item : items)
        cout << item << " ";

    for( int &itemRef : items)
        itemRef *=2;

    cout << "\nitems after modification: ";
    for (int item : items)
        cout << item << " ";

    cout << endl;

} // end main
