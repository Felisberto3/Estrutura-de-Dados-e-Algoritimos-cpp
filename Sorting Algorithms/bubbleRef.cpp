#include <array>
#include <iostream>

using namespace std;
bool bubbleSortRef(array<int, 5> &array)
{
    bool swap;
    for (int i = 0; i < size(array) - 1; i++)
    {
        swap = false;
        for (int j = 0; j < size(array) - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swap = true;
            }
        }

        if (!swap)
        {
            break;
        }
    }

    return swap;
};

int main(int argc, char const *argv[])
{
    array<int, 5> arr = {10, 5, 34280233, 2, 21};
    bubbleSortRef(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
