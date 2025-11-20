
#include "SLLInventory.h"

int main() {
    ListSLL L;
    createList(L);

   
    Product p1 = {"Pulpen", "A001", 20, 2500.0f, 0.0f};
    Product p2 = {"Buku Tulis", "A002", 15, 5000.0f, 10.0f};
    Product p3 = {"Penghapus", "A003", 30, 1500.0f, 0.0f};
    insertLast(L, p1);
    insertLast(L, p2);
    insertLast(L, p3);

    viewList(L);
    cout << "\n";

    
    Product temp;
    deleteFirst(L, temp);
    viewList(L);
    cout << "\n";

   Product newP = {"Stabilo", "A010", 40, 9000.0f, 5.0f};
    updateAtPosition(L, 2, newP);
    viewList(L);
    cout << "\n";

    searchByFinalPriceRange(L, 2000.0f, 7000.0f);
    cout << "\n";

    MaxHargaAkhir(L);

    return 0;
}