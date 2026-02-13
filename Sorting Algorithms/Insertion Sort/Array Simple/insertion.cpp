#include <iostream>
void insertion(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 32, 2, 7, 5, 0, 3, 4};
    insertion(arr, 8);

    for (int i = 0; i < 8; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
