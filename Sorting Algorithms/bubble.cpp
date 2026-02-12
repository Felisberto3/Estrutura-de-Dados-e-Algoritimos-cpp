#include <iostream>
using namespace std;
bool bubbleSort(int *arr, int length)
{
    bool swapped;
    for (int i = 0; i < length - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    return swapped;
};
int main(int argc, char const *argv[])
{
    int arr[] = {0, 9, 8, 0, 9, 4, 8, 7, 5, 4, 3, 9, 5, 4, 8, 4, 3, 7, 3, 12};
    bubbleSort(arr, size(arr));

    for (int i = 0; i < size(arr); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
