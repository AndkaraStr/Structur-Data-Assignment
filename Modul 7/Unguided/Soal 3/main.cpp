#include <iostream>
#include "stackINStream.h"
using namespace std;

int main(){
    cout << "Hello world!" << endl;

    Stack S;

    // =======================================
    // 1. NOMOR 1 – operasi stack dasar
    // =======================================
    createStack(S);
    push(S, '3');
    push(S, '4');
    push(S, '8');
    pop(S);
    push(S, '2');
    push(S, '3');
    pop(S);
    push(S, '9');

    cout << "\n=== OUTPUT NOMOR 1 ===" << endl;
    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);


    // =======================================
    // 2. NOMOR 2 – pushAscending
    // =======================================
    createStack(S);
    pushAscending(S, '3');
    pushAscending(S, '4');
    pushAscending(S, '8');
    pushAscending(S, '2');
    pushAscending(S, '3');
    pushAscending(S, '9');

    cout << "\n=== OUTPUT NOMOR 2 (pushAscending) ===" << endl;
    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);


    // =======================================
    // 3. NOMOR 3 – getInputStream
    // =======================================
    createStack(S);
    cout << "\nMasukkan input karakter (akhiri dengan ENTER): ";
    getInputStream(S);

    cout << "\n=== OUTPUT NOMOR 3 ===" << endl;
    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);

    return 0;
}
