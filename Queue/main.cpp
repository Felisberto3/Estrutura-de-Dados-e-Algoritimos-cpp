#include <iostream>
#include "Queue.h"
int main(int argc, char const *argv[])
{
    Queue<int> queue;
    queue.enqueue(3);
    queue.enqueue(2);
    queue.enqueue(6);
    queue.show();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    // queue.dequeue();
    // queue.dequeue();
    // queue.enqueue(3336);
    // queue.dequeue();
    queue.show();

    std::cout << "\n \n ";
    int value = queue.peek();
    if (value)
    {
        std::cout << "encontrado: " << value;
    }

    return 0;
}
