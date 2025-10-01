#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "input: ";
    cin >> n;
    cout << "output:\n";

    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j;
            if (j != 1) cout << " * ";
        }
        cout << endl;
    }
    return 0;
}