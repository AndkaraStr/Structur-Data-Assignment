#include <iostream>
#include "stackINStream.h"
using namespace std;

void createStack(Stack &S){
    S.top = -1;
}

void push(Stack &S, infotype x){
    if(S.top < maxStack - 1){
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
    return '\0';   
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

void pushAscending(Stack &S, infotype x){
    Stack temp;
    createStack(temp);

    while(S.top >= 0 && S.info[S.top] > x){
        push(temp, pop(S));
    }

    push(S, x);

    while(temp.top >= 0){
        push(S, pop(temp));
    }
}

void getInputStream(Stack &S){
    char c;
    while(true){
        c = cin.get();
        if(c == '\n') break;
        push(S, c);
    }
}

