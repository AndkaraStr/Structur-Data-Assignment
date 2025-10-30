#ifndef SLLSEARCH_H
#define SLLSEARCH_H
#define Nil NULL

#include <iostream>
using namespace std;

typedef int infotype;
typedef struct ElmList *address;
struct ElmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

bool isEmpty(List L);
void CreateList(List &L);
address alokasi(infotype x);
void insertFirst(List &L, address p);
void display(List &L);
address findElm(List L, infotype x);
int totalinfo(List L);
#endif