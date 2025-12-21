#include "Mll.h"

int main() {
    listinduk L;
    CreateList(L);

    address p1 = alokasi(1);
    address p2 = alokasi(2);

    insertLast(L, p1);
    insertLast(L, p2);

    insertLastAnak(p1->lanak, alokasiAnak(101));
    insertLastAnak(p1->lanak, alokasiAnak(102));
    insertLastAnak(p2->lanak, alokasiAnak(201));

    printInfo(L);

    return 0;
}