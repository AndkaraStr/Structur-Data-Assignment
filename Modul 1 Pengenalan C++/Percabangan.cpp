#include <iostream>
using namespace std;

int main () {
    int angka1;
    int angka2;
    cin >> angka1;
    cin >> angka2;
    if (angka1 > angka2) {
        cout << "Angka " << angka1  << " Lebih Besar dari Angka " << angka2 << endl;
    }    else if (angka1 < angka2) {
            cout << "Angka " << angka1 << " Lebih Kecil dari Angka " << angka2 << endl;
        } else {
            cout << "Kedua Angka Sama Besar" << endl;
        }

        return 0;
    }
