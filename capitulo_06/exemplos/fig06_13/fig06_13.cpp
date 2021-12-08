// Figura 06_13: fig06_13.cpp
// Exemplo de escopo

#include <iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int x = 1;

int main(){

 cout << "global x in main is " << x << endl;

   int x = 5;

   cout << "local x in main's outer scope is " << x << endl;

   { // start new scope
      int x = 7; // hides both x in outer scope and global x

      cout << "local x in main's inner scope is " << x << endl;
   } // end new scope

   cout << "local x in main's outer scope is " << x << endl;

   useLocal(); // useLocal has local x
   useStaticLocal(); // useStaticLocal has static local x
   useGlobal(); // useGlobal uses global x
   useLocal(); // useLocal reinitializes its local x
   useStaticLocal(); // static local x retains its prior value
   useGlobal(); // global x also retains its prior value

   cout << "\nlocal x in main is " << x << endl;
}

void useLocal(){

    int x = 25;

    cout << "\n local static x é " << x << " ao entrar em useStatic " << endl;
    ++x;
    cout << "local static x é " << x << " ao sair em useStatic" << endl;

} // fim do useLocal()

void useStaticLocal(){

    static int x = 50;

    cout << "\n local static x é " << x << " ao entrar em localStatic " << endl;
    ++x;
    cout << "local static x é " << x << " ao sair em localStatic" << endl;
}

void useGlobal(){

    cout << "\nglobal x é " << x << " ao entrar em useGlobal" << endl;
        x *= 10;
    cout << "global x é " << x << " ao sair em useGlobal" << endl;
}
