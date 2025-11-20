// DLLPlaylist.cpp
#include "DLLPlaylist.h"

bool isEmpty(const ListDLL &L) {
    return L.head == nullptr && L.tail == nullptr;
}
void createList(ListDLL &L) {
    L.head = nullptr;
    L.tail = nullptr;
}
addressDLL allocate(const Song &S) {
    addressDLL p = new NodeDLL;
    p->info = S;
    p->prev = p->next = nullptr;
    return p;
}
void deallocate(addressDLL P) {
    delete P;
}

void insertFirst(ListDLL &L, const Song &S) {
    addressDLL p = allocate(S);
    if (isEmpty(L)) {
        L.head = L.tail = p;
    } else {
        p->next = L.head;
        L.head->prev = p;
        L.head = p;
    }
}
void insertLast(ListDLL &L, const Song &S) {
    addressDLL p = allocate(S);
    if (isEmpty(L)) {
        L.head = L.tail = p;
    } else {
        p->prev = L.tail;
        L.tail->next = p;
        L.tail = p;
    }
}
void insertAfter(ListDLL &L, addressDLL Q, const Song &S) {
    if (Q == nullptr) return;
    if (Q == L.tail) {
        insertLast(L, S);
    } else {
        addressDLL p = allocate(S);
        p->next = Q->next;
        p->prev = Q;
        Q->next->prev = p;
        Q->next = p;
    }
}
void insertBefore(ListDLL &L, addressDLL Q, const Song &S) {
    if (Q == nullptr) return;
    if (Q == L.head) {
        insertFirst(L, S);
    } else {
        addressDLL p = allocate(S);
        p->prev = Q->prev;
        p->next = Q;
        Q->prev->next = p;
        Q->prev = p;
    }
}

void deleteFirst(ListDLL &L, Song &S) {
    if (isEmpty(L)) return;
    addressDLL p = L.head;
    S = p->info;
    if (L.head == L.tail) {
        L.head = L.tail = nullptr;
    } else {
        L.head = p->next;
        L.head->prev = nullptr;
    }
    deallocate(p);
}
void deleteLast(ListDLL &L, Song &S) {
    if (isEmpty(L)) return;
    addressDLL p = L.tail;
    S = p->info;
    if (L.head == L.tail) {
        L.head = L.tail = nullptr;
    } else {
        L.tail = p->prev;
        L.tail->next = nullptr;
    }
    deallocate(p);
}
void deleteAfter(ListDLL &L, addressDLL Q, Song &S) {
    if (Q == nullptr || Q->next == nullptr) return;
    addressDLL p = Q->next;
    S = p->info;
    Q->next = p->next;
    if (p->next) p->next->prev = Q;
    if (p == L.tail) L.tail = Q;
    deallocate(p);
}
void deleteBefore(ListDLL &L, addressDLL Q, Song &S) {
    if (Q == nullptr || Q->prev == nullptr) return;
    addressDLL p = Q->prev;
    S = p->info;
    if (p == L.head) {
        L.head = Q;
        Q->prev = nullptr;
    } else {
        p->prev->next = Q;
        Q->prev = p->prev;
    }
    deallocate(p);
}

float PopularityScore(const Song &s) {
    return 0.8f * s.PlayCount + 20.0f * s.Rating;
}

addressDLL nodeAtPosition(const ListDLL &L, int posisi) {
    if (posisi <= 0) return nullptr;
    addressDLL q = L.head;
    int idx = 1;
    while (q && idx < posisi) {
        q = q->next; idx++;
    }
    return q;
}

void updateAtPosition(ListDLL &L, int posisi, const Song &newS) {
    addressDLL q = nodeAtPosition(L, posisi);
    if (q) q->info = newS;
}
void updateBefore(ListDLL &L, addressDLL Q, const Song &newS) {
    if (Q == nullptr || Q->prev == nullptr) return;
    Q->prev->info = newS;
}

void viewList(const ListDLL &L) {
    addressDLL q = L.head;
    int idx = 1;
    if (isEmpty(L)) {
        cout << "Playlist kosong\n";
        return;
    }
    cout << "Daftar Lagu:\n";
    while (q) {
        cout << idx << ". Title: " << q->info.Title
             << " | Artist: " << q->info.Artist
             << " | Dur (s): " << q->info.DurationSec
             << " | PlayCount: " << q->info.PlayCount
             << " | Rating: " << q->info.Rating
             << " | Popularity: " << PopularityScore(q->info)
             << "\n";
        q = q->next; idx++;
    }
}

void searchByPopularityRange(const ListDLL &L, float minScore, float maxScore) {
    addressDLL q = L.head;
    int idx = 1;
    bool found = false;
    cout << "Searching PopularityScore dalam [" << minScore << ", " << maxScore << "]\n";
    while (q) {
        float ps = PopularityScore(q->info);
        if (ps >= minScore && ps <= maxScore) {
            cout << "Posisi " << idx << ": " << q->info.Title
                 << " | Artist: " << q->info.Artist
                 << " | Popularity: " << ps << "\n";
            found = true;
        }
        q = q->next; idx++;
    }
    if (!found) cout << "Tidak ada lagu dalam rentang tersebut.\n";
}