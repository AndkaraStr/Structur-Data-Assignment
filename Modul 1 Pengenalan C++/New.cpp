#include <iostream>
using namespace std;

int main() {
string tokoroti = "BlueJAW Chin";
string smogon = tokoroti;
cout << tokoroti << "\n";
cout << &tokoroti << "\n";
cout << smogon << "\n";             

cout << "\n";
string *ptr = &tokoroti; // pointer alamat tokoroti
cout << ptr << "\n"; // alamat tokoroti
cout << *ptr << "\n"; // isi tokoroti
cout << &ptr << "\n"; // alamat ptr
}