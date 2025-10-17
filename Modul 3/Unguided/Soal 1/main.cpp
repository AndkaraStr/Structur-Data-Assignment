#include <iostream>
#include "mahasiswa.h"
using namespace std;  

int main() {
    const int MAX = 10;  
    Mahasiswa daftarMahasiswa[MAX];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
    cin >> jumlah;  

    if (jumlah > MAX) jumlah = MAX;  

    for (int i = 0; i < jumlah; i++) {
        cout << "Data mahasiswa ke-" << i + 1 << endl;
        inputMahasiswa(daftarMahasiswa[i]);  
        float nilaiAkhir = hitungNilaiAkhir(daftarMahasiswa[i]);
        cout << "Nilai Akhir: " << nilaiAkhir << endl;
    }

    return 0;
}