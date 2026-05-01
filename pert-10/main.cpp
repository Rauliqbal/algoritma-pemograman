#include <iostream>

using namespace std;

int main() {
  // int i;

  // Loooping 1 - 10
  // for (i = 1; i <= 10; i++) {
  //  cout << "Angka: " << i << endl;
  //}

  // int i = 1;
  // while (i <= 5) {
  //  cout << "Angka: " << i << endl;
  //  i++;
  // }

  int deret;

  cout << "Masukkan jumlah deret: ";
  cin >> deret;

  cout << "Jumlah deretnya adalah:" << endl;

  while (deret > 0) {
    cout << deret << " ";
    deret--;
  }

  return 0;
}
