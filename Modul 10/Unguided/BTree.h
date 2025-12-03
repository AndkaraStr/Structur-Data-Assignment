#ifndef BTREE_H
#define BTREE_H
#define Nil nullptr

#include <iostream>
using namespace std;

typedef int infotype;


struct Node{
infotype info;
Node *left;
Node *right;
Node(int x): info(x), left(Nil), right(Nil) {}
};


typedef Node* address;


/* fungsi-fungsi ADT */
address alokasi(infotype x);
void deAlokasi(address P);


void insertNode(address &root, infotype x);
address findNode(address root, infotype x);


void printInOrder(address root);
void printPreOrder(address root);
void printPostOrder(address root);


int hitungJumlahNode(address root);
int hitungTotalInfo(address root);
int hitungKedalaman(address root);


#endif