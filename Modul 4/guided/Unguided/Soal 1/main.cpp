#include "Singlylist.h"
#include <iostream>

using namespace std;

int main() {
    List L;
    addr p1, p2, p3, p4, p5 = Nil;

    p1 = alokasi(2);
    InsertFirst(L, p1);

    p2 = alokasi(0);
    InsertFirst(L, p2);

    p3 = alokasi(8);
    InsertFirst(L, p3);

    p4 = alokasi(12);
    InsertFirst(L, p4);

    p5 = alokasi(9);
    InsertFirst(L, p5);

    printinfo(L);
    return 0;

}
