#define SIZE 5

#ifndef QUEUE_H
#define QUEUE_H


class Queue {
private:
    int start;
    int end;
    int *elements;

public:
    Queue();

    ~Queue();

    void enqueue(int item);

    int dequeue();

    int front();

    bool isEmpty();

    bool isFull();

    int size();

    void printQueue();

};


#endif //QUEUE_H
