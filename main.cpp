#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;

void Randomise(int *arr, int len)
{
    
}

bool CheckSorted(int *arr, int len)
{
    bool sorted = true;
    for (int i = 0; i < len-1; i++)
        if (arr[i] > arr[i+1])
            sorted = false;
    return sorted;
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
