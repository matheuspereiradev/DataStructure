#include "LinkedListNode.h"

LinkedListNode::LinkedListNode(int value) {
    this->value = value;
    this->next = nullptr;
}

LinkedListNode *LinkedListNode::getNext() {
    return this->next;
}

int LinkedListNode::getValue() {
    return this->value;
}

void LinkedListNode::setNext(LinkedListNode *next) {
    this->next = next;
}

void LinkedListNode::setValue(int value) {
    this->value = value;
}



