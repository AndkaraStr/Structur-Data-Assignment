#include <iostream>
using namespace std;

int main() {
    double a, b, hasil;

    cout << "Masukan Angka ";
    cin >> a;
    cout << "Masukan Angka ";
    cin >> b;
    // Penjumlahan
    hasil = a+b;
    cout << a << " + " << b << " = " << hasil << endl;

    //pengurangan
    hasil = a-b;
    cout << a << " - " << b << " = " << hasil << endl;

    //perkalian
    hasil = a*b;
    cout << a << " X " << b << " = " << hasil << endl;

    //Pembagian
    hasil = a / b;
    if (a >= b) {
    cout << a << " : " << b << " = " << hasil << endl;
    } else
    {
        cout << "Angka ke 2 lebih dari angka pertama" << endl;
    }
    
    return 0;
}