#include "Singlylist.h"
#include <iostream>
using namespace std;

void Create_List(List &L) {
    L.first = nullptr;
}

addr alokasi(infotype x) {
    addr p = new ElmList;
    p->info = x;
    p->next = nullptr;
    return p;
}

void delokasi(addr &p) {
    delete p;
    p = nullptr;
    
}

void InsertFirst(List &L, addr p) {
    p->next = L.first;
    L.first = p;
}

void printinfo(List &L) {
    addr p = L.first;
    if (p == nullptr) {
        cout << "List Kosong" << endl;
    } else {
        while (p != nullptr) {
            cout << p->info << "->";
            p = p->next;
        }
    }

}
