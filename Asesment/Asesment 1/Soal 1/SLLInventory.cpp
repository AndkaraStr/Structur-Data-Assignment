#include "SLLInventory.h"
#include <iostream>
using namespace std;

//fungsi untuk cek apakah list kosong atau tidak
bool isEmpty(list L) {
    if(L.head == Nil){
        return true; 
    } else {
        return false;
    }
}

void createList(list &L) {
    L.head = Nil;
}

address allocate(Product p) {
    address nodeBaru = new node;
    nodeBaru ->info.Nama = nama;
    nodeBaru ->info.SKU = SKU;
    nodeBaru ->info.jumlah = jumlah;
    nodeBaru ->info.hargasatuan = harga;
    nodeBaru ->info.diskonpersen = diskon;
    nodeBaru ->next = Nil;
    return nodeBaru;
}

void deallocate( address &addr ) {
    addr->next = Nil;
    delete addr;
}

void insertFirst( list &L, Product &P ) {
    address node = P;
    node->next = L.head;
    L.head = P;
}

void insertLast( list &L  , Product &P ) {
    if(isEmpty(L)) {
        L.head = P;
    } else {
        address nodebantu = L.head;
        while (nodebantu->next != Nil) {
            nodebantu = nodebantu->next;
        }
        nodebantu->next = P;
    }
}



void insertAfter( list &L , address Q, Product &P){
    if ( Q != Nil)
    {
        address nodeBaru;
        nodeBaru->next = Q->next ;
        Q->next = nodeBaru;
    } else {
        cout <<"Tidak Valid" << endl;
    }
}

void deleteFirst(linkedlist &List){
    address nodeHapus;
    if (isEmpty(List) == false) {
        nodeHapus = List.first;
        List.first = List.first->next;
        nodeHapus->next = Nil;
        dealokasi(nodeHapus);
        cout << "Node pertama berhasil terhapus!" << endl;
    } else {
        cout << "List kosong!" << endl;
    }
}

void deleteLast(linkedlist &List){
    address nodeHapus, nodePrev;
    if(isEmpty(List) == false){
        nodeHapus = List.first;
        if(nodeHapus->next == Nil){
            List.first->next = Nil;
            dealokasi(nodeHapus);
        } else { 
            while(nodeHapus->next != Nil){
                nodePrev = nodeHapus; 
                nodeHapus = nodeHapus->next;
            }
            nodePrev->next = Nil; 
            dealokasi(nodeHapus);
        }
        cout << "Node terakhir berhasil terhapus!" << endl;
    } else {
        cout << "list kosong" << endl;
    }
}

void delAfter(linkedlist &List, address nodeHapus, address nodePrev){
    if(isEmpty(List) == true){
        cout << "List kosong!" << endl;
    } else { //jika list tidak kosong
        if (nodePrev != Nil && nodePrev->next != Nil) { 
            nodeHapus = nodePrev->next;       
            nodePrev->next = nodeHapus->next;  
            nodeHapus->next = Nil;         
            dealokasi(nodeHapus);
            cout << "Node setelah node " << nodePrev->isidata.nama << " berhasil terhapus!" << endl;
        } else {
            cout << "Node sebelumnya (prev) tidak valid!" << endl;
        }
    }
}
