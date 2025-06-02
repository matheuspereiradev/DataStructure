#ifndef STACK_H
#define STACK_H

#define SIZE 10

class Stack {
private:
    int top = 0;
    int elements[SIZE] = {};


public:

    void push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
    void printStack();
};



#endif //STACK_H
