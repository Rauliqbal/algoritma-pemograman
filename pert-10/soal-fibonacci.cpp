#include <iostream>

using namespace std;

int main() {
  int n = 12;
  int t1 = 0, t2 = 1, nextTerm = 0;
  int count = 0;

  cout << "Bilangan" << endl << endl;
  cout << "Fibonacci : ";

  while (count < n) {
    cout << t1 << " ";

    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;

    count++;
  }

  cout << endl << "---------------" << endl;

  return 0;
}
