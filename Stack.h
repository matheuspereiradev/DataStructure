#ifndef STACK_H
#define STACK_H

#define SIZE 10

class Stack {
private:
    int top;
    int* elements;


public:
    Stack();
    ~Stack();
    void push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
    void printStack();
};



#endif //STACK_H
