#ifndef SLLINVENTORY_H
#define SLLINVENTORY_H
#define Nil NULL
#include <iostream>
using namespace std ;

struct Product
{
    Nama : string;
    SKU : string;
    jumlah : int;
    hargasatuan : float;
    diskonpersen : float;
};
typedef struct node *address;
struct node
{
    Product  info;
    address next;

};

struct list {
    address head;
};

bool isEmpty( list L ) ;
void createList( list &L );
address allocate( Product p );
void deallocate( address addr );
void insertFirst( list &L, in P : Product );
void insertLast( list &L  , in P : Product )
void insertAfter( list &L , address q, in P : Product ) //Q adalah node setelah mana insert
void deleteFirst( list &L  , Product &p );
void deleteLast( list &L , Product &p );
void deleteAfter( list &L , List, in Q : address, out P : Product );
void updateAtPosition( list L, int posisi );
void viewlist (list L);
void searchByFinalPriceRange(list L, float minPrice, float maxPrice);

#endif