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

int Queue::dequeue() {
    if (isEmpty()) {
        throw "Queue is empty";
    }

    if (this->start == SIZE - 1) {
        this->start = 0;
        return this->elements[SIZE - 1];
    }

    this->start++;
    return this->elements[this->start - 1];
}

void Queue::enqueue(int item) {
    if (isFull()) {
        throw "Queue is fully";
    }

    if (this->end + 1 == SIZE - 1) {
        this->end = 0;
    }

    this->elements[this->end] = item;
    this->end++;
}

bool Queue::isFull() {
    if (this->start == 0) {
        return this->end == SIZE - 1;
    }

    return this->start - 1 == this->end;
}

int Queue::size() {
    return 0;
}

void Queue::printQueue() {
    cout << "=========ON MEMORY========" << endl;
    cout << "[";
    for (int i = 0; i < SIZE; i++) {
        cout << this->elements[i] << " ";
    }
    cout << "]" << endl;
    cout << "START =>" << this->start << endl;
    cout << "END =>" << this->end << endl;
    cout << "=========ON MEMORY========" << endl;

}
