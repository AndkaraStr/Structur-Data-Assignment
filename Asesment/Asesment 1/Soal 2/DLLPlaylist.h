
#include <iostream>
using namespace std;

struct Song {
    string Title;
    string Artist;
    int DurationSec;
    int PlayCount;
    float Rating; 
};

struct NodeDLL;
typedef NodeDLL* addressDLL;
struct NodeDLL {
    Song info;
    addressDLL prev;
    addressDLL next;
};

struct ListDLL {
    addressDLL head;
    addressDLL tail;
};

bool isEmpty(const ListDLL &L);
void createList(ListDLL &L);
addressDLL allocate(const Song &S);
void deallocate(addressDLL P);

void insertFirst(ListDLL &L, const Song &S);
void insertLast(ListDLL &L, const Song &S);
void insertAfter(ListDLL &L, addressDLL Q, const Song &S);
void insertBefore(ListDLL &L, addressDLL Q, const Song &S);

void deleteFirst(ListDLL &L, Song &S);
void deleteLast(ListDLL &L, Song &S);
void deleteAfter(ListDLL &L, addressDLL Q, Song &S);
void deleteBefore(ListDLL &L, addressDLL Q, Song &S);

void updateAtPosition(ListDLL &L, int posisi, const Song &newS);
void updateBefore(ListDLL &L, addressDLL Q, const Song &newS);

void viewList(const ListDLL &L);
void searchByPopularityRange(const ListDLL &L, float minScore, float maxScore);
float PopularityScore(const Song &s);
addressDLL nodeAtPosition(const ListDLL &L, int posisi);