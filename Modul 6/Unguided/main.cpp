#include "DLL.h"
#include <iostream>
using namespace std;

int main(){
List L;
CreateList(L);


int n;
cout << "Masukkan jumlah kendaraan: ";
cin >> n;


for(int i = 1; i <= n; i++){
    infotype x;
    cout << "Data kendaraan ke-" << i << " ";
    cout << "Nopol : "; cin >> x.nopol;
    cout << "Warna : "; cin >> x.warna;
    cout << "Tahun : "; cin >> x.thnBuat;
    insertLast(L, alokasi(x));
}
printInfo(L);

string key;
cout << "Masukkan nopol yang ingin dicari: ";
cin >> key;
address P = findElm(L, key);
if(P) {
cout << "Ditemukan: " << P->info.nopol << " | " << P->info.warna << " | " << P->info.thnBuat << "";
} else {
cout << "Tidak ditemukan";
};

cout << "Masukkan nopol yang ingin dihapus: ";
cin >> key;


address del = findElm(L, key);
if(del != nullptr){
if(del == L.first){
address temp; deleteFirst(L, temp); dealokasi(temp);
} else if(del == L.last){
address temp; deleteLast(L, temp); dealokasi(temp);
} else {
deleteAfter(del->prev, del);
dealokasi(del);
}
cout << "Data berhasil dihapus.\n";
} else {
cout << "Data tidak ditemukan, tidak ada yang dihapus.";
}

cout << "-- Data setelah penghapusan --";
printInfo(L);

return 0;
}