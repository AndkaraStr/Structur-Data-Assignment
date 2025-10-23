#include "Singlylist.h"
#include <iostream>

using namespace std;

int main() {
    List L;
    addr p1, p2, p3, p4, p5 = Nil;
    Create_List(L);

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

    DeleteFirst(L, p1);
    dealokasi(p1);

    DeleteLast(L, p5);
    dealokasi(p5);

    DeleteAfter(L, p3);
    dealokasi(p3);

    printinfo(L);
    cout << "Jumlah Node : " << nBList(L) << endl;

    DeleteList(L);
    cout << "List Berhasil dihapus! " << nBList(L) << endl;

    return 0;
}
