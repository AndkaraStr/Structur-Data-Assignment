#include "BTree.h"
#include <iostream>

using namespace std;
address alokasi(infotype x){
address P = new (nothrow) Node(x);
return P;
}


void deAlokasi(address P){
if(P) delete P;
}


void insertNode(address &root, infotype x){
if(root==Nil){
root = alokasi(x);
return;
}
if(x < root->info) insertNode(root->left, x);
else if(x > root->info) insertNode(root->right, x);
else {
}
}


address findNode(address root, infotype x){
if(root==Nil) return Nil;
if(root->info == x) return root;
if(x < root->info) return findNode(root->left, x);
return findNode(root->right, x);
}


void printInOrder(address root){
if(root==Nil) return;
printInOrder(root->left);
cout<<root->info<<" ";
printInOrder(root->right);
}


void printPreOrder(address root){
if(root==Nil) return;
cout<<root->info<<" ";
printPreOrder(root->left);
printPreOrder(root->right);
}


void printPostOrder(address root){
if(root==Nil) return;
printPostOrder(root->left);
printPostOrder(root->right);
cout<<root->info<<" ";
}


int hitungJumlahNode(address root){
if(root==Nil) return 0;
return 1 + hitungJumlahNode(root->left) + hitungJumlahNode(root->right);
}


int hitungTotalInfo(address root){
if(root==Nil) return 0;
return root->info + hitungTotalInfo(root->left) + hitungTotalInfo(root->right);
}


int hitungKedalaman(address root){
if(root==Nil) return 0;
int dl = hitungKedalaman(root->left);
int dr = hitungKedalaman(root->right);
return 1 + (dl>dr ? dl : dr);
}