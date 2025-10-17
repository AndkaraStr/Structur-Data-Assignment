// Soal Pelajaran No.2

#include "pelajaran.h"
#include <iostream>

Pelajaran create_pelajaran(std::string namapel, std::string kodepel) {
    Pelajaran p;
    p.namaMapel = namapel;
    p.kodeMapel = kodepel;  
    return p;
}

void tampil_pelajaran(const Pelajaran& pel) {
    std::cout << "Nama Mata Pelajaran: " << pel.namaMapel << std::endl;
    std::cout << "Kode Mata Pelajaran: " << pel.kodeMapel << std::endl;
}