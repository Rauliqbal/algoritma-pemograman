#include <iostream>

using namespace std;

int main() {
  int i = 1;
  int k = 2;

  cout << "Bilangan" << endl;
  cout << " " << endl;

  cout << "Ganjil: ";
  while (i <= 35) {
    cout << i << " ";

    i += 2;
  }

  cout << endl;

  cout << "Genap : ";
  while (k <= 34) {
    cout << k << " ";

    k += 2;
  }

  return 0;
}
