#include <iostream>

using namespace std;

/*
    Swap values of 2 variable using:
      1) Pointers
      2) References
*/

void p_swap(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}

template <class T> void r_swap(T &a, T &b) {
  T c = a;
  a = b;
  b = c;
}

int main() {
  int a = 5;
  int b = 6;

  cout << "a = " << a << " b = " << b << endl << endl;

  cout << "swap a & b using pointers" << endl;
  p_swap(&a, &b);

  cout << "a = " << a << " b = " << b << endl << endl;

  cout << "swap a & b using references" << endl;
  r_swap(a, b);

  cout << "a = " << a << " b = " << b << endl << endl;
}