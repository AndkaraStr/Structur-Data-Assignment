# <h1 align="center">Laporan Praktikum Modul Pengenalan Bahasa C++ (2)</h1>
<p align="center">Andika Arya Saputra</p>

## Dasar Teori

Menggunakan dasar function, referance, pointer, array untuk membuat kode ini

## Unguided 

### 1. [Soal]
<img width="1234" height="1052" alt="mahasiswa" src="https://github.com/user-attachments/assets/88292b0f-ed4a-4501-b535-ef0857c9fc62" />
<img width="1294" height="1166" alt="main" src="https://github.com/user-attachments/assets/078c0125-5e5c-419c-96c0-61efe107d385" />
<img width="972" height="938" alt="mahasiswa h" src="https://github.com/user-attachments/assets/f7766194-480b-4545-9bb9-562946ef8700" />


#### Output:
<img width="1643" height="891" alt="Screenshot 2025-10-17 102901" src="https://github.com/user-attachments/assets/a7eddd5d-6e10-4710-9471-6649730a1666" />


Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Menggunakan alat bantu array 2 dimensi (baris)(kolom), sebagai pondasi menyimpan nilai matriks.

### 2. [Soal]

<img width="1402" height="900" alt="Pelajaran cpp" src="https://github.com/user-attachments/assets/2a06ea4e-598b-4ec5-b5ba-96275d360474" />
<img width="1188" height="748" alt="main" src="https://github.com/user-attachments/assets/7b237a8e-3b4d-47e1-b73e-38a2eb3a769d" />
<img width="1372" height="976" alt="Pelajaran h" src="https://github.com/user-attachments/assets/fcfc5a0f-f494-449e-bce5-a361ec55cdbf" />


#### Output:

<img width="960" height="266" alt="Screenshot 2025-10-16 223924" src="https://github.com/user-attachments/assets/aea9ccc7-df87-4a5e-a53b-1d52d9013c5a" />


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
