#include <iostream>
#include <cstdlib>
#include <time.h>
using std::cin;
using std::cout;
using std::endl;
using std::getline;

///@brief Get a random number between the bounds
///@param min Inclusive lower boundary
///@param max Exclusive upper boundary
int RandRange(int min, int max)
{
    return (rand() % (max + 1)) + min;
}

void Randomise(int *arr, int len)
{
    int j, temp;
    for (int i = 0; i < len; i++)
    {
        j = RandRange(0, len - 1);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

bool CheckSorted(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
        if (arr[i] > arr[i + 1])
            return false;
    return true;
}

void PrintArray(int *arr, int len)
{
    cout << "Array: ";
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void BogoSort(int *arr, int len)
{
    while (!CheckSorted(arr, len))
    {
        Randomise(arr, len);
        PrintArray(arr, len);
    }
}

int main()
{
    srand(time(NULL));
    int arr[5] = {5, 3, 4, 1, 2};
    PrintArray(arr, 5);
    cout << "Sorting..." << endl;
    BogoSort(arr, 5);
    cout << "Done!" << endl;
    return 0;
}
