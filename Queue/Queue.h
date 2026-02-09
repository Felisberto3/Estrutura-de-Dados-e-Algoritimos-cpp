#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include "Node.h"

template <typename T>
class Queue
{
private:
    Node<T> *head, *tail;

public:
    Queue();
    void enqueue(T data);
    void dequeue();
    Node<T> *peek();
    void show();
};

template <typename T>
Queue<T>::Queue()
{
    head = tail = nullptr;
};

template <typename T>
void Queue<T>::enqueue(T data)
{
    if (head == nullptr)
    {
        head = tail = new Node<T>(data);
    }
    else
    {
        tail->setNext(new Node<T>(data));
        tail = tail->getNext();
    }
}

template <typename T>
void Queue<T>::dequeue()
{
    if (head == nullptr)
    {
        return;
    }

    Node<T> *temp = head;
    head = head->getNext();

    delete temp;

    if (head == nullptr)
    {
        tail = nullptr;
    }
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
};

template <typename T>
Node<T> *Queue<T>::peek()
{
    if (head == nullptr)
    {
        return nullptr;
    }
    else
    {
        return head;
    }
};

#endif