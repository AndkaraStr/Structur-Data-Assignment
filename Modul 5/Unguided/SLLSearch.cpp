#include "SLLSearch.h"
#include <iostream>
using namespace std;

bool isEmpty (List L){
    if (L.first ==Nil)
    {
      return true;
    } else {
        return false;
    }
    
}

address alokasi (infotype x) {
    address p = new ElmList;
    p->next = Nil;
    p->info = x;
    return p;
};

void CreateList(List &L) {
    L.first = Nil;
};

void insertFirst(List &L, address p) {
    p->next = L.first;
    L.first = p;
};

void display(List &L) {
    address p = L.first;
    while (p != Nil) {
            cout << p->info << "|";
            p = p->next;
        }
};

address findElm(List L, infotype x) { 
    if (L.first == Nil) {
        cout << "List kosong!" << endl;
        return Nil;
    } else {
        address p = L.first;
        int posisi = 0;
        bool found = false;

        while (p != Nil) {
            posisi++;
            if (p->info == x) {
                cout << "Data " << x << " ditemukan pada posisi ke-" << posisi << "!" << endl;
                cout << "Info Elemen : " << p->info << endl;
                found = true;
                return p; 
            }
            p = p->next;
        }

        if (!found) {
            cout << "Node dengan data " << x << " tidak ditemukan!" << endl;
        }

        cout << endl;
        return Nil;
    }
};

int totalinfo(List L) {
    int total = 0;
    address p = L.first;
    while (p!= Nil)
    {
        total += p->info;
        p = p->next;
    }
    cout << "Total info dari ke lima elemen : " << total << endl;
    return total;
    
}
