
#include "SLLInventory.h"

bool isEmpty(const ListSLL &L) {
    return L.head == nullptr;
}
void createList(ListSLL &L) {
    L.head = nullptr;
}
addressSLL allocate(const Product &P) {
    addressSLL p = new NodeSLL;
    p->info = P;
    p->next = nullptr;
    return p;
}
void deallocate(addressSLL addr) {
    delete addr;
}

void insertFirst(ListSLL &L, const Product &P) {
    addressSLL p = allocate(P);
    p->next = L.head;
    L.head = p;
}
void insertLast(ListSLL &L, const Product &P) {
    addressSLL p = allocate(P);
    if (isEmpty(L)) {
        L.head = p;
    } else {
        addressSLL q = L.head;
        while (q->next) q = q->next;
        q->next = p;
    }
}
void insertAfter(ListSLL &L, addressSLL Q, const Product &P) {
    if (Q == nullptr) return;
    addressSLL p = allocate(P);
    p->next = Q->next;
    Q->next = p;
}

void deleteFirst(ListSLL &L, Product &P) {
    if (isEmpty(L)) return;
    addressSLL p = L.head;
    P = p->info;
    L.head = p->next;
    deallocate(p);
}
void deleteLast(ListSLL &L, Product &P) {
    if (isEmpty(L)) return;
    if (L.head->next == nullptr) {
        P = L.head->info;
        deallocate(L.head);
        L.head = nullptr;
    } else {
        addressSLL q = L.head;
        addressSLL prev = nullptr;
        while (q->next) {
            prev = q;
            q = q->next;
        }
        P = q->info;
        prev->next = nullptr;
        deallocate(q);
    }
}
void deleteAfter(ListSLL &L, addressSLL Q, Product &P) {
    if (Q == nullptr || Q->next == nullptr) return;
    addressSLL p = Q->next;
    P = p->info;
    Q->next = p->next;
    deallocate(p);
}

float HargaAkhir(const Product &p) {
    return p.HargaSatuan * (1.0f - p.DiskonPersen / 100.0f);
}

void updateAtPosition(ListSLL &L, int posisi, const Product &newP) {
    if (posisi <= 0) return;
    addressSLL q = L.head;
    int idx = 1;
    while (q && idx < posisi) {
        q = q->next;
        idx++;
    }
    if (q) {
        q->info = newP;
    }
}

void viewList(const ListSLL &L) {
    addressSLL q = L.head;
    int idx = 1;
    if (isEmpty(L)) {
        cout << "List kosong\n";
        return;
    }
    cout << "Daftar Produk:\n";
    while (q) {
        cout << idx << ". Nama: " << q->info.Nama
             << " | SKU: " << q->info.SKU
             << " | Jumlah: " << q->info.Jumlah
             << " | HargaSatuan: " << q->info.HargaSatuan
             << " | Diskon%: " << q->info.DiskonPersen
             << " | HargaAkhir: " << HargaAkhir(q->info)
             << "\n";
        q = q->next; idx++;
    }
}

void searchByFinalPriceRange(const ListSLL &L, float minPrice, float maxPrice) {
    addressSLL q = L.head;
    int idx = 1;
    bool found = false;
    cout << "Hasil pencarian HargaAkhir dalam [" << minPrice << ", " << maxPrice << "]\n";
    while (q) {
        float ha = HargaAkhir(q->info);
        if (ha >= minPrice && ha <= maxPrice) {
            cout << "Posisi " << idx << ": " << q->info.Nama
                 << " | SKU: " << q->info.SKU
                 << " | HargaAkhir: " << ha << "\n";
            found = true;
        }
        q = q->next; idx++;
    }
    if (!found) cout << "Tidak ada produk dalam rentang tersebut.\n";
}

void MaxHargaAkhir(const ListSLL &L) {
    if (isEmpty(L)) {
        cout << "List kosong\n";
        return;
    }
    float maxH = -1e30f;
    addressSLL q = L.head;
    while (q) {
        float ha = HargaAkhir(q->info);
        if (ha > maxH) maxH = ha;
        q = q->next;
    }
    q = L.head; int idx = 1;
    cout << "Produk dengan HargaAkhir maksimum (" << maxH << "):\n";
    while (q) {
        if (HargaAkhir(q->info) == maxH) {
            cout << "Posisi " << idx << ": " << q->info.Nama
                 << " | SKU: " << q->info.SKU
                 << " | HargaAkhir: " << HargaAkhir(q->info) << "\n";
        }
        q = q->next; idx++;
    }
}