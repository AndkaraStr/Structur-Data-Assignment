#ifndef STACKINSTREAM_H
#define STACKINSTREAM_H

const int maxStack = 20;

typedef char infotype;

typedef struct {
    infotype info[maxStack];
    int top;
} Stack;

void createStack(Stack &S);
void push(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);
void pushAscending(Stack &S, infotype x);
void getInputStream(Stack &S);

#endif
