#include "Array.h"
#include <iostream>
using namespace std;

// Input nilai ke dalam array 2D
void InputArray(Array &arr) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr.data[i][j];
        }
    }
}

// Menampilkan isi array 2D
void TampilArray(const Array &arr) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr.data[i][j] << " ";
        }
        cout << endl;
    }
}

// Menukar elemen tertentu antara dua array
void TukarElement(Array &arr1, Array &arr2, int baris, int kolom) {
    int temp = arr1.data[baris][kolom];
    arr1.data[baris][kolom] = arr2.data[baris][kolom];
    arr2.data[baris][kolom] = temp;
}

// Menukar isi dua variabel yang ditunjuk oleh pointer
void TukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
