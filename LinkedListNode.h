#ifndef LINKEDLISTNODE_H
#define LINKEDLISTNODE_H


class LinkedListNode {
private:
    int value;
    LinkedListNode *next;

public:
    LinkedListNode(int value);

    void setValue(int value);

    void setNext(LinkedListNode *next);

    int getValue();

    LinkedListNode* getNext();
};


#endif //LINKEDLISTNODE_H
