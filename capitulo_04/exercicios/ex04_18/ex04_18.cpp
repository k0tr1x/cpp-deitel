// Exercício 04_18: ex04_18.cpp

#include<iostream>
using namespace std;

int main()
{
  int n = 1;

  cout << "N\t\t10*N\t\t100*N\t\t1000*N\n" << endl;
  while( n < 11)
  {
  cout << n << "\t\t" << 10 * n << "\t\t" << 100 * n << "\t\t" << 1000 * n << endl;
  n++;
  }// fim do while

  return 0;
}
