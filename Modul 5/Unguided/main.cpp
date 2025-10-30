#include "SLLSearch.h"
#include <iostream>
using namespace std;


int main()
{
List L;
address P1, P2, P3, P4, P5 = Nil;
CreateList(L);
P1 = alokasi(2);
insertFirst(L,P1);
P2 = alokasi(0);
insertFirst(L,P2);
P3 = alokasi(8);
insertFirst(L,P3);
P4 = alokasi(12);
insertFirst(L,P4);
P5 = alokasi(9);
insertFirst(L,P5);
display(L);

int x;
cout << "\nMasukan Elemen yang Di Cari :";
cin >> x;
address hasil = findElm(L,x);
if (hasil != Nil) {
    cout << "Alamat Node " << hasil << endl;
};
totalinfo(L);
}