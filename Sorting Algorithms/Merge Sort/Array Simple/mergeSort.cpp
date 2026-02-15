
#include <iostream>
void merge(int array[], int left, int middle, int right)
{
    int lengthLeft = middle - left + 1;
    int lengthRight = right - (middle + 1) + 1;

    int *leftArray = new int[lengthLeft];
    int *rightArray = new int[lengthRight];

    for (int i = 0; i < lengthLeft; i++)
    {
        leftArray[i] = array[left + i];
    }

    for (int j = 0; j < lengthRight; j++)
    {
        rightArray[j] = array[middle + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < lengthLeft && j < lengthRight)
    {
        if (leftArray[i] > rightArray[j])
        {
            array[k++] = rightArray[j++];
        }
        else
        {
            array[k++] = leftArray[i++];
        }
    }

    while (i < lengthLeft)
    {
        array[k++] = leftArray[i++];
    }

    while (j < lengthRight)
    {
        array[k++] = rightArray[j++];
    }

    delete[] leftArray;
    delete[] rightArray;
}
void mergeSort(int array[], int left, int right)
{
    if (left >= right)
        return;
    int middle = left + (right - left) / 2;

    mergeSort(array, left, middle);
    mergeSort(array, middle + 1, right);

    merge(array, left, middle, right);
}
int main(int argc, char const *argv[])
{
    int array[] = {0, 5, 3, 32, 6, 0, 43, 1, -1};

    int length = sizeof(array) / sizeof(array[0]);
    mergeSort(array, 0, length - 1);

    for (int i = 0; i < length; i++)
    {
        std::cout << array[i] << " ";
    }

    return 0;
}
