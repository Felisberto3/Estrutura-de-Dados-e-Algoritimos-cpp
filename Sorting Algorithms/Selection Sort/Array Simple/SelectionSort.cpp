#include <iostream>

void selectionSort(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int menorIndex = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[menorIndex] > arr[j])
            {
                menorIndex = j;
            }
        }
        if (arr[menorIndex] < arr[i])
        {
            int temp = arr[menorIndex];
            arr[menorIndex] = arr[i];
            arr[i] = temp;
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {9, 5, 2, 7, 1, 0, 8};
    // int arr[] = {5, 2, 9, 1, 7, 3};
    // int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int arr[] = {4, 2, 4, 1, 2, 4, 3, 2};
    // int arr[] = {7, 7, 7, 7, 7, 7};
    // int arr[] = {-3, 10, -1, 5, -8, 2, 0};
    // int arr[] = {8, 3, 1, 7, 0};
    // int arr[] = {42};
    // int arr[] = {32, 5, 17, 8, 99, 1, 44, 12, 0, 73, 21, 6};
    // int arr[] = {9, 1};
    // int arr[] = {-3, 1, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, length);
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
