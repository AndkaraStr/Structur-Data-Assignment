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
