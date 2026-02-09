#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include "Node.h"

template <typename T>
class Queue
{
private:
    Node<T> *head = nullptr;

public:
    Queue();
    void insert(T data);
    void dequeue();
    void show();
};

template <typename T>
Queue<T>::Queue()
{
    this->head = nullptr;
};
template <typename T>
void Queue<T>::insert(T data)
{
    this->head = new Node<T>(data, head);
};
template <typename T>
void Queue<T>::dequeue()
{
    if (head == nullptr)
        return;

    if (head->getNext() == nullptr)
    {
        head = nullptr;
        return;
    }

    Node<T> *curr = head;
    Node<T> *nextCurr = this->head->getNext();

    while (nextCurr->getNext() != nullptr)
    {
        curr = nextCurr;
        nextCurr = nextCurr->getNext();
    }

    curr->setNext(nullptr);
    delete nextCurr;
};

template <typename T>
void Queue<T>::show()
{
    Node<T> *temp = head;

    std::cout << "[";
    while (temp != nullptr)
    {
        std::cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    std::cout << "]";
}

#endif