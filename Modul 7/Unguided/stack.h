#ifndef STACK_H
#define STACK_H

const int maxStack = 20;

typedef int infotype;

typedef struct {
    infotype info[maxStack];
    int top;
} Stack;

void createStack(Stack &S);
void push(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);

#endif