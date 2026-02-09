#ifndef NODE_H
#define NODE_H
class Node
{
private:
    int data;
    Node *next;

public:
    Node(int data, Node *next);
    Node(int data);
    int getData() const;
    Node *getNext() const;

    void setNext(Node *next);
};

Node::Node(int data, Node *next)
{
    this->data = data;
    this->next = next;
}

Node::Node(int data)
{
    this->data = data;
    this->next = nullptr;
}

int Node::getData() const
{
    return this->data;
}

Node *Node::getNext() const
{
    return this->next;
}

void Node::setNext(Node *next)
{
    this->next = next;
}

#endif