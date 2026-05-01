#include <iostream>

using namespace std;

int main() {

  cout << "Bilangan" << endl;
  int i;

  cout << "Ganjil : ";
  for (i = 1; i <= 35; i += 2) {
    cout << i << " ";
  }
  cout << endl;

  cout << "Genap : ";
  for (i = 2; i <= 34; i += 2) {
    cout << i << " ";
  }

  return 0;
}
