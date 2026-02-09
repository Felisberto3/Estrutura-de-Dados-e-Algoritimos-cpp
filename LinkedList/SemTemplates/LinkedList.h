#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <iostream>

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    void insert(int data);
    void show();
    void top(); // elimina no top;
    void pop(); // elimina o ultimo;
};

LinkedList::LinkedList()
{
    this->head = nullptr;
};

void LinkedList::insert(int data)
{
    if (head == nullptr)
    {
        head = new Node(data);
        return;
    }

    Node *temp = head;

    while (temp->getNext() != nullptr)
    {
        temp = temp->getNext();
    }
    temp->setNext(new Node(data));
};

void LinkedList::show()
{
    Node *temp = head;

    while (temp != nullptr)
    {
        std::cout << temp->getData() << " ";
        temp = temp->getNext();
    }
};

void LinkedList::top()
{
    Node *top = head;
    head = head->getNext();
    delete top;
}

void LinkedList::pop()
{
    if (head == nullptr)
    {
        return;
    }

    Node *temp = head;
    Node *pos = head->getNext();

    if (pos == nullptr)
    {
        head = nullptr;
        delete temp;
        return;
    }

    while (pos->getNext() != nullptr)
    {
        temp = pos;
        pos = pos->getNext();
    }
    temp->setNext(nullptr);
    delete pos;
}
#endif