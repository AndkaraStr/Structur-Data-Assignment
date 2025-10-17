#include "Array.h"
#include <iostream>
using namespace std;

int main() {
    Array A, B;

    cout << "Masukkan Matriks 1 (3x3):" << endl;
    InputArray(A);

    cout << "Masukkan Matriks 2 (3x3):" << endl;
    InputArray(B);

    cout << "\nArray A sebelum ditukar:" << endl;
    TampilArray(A);
    cout << "\nArray B sebelum ditukar:" << endl;
    TampilArray(B);

    TukarElement(A, B, 1, 1);

    cout << "\nSetelah menukar elemen [1][1]:" << endl;
    cout << "Array A:" << endl;
    TampilArray(A);
    cout << "\nArray B:" << endl;
    TampilArray(B);

    int x = 5, y = 10;
    int *p1 = &x;
    int *p2 = &y;

    cout << "\nSebelum tukar pointer: x = " << x << ", y = " << y << endl;
    TukarPointer(p1, p2);
    cout << "Setelah tukar pointer: x = " << x << ", y = " << y << endl;

    return 0;
}
