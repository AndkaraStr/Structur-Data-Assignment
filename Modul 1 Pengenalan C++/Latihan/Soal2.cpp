#include <iostream>
using namespace std;

char satuan[20][20] = {
    "nol","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan",
    "sepuluh","sebelas","dua belas","tiga belas","empat belas","lima belas",
    "enam belas","tujuh belas","delapan belas","sembilan belas"
};

char puluhan[10][20] = {
    "","", "dua puluh","tiga puluh","empat puluh","lima puluh",
    "enam puluh","tujuh puluh","delapan puluh","sembilan puluh"
};

int main() {
    int n;
    cout << "Masukkan angka (0-100): ";
    cin >> n;

    if (n < 20) {
        cout << n << " : " << satuan[n] << endl;
    } else if (n < 100) {
        int p = n / 10, s = n % 10;
        cout << n << " : " << puluhan[p];
        if (s != 0) cout << " " << satuan[s];
        cout << endl;
    } else if (n == 100) {
        cout << "100 : seratus" << endl;
    }
}