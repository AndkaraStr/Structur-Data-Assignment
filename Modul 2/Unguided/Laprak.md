# <h1 align="center">Laporan Praktikum Modul Pengenalan Bahasa C++ (2)</h1>
<p align="center">Andika Arya Saputra</p>

## Dasar Teori

Menggunakan dasar function, referance, pointer, array untuk membuat kode ini

## Unguided 

### 1. [Soal]

#include <iostream>
using namespace std;

const int N = 3;

void penjumlahan(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] + B[i][j]; 
        }   
    }  
}
void pengurangan(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void perkalian (int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
           C[i][j] = 0;
           for (int k = 0; k < N; k++)
           {
             C[i][j] += A[i][k] * B[k][j];
           }
           
        }
        
    }
    
}

void tampil(int C[N][N]) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
        
    }
    
}
int main() {
    
    int matrik1[N][N], matrik2[N][N], hasil[N][N];

    cout<< "Masukan Matrik 1:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrik1[i][j];
        }
        
    }
    cout << "Masukan Matrik 2:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrik2[i][j];
        }
        
    }
    

cout << "Hasil Penjumlahan :\n";
penjumlahan(matrik1,matrik2,hasil);
tampil(hasil);
cout << "Hasil Pengurangan :\n";
pengurangan(matrik1,matrik2,hasil);
tampil(hasil);
cout << "Hasil Perkalian :\n";
perkalian(matrik1,matrik2,hasil);
tampil(hasil);

return 0;
}

#### Output:
<img width="973" height="493" alt="Screenshot 2025-10-08 223912" src="https://github.com/user-attachments/assets/36c1c46e-5999-4221-add9-332bebe2196e" />

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Menggunakan alat bantu array 2 dimensi (baris)(kolom), sebagai pondasi menyimpan nilai matriks.

### 2. [Soal]
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

#### Output:
<img width="845" height="213" alt="Screenshot 2025-10-08 224241" src="https://github.com/user-attachments/assets/50d75dea-e80c-4915-b148-03cef89c12a8" />


Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Menggunakan pointer dan references untuk menukar nilai yang sudah terdeklarasi.

### 3. [Soal]
#include <iostream>

using namespace std;

int Arry[10] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};

// Fungsi MIN
void minimum(int arr[], int n) {
    int hasilmin = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < hasilmin) {
            hasilmin = arr[i];
        }
    }
    cout << "\nNilai Minimum : " << hasilmin << endl;
}

// Fungsi MAX
void maksimum(int arr[], int n) {
    int hasilmax = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > hasilmax) {
            hasilmax = arr[i];
        }
    }
    cout << "\nNilai Maks : " << hasilmax << endl;
}

// Rata-rataa
void rata2(int arr[], int n) {
    int jmlh = 0;
    for (int i = 0; i < n; i++) {
        jmlh += arr[i];
    }
    double avg = (double)jmlh / n;
    cout << "\nRata-rata: " << avg << endl;
}

void tampil(int arr[], int n) {
    cout << "\nIsi array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int pilih;
    do {
        cout << "\n-- Menu Program Array --\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. cari nilai maksimum\n";
        cout << "3. cari nilai minimum\n";
        cout << "4. Hitung nilai rata - rata\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu:";
        cin >> pilih;

        switch (pilih) {
            case 1:
                tampil(Arry, 10);
                break;
            case 2:
                maksimum(Arry, 10);
                break;
            case 3:
               minimum(Arry, 10);
                break;
            case 4:
                rata2(Arry, 10);
                break;
            case 0:
                cout << "Thanks!..;)\n";
                break;
            default:
                cout << "\n!!!!! ZONK !!!!!\n";
        }
    } while (pilih != 0);

    return 0;
}

#### Output:
<img width="1492" height="958" alt="Screenshot 2025-10-08 224600" src="https://github.com/user-attachments/assets/4ec6ccf5-3afa-4bf5-a5f9-bc7b9efb4e3e" />

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Menggunakan Switch Case unutk memilih menu dan loop untuk kembali lagi ke tampilan menu

## Referensi
https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html
https://www.petanikode.com/cpp-array/
GPT
https://www.w3schools.com/cpp/cpp_functions.asp
