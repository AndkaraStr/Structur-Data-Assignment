#include <iostream>
#include "stack.h"
using namespace std;

void createStack(Stack &S){
    S.top = -1;
}

void push(Stack &S, infotype x){
    if(S.top < maxStack-1){
        S.top++;
        S.info[S.top] = x;
    }
}

void pushAscending(Stack &S, infotype x){
    Stack temp;
    createStack(temp);

    // pindahkan elemen yang lebih besar ke stack sementara
    while(S.top >= 0 && S.info[S.top] > x){
        push(temp, pop(S));
    }

    // push elemen barunya
    push(S, x);

    // kembalikan elemen sementara
    while(temp.top >= 0){
        push(S, pop(temp));
    }
}

infotype pop(Stack &S){
    if(S.top >= 0){
        infotype x = S.info[S.top];
        S.top--;
        return x;
    }
    return -1; // -1 karena tidak kosong !!!
}

void printInfo(Stack S){
    cout << "[TOP] ";
    for(int i = S.top; i >= 0; i--){
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S){
    Stack T;
    createStack(T);
    while(S.top >= 0){
        push(T, pop(S));
    }
    S = T;
}
