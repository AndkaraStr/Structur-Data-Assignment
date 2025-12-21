#include "Mll.h"

/* ===== CREATE ===== */

void CreateList(listinduk &L) {
    L.first = Nil;
    L.last = Nil;
}

void CreateListAnak(listanak &L) {
    L.first = Nil;
    L.last = Nil;
}

/* ===== EMPTY ===== */

boolean ListEmpty(listinduk L) {
    return (L.first == Nil);
}

boolean ListEmptyAnak(listanak L) {
    return (L.first == Nil);
}

/* ===== ALOKASI ===== */

address alokasi(infotypeinduk x) {
    address P = new elemen_list_induk;
    P->info = x;
    CreateListAnak(P->lanak);
    P->next = Nil;
    P->prev = Nil;
    return P;
}

address_anak alokasiAnak(infotypeanak x) {
    address_anak P = new elemen_list_anak;
    P->info = x;
    P->next = Nil;
    P->prev = Nil;
    return P;
}

/* ===== INSERT INDUK ===== */

void insertFirst(listinduk &L, address P) {
    if (ListEmpty(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertLast(listinduk &L, address P) {
    if (ListEmpty(L)) {
        insertFirst(L, P);
    } else {
        L.last->next = P;
        P->prev = L.last;
        L.last = P;
    }
}

/* ===== INSERT ANAK ===== */

void insertLastAnak(listanak &L, address_anak P) {
    if (ListEmptyAnak(L)) {
        L.first = P;
        L.last = P;
    } else {
        L.last->next = P;
        P->prev = L.last;
        L.last = P;
    }
}

/* ===== PRINT ===== */

void printInfo(listinduk L) {
    address P = L.first;
    while (P != Nil) {
        cout << "Induk : " << P->info << endl;
        address_anak Q = P->lanak.first;
        while (Q != Nil) {
            cout << "  Anak : " << Q->info << endl;
            Q = Q->next;
        }
        P = P->next;
    }
}
