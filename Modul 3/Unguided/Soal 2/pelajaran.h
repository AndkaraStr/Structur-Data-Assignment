// Soal Pelajaran No.2

#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>

struct Pelajaran {
    std::string namaMapel; 
    std::string kodeMapel;  
};

// Fungsi untuk membuat objek plejaran
Pelajaran create_pelajaran(std::string namapel, std::string kodepel);

void tampil_pelajaran(const Pelajaran& pel);

#endif 