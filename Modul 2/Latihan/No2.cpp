#include <iostream>
using namespace std;

// Fungsi tukar pointer
void tukarPointer(int *x, int *y, int *z) {
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

// Fungsi tukar reference
void tukarRefere(int &x, int &y, int &z) {
    int temp = x;
    x = y;
    y = z;
    z = temp;
}

int main() {
    int a = 10, b = 20, c = 30;

    cout << "Nilai Asli : " << a << ", " << b << ", " << c << endl;

    tukarPointer(&a, &b, &c);
    cout << "Nilai dengan Pointer : " << a << ", " << b << ", " << c << endl;

    tukarRefere(a, b, c);
    cout << "Nilai dengan Reference : " << a << ", " << b << ", " << c << endl;

    return 0;
}
