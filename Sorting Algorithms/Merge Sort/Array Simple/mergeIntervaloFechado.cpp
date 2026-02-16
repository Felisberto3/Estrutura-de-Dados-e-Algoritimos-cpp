#include <iostream>
void merge(int arr[], int left, int middle, int right)
{
    int leftLength = middle - left;
    int rightLength = right - middle;
    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    for (int i = 0; i < leftLength; i++)
    {
        leftArr[i] = arr[left + i];
    }

    for (int j = 0; j < rightLength; j++)
    {
        rightArr[j] = arr[middle + j];
    }

    int i = 0, j = 0, k = left;

    while (i < leftLength && j < rightLength)
    {
        if (leftArr[i] > rightArr[j])
        {
            arr[k++] = rightArr[j++];
        }
        else
        {
            arr[k++] = leftArr[i++];
        }
    }

    while (i < leftLength)
    {
        arr[k++] = leftArr[i++];
    }
    while (j < rightLength)
    {
        arr[k++] = rightArr[j++];
    }

    delete[] leftArr;
    delete[] rightArr;
}
void mergeSort(int arr[], int left, int right)
{
    if (right - left <= 1)
    {
        return;
    }

    int middle = left + (right - left) / 2;

    mergeSort(arr, left, middle);
    mergeSort(arr, middle, right);
    merge(arr, left, middle, right);
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
    // int arr[] = {42};
    int arr[] = {32, 5, 17, 8, 99, 1, 44, 12, 0, 73, 21, 6};
    // int arr[] = {9, 1};

    int length = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, length);

    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
