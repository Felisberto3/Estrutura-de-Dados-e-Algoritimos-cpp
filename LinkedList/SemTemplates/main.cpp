#include "LinkedList.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    LinkedList list;
    list.insert(-3);
    list.insert(5);
    list.insert(9);
    list.show();
    list.pop();
    cout << "============\n \n ";
    list.show();
    cout << "\n \n ";
    return 0;
}
