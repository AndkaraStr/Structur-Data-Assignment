#include "Singlylist.h"
#include <iostream>

using namespace std;

void Create_List(List &L) {
    L.first = Nil;
}

addr alokasi(infotype x) {
    addr p = new ElmList;
    p->info = x;
    p->next = Nil;
    return p;
}

void dealokasi(addr &p) {
    delete p;
    p = Nil;
}

void InsertFirst(List &L, addr p) {
    p->next = L.first;
    L.first = p;
}

void printinfo(List &L) {
    addr p = L.first;
    if (p == Nil) {
        cout << "List Kosong" << endl;
    } else {
        while (p != Nil) {
            cout << p->info << "->";
            p = p->next;
        }
        cout << endl; // Agar output rapi dan tidak membuat terminal macet
    }
}

void DeleteFirst(List &L, addr &p) {
    if (L.first != Nil) {
        p = L.first;
        L.first = L.first->next;
        p->next = Nil;
    }
}

void DeleteLast(List &L, addr &p) {
    if (L.first == Nil) {
        p = Nil;
    } else if (L.first->next == Nil) {
        p = L.first;
        L.first = Nil;
    } else {
        addr q = L.first;
        while (q->next->next != Nil) {
            q = q->next;
        }
        p = q->next;
        q->next = Nil;
    }
}

void DeleteAfter(List &L, addr &p) {
    if (L.first != Nil && p != Nil) {
        addr q = L.first;
        while (q != Nil && q->next != p) {
            q = q->next;
        }
        if (q != Nil) {
            q->next = p->next;
            p->next = Nil;
        }
    }
}

int nBList(List L) {
    int count = 0;
    addr node = L.first;
    while (node != Nil) {
        count++;
        node = node->next;
    }
    return count;
}

void DeleteList(List &L) {
    addr p;
    while (L.first != Nil) {
        DeleteFirst(L, p);
        dealokasi(p);
    }
}
