#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    std::string namapel = "Struktur Data";
    std::string kodepel = "STD";

    Pelajaran pel = create_pelajaran(namapel, kodepel);  
    tampil_pelajaran(pel);  
    return 0;
}