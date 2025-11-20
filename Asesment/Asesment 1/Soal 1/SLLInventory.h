
#include <iostream>
using namespace std;

struct Product {
    string Nama;
    string SKU;
    int Jumlah;
    float HargaSatuan;
    float DiskonPersen; 
};

struct NodeSLL;
typedef NodeSLL* addressSLL;
struct NodeSLL {
    Product info;
    addressSLL next;
};

struct ListSLL {
    addressSLL head;
};

// Deklarasi
bool isEmpty(const ListSLL &L);
void createList(ListSLL &L);
addressSLL allocate(const Product &P);
void deallocate(addressSLL addr);

void insertFirst(ListSLL &L, const Product &P);
void insertLast(ListSLL &L, const Product &P);
void insertAfter(ListSLL &L, addressSLL Q, const Product &P);

void deleteFirst(ListSLL &L, Product &P);
void deleteLast(ListSLL &L, Product &P);
void deleteAfter(ListSLL &L, addressSLL Q, Product &P);

void updateAtPosition(ListSLL &L, int posisi, const Product &newP);
void viewList(const ListSLL &L);
void searchByFinalPriceRange(const ListSLL &L, float minPrice, float maxPrice);

float HargaAkhir(const Product &p);
void MaxHargaAkhir(const ListSLL &L);