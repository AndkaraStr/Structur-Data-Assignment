
#include "DLLPlaylist.h"

int main() {
    ListDLL L;
    createList(L);

    Song s1 = {"Senja di Kota", "Nona Band", 210, 150, 4.2f};
    Song s2 = {"Langkahmu", "Delta", 185, 320, 4.8f};
    Song s3 = {"Hujan Minggu", "Arka", 240, 90, 3.9f};
    insertLast(L, s1);
    insertLast(L, s2);
    insertLast(L, s3);

    cout << "== Setelah insertLast 3 lagu ==\n";
    viewList(L);
    cout << "\n";

    Song temp;
    deleteLast(L, temp);
    cout << "== Setelah deleteLast 1x (menghapus Hujan Minggu) ==\n";
    viewList(L);
    cout << "\n";

    Song newS = {"Pelita", "Luna", 200, 260, 4.5f};
    updateAtPosition(L, 2, newS);
    cout << "== Setelah update posisi 2 menjadi Pelita ==\n";
    viewList(L);
    cout << "\n";

    addressDLL node2 = nodeAtPosition(L, 2);
    Song before = {"Senandung", "Mira", 175, 120, 4.0f};
    insertBefore(L, node2, before);
    cout << "== Setelah insertBefore pada posisi 2 (masukkan Senandung) ==\n";
    viewList(L);
    cout << "\n";

    addressDLL nodePos2 = nodeAtPosition(L, 2);
    Song updatedBefore = {"Senandung (upd)", "Mira Updated", 180, 130, 4.1f};
    updateBefore(L, nodePos2, updatedBefore);
    cout << "== Setelah updateBefore pada node posisi 2 ==\n";
    viewList(L);
    cout << "\n";

    addressDLL nodePos3 = nodeAtPosition(L, 3);
    deleteBefore(L, nodePos3, temp);
    cout << "== Setelah deleteBefore pada posisi 3 ==\n";
    viewList(L);
    cout << "\n";

    cout << "== Searching PopularityScore antara 150.0 dan 300.0 ==\n";
    searchByPopularityRange(L, 150.0f, 300.0f);

    return 0;
}