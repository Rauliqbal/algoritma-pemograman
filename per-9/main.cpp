#include <iostream>

using namespace std;
int main() {
    char KodePulau;
    int KodeKota;

    cout << "Masukan Kode Pulau : ";
    cin >> KodePulau;

    switch (KodePulau) {

    case 'J':
        cout << "Masukan Kode Pulau Jawa :";
        cin >> KodeKota;
        switch (KodeKota) {
        case 1:
            cout << "\n Jakarta";
            break;
        case 2:
            cout << "\n Surabaya";
            break;
        case 3:
            cout << "\n Bekasi";
            break;
        case 4:
            cout << "\n Bandung";
            break;
        default:
            cout << "Kode Kota salah";
        }
        break;

    case 'S':
        cout << "Masukan Kode Pulau Sumatra ";
        cin >> KodeKota;
        switch (KodeKota) {
        case 1:
            cout << "\n Medan";
            break;
        case 2:
            cout << "\n Palembang";
            break;
        case 3:
            cout << "\n Padang";
            break;
        case 4:
            cout << "\n Bengkulu";
            break;
        default:
            cout << "Kode Kota di Sumatra Salah";
        }
        break;

    case 'K':
        cout << "Masukan Kode Pulau Kalimantan ";
        cin >> KodeKota;
        switch (KodeKota) {
        case 1:
            cout << "\n Banjarmasin";
            break;
        case 2:
            cout << "\n Pontianak";
            break;
        case 3:
            cout << "\n Lolong";
            break;
        default:
            cout << "Kode Kota di Kalimantan Salah";
        }
        break;
    default:
        cout << "Kode Kota di Pulau Salah";
    }
    cout << endl;

    return 0;
}
