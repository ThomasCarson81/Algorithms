#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;
using std::getline;

srand(time(NULL));

///@brief Get a random number between the bounds
///@param min Inclusive lower boundary
///@param max Exclusive upper boundary
int RandRange(int min, int max)
{
    return (rand() % (max+1)) + min;
}

void Randomise(int *arr, int len)
{
    int j, temp;
    for (int i = 0; i < len; i++)
    {
        j = RandRange(0,len);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

bool CheckSorted(int *arr, int len)
{
    for (int i = 0; i < len-1; i++)
        if (arr[i] > arr[i+1])
            return false;
    return true;
}

void BogoSort(int *arr, int len)
{
    while (!CheckSorted(arr, len))
        Randomise(arr, len);
}

int main()
{
    int arr[5] = { 5,3,4,1,2 };
    cout << "Sorting..." << endl;
    BogoSort(arr, 10);
    cout << "Done!" << endl;
    return 0;
}
