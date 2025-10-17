#include "mahasiswa.h"
#include <iostream>
using namespace std;  // Tambahkan untuk kemudahan, opsional

void inputMahasiswa(Mahasiswa& m) {
    cout << "Masukkan nama: ";  // Gunakan cout dari std
    cin >> m.nama;
    cout << "Masukkan NIM: ";
    cin >> m.nim;
    cout << "Masukkan nilai UTS: ";
    cin >> m.uts;
    cout << "Masukkan nilai UAS: ";
    cin >> m.uas;
    cout << "Masukkan nilai Tugas: ";
    cin >> m.tugas;
}

float hitungNilaiAkhir(const Mahasiswa& m) {
    return 0.3 * m.uts + 0.4 * m.uas + 0.3 * m.tugas;
}