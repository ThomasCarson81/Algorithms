#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// @brief Binary search for a given value in an array. The array MUST be sorted
/// @param arr Pointer to the first array element
/// @param size Length of the array
/// @param target The value to be searched for
/// @return The index of the target value, or -1 if not found
int BinarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main(int argc, char *argv[])
{
    int val = 0;
    if (argc > 1)
    {
        val = atoi(argv[1]);
    }
    printf("Searching for: %d\n", val);
    int myArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", BinarySearch(myArr, 10, val));
    return 0;
}