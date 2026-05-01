#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string A;
    int budget;

    cout << "Silahkan masukkan budget anda: ";
    cin >> budget;

    cout << "silahkan pilih : " << endl;
    cout << "a.smartphone" << endl;
    cout << "b.laptop" << endl;

    cout << "silahkan masukkan pilihan: " << endl;
    cin >> A;

    if(A == "a") {
        if(budget >= 2000000) {
            cout << "anda bisa beli smartphone";
        } else {
            cout << "duit nya belum cukup" << endl;
        }
    }

    if(A == "b") {
        if(budget >= 5000000) {
            cout << "anda bisa beli laptop";
        } else {
            cout << "duitnya kurang" << endl;
        }
    }


    return 0;
}
