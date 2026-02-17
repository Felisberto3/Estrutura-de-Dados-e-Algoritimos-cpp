#include <iostream>

void swap(int arr[], int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j <= right; j++)
    {
        if (arr[j] < pivot)
        {
            // encrementar o i e trocar
            i++;
            swap(arr, i, j);
        }
    }

    i++;
    swap(arr, i, right);
    return i;
}

void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pivotIndex = partition(arr, left, right);
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

int main(int argc, char const *argv[])
{
    // int arr[] = {9, 5, 2, 7, 1, 0, 8};
    // int arr[] = {5, 2, 9, 1, 7, 3};
    // int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int arr[] = {4, 2, 4, 1, 2, 4, 3, 2};
    // int arr[] = {7, 7, 7, 7, 7, 7};
    // int arr[] = {-3, 10, -1, 5, -8, 2, 0};
    // int arr[] = {8, 3, 1, 7, 0};
    int arr[] = {42};
    // int arr[] = {32, 5, 17, 8, 99, 1, 44, 12, 0, 73, 21, 6};
    // int arr[] = {9, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, length - 1);
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;

    int numero = 3;
    double numero2 = 3.6;
}
