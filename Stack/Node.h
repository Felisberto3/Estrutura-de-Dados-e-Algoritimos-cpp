#ifndef NODE_H
#define NODE_H
template <typename T>
class Node
{
private:
    T data;
    Node<T> next;

public:
    Node(T data);
    Node(T data, Node<T> next);
    T getData();
    Node<T> *getNext();
    void setNext(Node<T> *next);
};

template <typename T>
Node<T>::Node(T data)
{
    this->data = data;
    this->next = nullptr;
};

template <typename T>
Node<T>::Node(T data, Node<T> next)
{
    this->data = data;
    this->next = next;
};

template <typename T>
Node<T> *Node<T>::getNext()
{
    return this->next;
};

template <typename T>
T Node<T>::getData()
{
    return this->data;
}

template <typename T>
void Node<T>::setNext(Node<T> *next)
{
    this->next = next;
}

#endif