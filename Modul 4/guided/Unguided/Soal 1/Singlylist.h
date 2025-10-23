#ifndef STYLIST_H
#define STYLIST_H
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

void Create_List(List &L);
addr alokasi(infotype x);
void dealokasi(addr &p);
void printinfo(List &L);
void InsertFirst(List &L, addr p);

#endif