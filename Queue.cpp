#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue() {
    this->start = 0;
    this->end = 0;
    this->elements = new int[SIZE];
}

Queue::~Queue() {
    delete[] this->elements;
}

int Queue::front() {
    if (isEmpty()) {
        throw "Queue is empty";
    }
    return elements[start];
}

bool Queue::isEmpty() {
    return this->start == this->end;
}

bool Queue::isFull() {
    return this->end - this->start == SIZE;
}

int Queue::size() {
    return this->end - this->start;
}

int Queue::dequeue() {
    if (isEmpty()) {
        throw "Queue is empty";
    }

    this->start ++;
    return elements[(start - 1) % SIZE];
}

void Queue::enqueue(int item) {
    if (isFull()) {
        throw "Queue is fully";
    }

    this->elements[this->end % SIZE] = item;
    this->end++;
}


void Queue::printQueue() {
    cout << "=========ON MEMORY========" << endl;
    cout << "[";
    for (int i = 0; i < SIZE; i++) {
        cout << this->elements[i] << " ";
    }
    cout << "]" << endl;
    cout << "START =>" << this->start << "(" << this->start % SIZE << ")" << endl;
    cout << "END =>" << this->end << "(" << this->end % SIZE << ")" << endl;
    cout << "=========ON MEMORY========" << endl;

    cout << "[";
    for (int i = this->start; i < this->end; i++) {
        cout << this->elements[i % SIZE] << " ";
    }
    cout << "]" << endl;
}
