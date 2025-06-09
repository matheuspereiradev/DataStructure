#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "LinkedListNode.h"

class LinkedList {
private:
    LinkedListNode *head;
    LinkedListNode *tail;
    int size;

public:
    void add(int value, int index = -1);

    void remove(int index = -1);

    void removeHead();

    void removeTail();

    LinkedList();

    ~LinkedList();

    int getFirst();

    int getLast();

    int getSize();

    int get(int index);

    void print();
};

#endif //LINKEDLIST_H
