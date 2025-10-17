#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

struct Array
{
    int data[3][3];
};

// Menampilkan isi array 2D
void TampilArray(const Array &arr);

// Input nilai array 2D
void InputArray(Array &arr);

// Menukar isi dua array 2D pada posisi tertentu
void TukarElement(Array &arr1, Array &arr2, int baris, int kolom);

// Menukar isi variabel yang ditunjuk oleh dua pointer
void TukarPointer(int *p1, int *p2);

#endif
