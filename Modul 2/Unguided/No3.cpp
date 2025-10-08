#include <iostream>

using namespace std;

int Arry[10] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};

// Fungsi MIN
void minimum(int arr[], int n) {
    int hasilmin = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < hasilmin) {
            hasilmin = arr[i];
        }
    }
    cout << "\nNilai Minimum : " << hasilmin << endl;
}

// Fungsi MAX
void maksimum(int arr[], int n) {
    int hasilmax = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > hasilmax) {
            hasilmax = arr[i];
        }
    }
    cout << "\nNilai Maks : " << hasilmax << endl;
}

// Rata-rataa
void rata2(int arr[], int n) {
    int jmlh = 0;
    for (int i = 0; i < n; i++) {
        jmlh += arr[i];
    }
    double avg = (double)jmlh / n;
    cout << "\nRata-rata: " << avg << endl;
}

void tampil(int arr[], int n) {
    cout << "\nIsi array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int pilih;
    do {
        cout << "\n-- Menu Program Array --\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. cari nilai maksimum\n";
        cout << "3. cari nilai minimum\n";
        cout << "4. Hitung nilai rata - rata\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu:";
        cin >> pilih;

        switch (pilih) {
            case 1:
                tampil(Arry, 10);
                break;
            case 2:
                maksimum(Arry, 10);
                break;
            case 3:
               minimum(Arry, 10);
                break;
            case 4:
                rata2(Arry, 10);
                break;
            case 0:
                cout << "Thanks!..;)\n";
                break;
            default:
                cout << "\n!!!!! ZONK !!!!!\n";
        }
    } while (pilih != 0);

    return 0;
}
