#ifndef SINGLYLIST_H
#define SINGLYLIST_H
#define Nil NULL

#include <iostream>
using namespace std;

typedef int infotype;
typedef struct ElmList *addr;

struct ElmList {
    infotype info;
    addr next;
};

struct List {
    addr first;
};



// Deklarasi fungsi
void Create_List(List &L);
addr alokasi(infotype x);
void dealokasi(addr &p);
void printinfo(List &L);
void InsertFirst(List &L, addr p);
void DeleteFirst(List &L, addr &p);
void DeleteLast(List &L, addr &p);
void DeleteAfter(List &L, addr &p);
int nBList(List L);
void DeleteList(List &L);

#endif
