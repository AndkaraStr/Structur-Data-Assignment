#include "DLL.h"
#include <iostream>
using namespace std;

void CreateList(List &L){
L.first = nullptr;
L.last = nullptr;
}


address alokasi(const infotype &x){
address P = new ElmList;
P->info = x;
P->next = nullptr;
P->prev = nullptr;
return P;
}


void dealokasi(address &P){
if(P!=nullptr){
delete P;
P = nullptr;
}
}


void printInfo(const List &L){
if(L.first == nullptr){
cout << "List kosong\n";
return;
}
cout << "Daftar Kendaraan:\n";
address P = L.first;
int idx = 1;
while(P!=nullptr){
cout << idx++ << ". Nopol: " << P->info.nopol
<< " | Warna: " << P->info.warna
<< " | Tahun: " << P->info.thnBuat << "\n";
P = P->next;
}
}


void insertLast(List &L, address P){
if(L.first == nullptr){
    L.first = P;
L.last = P;
} else {
P->prev = L.last;
L.last->next = P;
L.last = P;
}
}


address findElm(const List &L, const string &nopol){
address P = L.first;
while(P!=nullptr){
if(P->info.nopol == nopol) return P;
P = P->next;
}
return nullptr;
}


void deleteFirst(List &L, address &P){
if(L.first == nullptr){
P = nullptr; return;
}
P = L.first;
if(L.first == L.last){ 
L.first = nullptr;
L.last = nullptr;
} else {
L.first = P->next;
L.first->prev = nullptr;
P->next = nullptr;
}
}


void deleteLast(List &L, address &P){
if(L.last == nullptr){
P = nullptr; return;
}
P = L.last;
if(L.first == L.last){
L.first = nullptr;
L.last = nullptr;
} else {
L.last = P->prev;
L.last->next = nullptr;
P->prev = nullptr;
}
}


void deleteAfter(address Prec, address &P){
if(Prec==nullptr || Prec->next==nullptr){
P = nullptr; return;
}
P = Prec->next;
Prec->next = P->next;
if(P->next != nullptr) P->next->prev = Prec;
else {

}
P->next = nullptr;
P->prev = nullptr;
}