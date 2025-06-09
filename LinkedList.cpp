#include "LinkedList.h"

#include <iostream>

#include "LinkedListNode.h"

using namespace std;

LinkedList::~LinkedList() {
    LinkedListNode *current = this->head;

    while (current->getNext() != nullptr) {
        LinkedListNode *next = current->getNext();
        delete current;
        current = next;
    }
}

void LinkedList::add(int value, int index) {
    if (index < -1 || index > this->size) {
        throw out_of_range("Indice invalido");
    }

    LinkedListNode *newNode = new LinkedListNode(value);

    if (index == -1 || index == this->size) {
        if (this->head == nullptr) {
            this->head = this->tail = newNode;
        } else {
            this->tail->setNext(newNode);
            this->tail = newNode;
        }
        this->size++;
        return;
    }

    if (index == 0) {
        newNode->setNext(this->head);
        this->head = newNode;
        if (this->size == 0) {
            this->tail = newNode;
        }
        this->size++;
        return;
    }

    LinkedListNode *current = this->head;
    int i = 0;
    while (i < index - 1) {
        current = current->getNext();
        i++;
    }

    newNode->setNext(current->getNext());
    current->setNext(newNode);

    if (newNode->getNext() == nullptr) {
        this->tail = newNode;
    }

    this->size++;
}


void LinkedList::remove(int index) {
    if (this->tail == nullptr) {
        throw "List is empty";
    }

    if (index == 0) {
        removeHead();
        return;
    }

    if (index == -1) {
        removeTail();
        return;
    }

    if (index > this->size) {
        throw out_of_range("Inaccessible index");
    }

    LinkedListNode *current = this->head;
    LinkedListNode *last = nullptr;
    int i = 0;

    while (i < index && current->getNext() != nullptr) {
        last = current;
        current = current->getNext();
        i++;
    }

    last->setNext(current->getNext());
    delete current;
    this->size--;
}

int LinkedList::get(int index) {
    if (index > this->size) {
        throw out_of_range("Inaccessible index");
    }

    LinkedListNode *current = this->head;
    int i = 0;

    while (i < index && current->getNext() != nullptr) {
        current = current->getNext();
        i++;
    }

    return current->getValue();
}


void LinkedList::removeTail() {
    if (this->head == this->tail) {
        delete this->tail;
        this->head = this->tail = nullptr;
        return;
    }

    LinkedListNode *current = this->head;
    LinkedListNode *last = nullptr;

    while (current->getNext() != nullptr) {
        last = current;
        current = current->getNext();
    }

    delete this->tail;
    this->tail = last;
    this->tail->setNext(nullptr);
    this->size--;
}


void LinkedList::removeHead() {
    if (this->head == nullptr) {
        throw "List is empty";
    }

    LinkedListNode *temp = this->head;
    this->head = this->head->getNext();
    delete temp;
    if (this->head == nullptr) {
        this->tail = nullptr;
    }
    this->size--;
}

LinkedList::LinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}


void LinkedList::print() {
    cout << "=========Vamos exibir a lista=========" << endl;
    LinkedListNode *current = this->head;
    int index = 0;
    while (current != nullptr) {
        cout << index << " - " << "(" << current->getValue() << ")" << endl;
        current = current->getNext();
        index += 1;
    }

    cout << "=========Fim da lista=========" << endl;
}

int LinkedList::getFirst() {
    if (this->head == nullptr) {
        throw "List is empty";
    }

    return this->head->getValue();
}

int LinkedList::getSize() {
    return this->size;
}

int LinkedList::getLast() {
    if (this->tail == nullptr) {
        throw "List is empty";
    }

    return this->tail->getValue();
}
