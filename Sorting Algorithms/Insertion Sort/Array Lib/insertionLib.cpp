#include <iostream>
#include <array>

void insertion(std::array<int, 8> &arr)
{
    for (int i = 0; i < arr.size(); i++)
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
};

int main(int argc, char const *argv[])
{
    std::array<int, 8> arr = {3, 32, 7, -8, 7, 6, 7, 0};
    insertion(arr);

    for (int i = 0; i < size(arr); i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
