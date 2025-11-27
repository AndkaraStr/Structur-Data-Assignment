#ifndef DLL_H
#define DLL_H

#include <iostream>
using namespace std;


using namespace std;


typedef struct ElmList* address;


struct infotype {
string nopol;
string warna;
int thnBuat;
};


struct ElmList {
infotype info;
address prev;
address next;
};


struct List {
address first;
address last;
};


// ADT prototypes
void CreateList(List &L);
address alokasi(const infotype &x);
void dealokasi(address &P);
void printInfo(const List &L);
void insertLast(List &L, address P);
address findElm(const List &L, const string &nopol);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);


#endif 