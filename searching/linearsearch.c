#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// @brief Linear search for a given value in an array
/// @param arr Pointer to the first array element
/// @param size Length of the array
/// @param target The value to be searched for
/// @return The index of the target value, or -1 if not found
int LinearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
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
    printf("%d\n", LinearSearch(myArr, 10, val));
    return 0;
}