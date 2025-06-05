#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack() {
    top = -1;
    this->elements = new int[10];
}

Stack::~Stack() {
    delete[] this->elements;
}


bool Stack::isEmpty() {
    return this->top == 0;
}

bool Stack::isFull() {
    return this->top == SIZE;
}

int Stack::peek() {
    if (isEmpty())
        throw underflow_error("Stack is empty");
    return this->elements[this->top - 1];
}

void Stack::push(int x) {
    if (isFull())
        throw overflow_error("Stack is full");
    this->elements[this->top] = x;
    this->top++;
}

int Stack::pop() {
    if (isEmpty())
        throw underflow_error("Stack is empty");
    this->top--;
    return this->elements[this->top];
}

void Stack::printStack() {
    cout << "STACK(" << this->top << ")" << endl;
    cout << "==========TOPO===========" << endl;
    for (int i = this->top - 1; i >= 0; i--) {
        cout << "[" << this->elements[i] << "]" << endl;
    }
    cout << "=========BASE============" << endl;
}
