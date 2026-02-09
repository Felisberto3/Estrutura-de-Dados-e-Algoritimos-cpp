#include <iostream>
#include "Queue.h"
int main(int argc, char const *argv[])
{
    Queue<int> queue;
    queue.insert(1);
    queue.insert(2);
    queue.insert(1);
    queue.show();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.show();

    return 0;
}
