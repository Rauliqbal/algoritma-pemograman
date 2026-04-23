#include <iostream>

using namespace std;

int main()
{
    int A,B,C;

    cout << "Masukkan nilai A : ";
    cin >> A;

    cout << "Masukkan nilai B : ";
    cin >> B;

    cout << "Masukkan nilai C : ";
    cin >> C;

    if(A < B) {
        if(B < C) {
            cout << "\nurutan nilai terkecil: " << A << " " << B << " " << C << " ";
        } else {
            if(A < C) {
                cout << "\nurutan nilai terkecil: " << A << " " << C << " " << B << " ";
            } else {
                cout << "\nurutan nilai terkecil: " << C << " " << A << " " << B << " ";
            }
        }
    } else {
        if(A < C) {
            cout << "\nurutan nilai terkecil: " << B << " " << A << " " << C << " ";
        } else {
            if(B < C) {
                cout << "\nurutan nilai terkecil: " << B << " " << C << " " << A << " ";
            } else {
                cout << "\nurutan nilai terkecil: " << C << " " << B << " " << A << " ";
            }
        }
    }

    return 0;
}
