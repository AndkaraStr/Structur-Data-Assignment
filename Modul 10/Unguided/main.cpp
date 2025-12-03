#include "BTree.h"
#include <iostream>

using namespace std;

int main(){
address root = Nil;

insertNode(root,1);
insertNode(root,2);
insertNode(root,6);
insertNode(root,4);
insertNode(root,5);
insertNode(root,3);
insertNode(root,6); 
insertNode(root,7);

cout<<"InOrder: "; printInOrder(root); cout<<"\n";
cout<<"PreOrder: "; printPreOrder(root); cout<<"\n";
cout<<"PostOrder: "; printPostOrder(root); cout<<"\n";

cout<<"\nKedalaman : "<<hitungKedalaman(root)<<endl;
cout<<"Jumlah Node : "<<hitungJumlahNode(root)<<endl;
cout<<"Total Info : "<<hitungTotalInfo(root)<<endl;

int key = 5;
address p = findNode(root, key);
if(p!=Nil) cout<<"Nilai "<<key<<" ditemukan di node."<<endl;
else cout<<"Nilai "<<key<<" tidak ditemukan."<<endl;

return 0;
}