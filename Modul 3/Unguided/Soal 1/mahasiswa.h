#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <string>  

struct Mahasiswa {
    std::string nama;   
    std::string nim;    
    float uts;          
    float uas;          
    float tugas;        
};

void inputMahasiswa(Mahasiswa& m);
float hitungNilaiAkhir(const Mahasiswa& m);

#endif  