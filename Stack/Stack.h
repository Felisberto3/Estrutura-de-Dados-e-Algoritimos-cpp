#ifndef STACK_H
#define STACK_H
#include "Node.h"

template <typename T>
class Stack
{
private:
    Node<T> top;

public:
    Stack();
    // ~Stack();

    void pop();
    void push();
    T top();
    T peek();
};
// Stack::~Stack()
// {
// }

template <typename T>
Stack<T>::Stack()
{
    top = nullptr;
}

#endif