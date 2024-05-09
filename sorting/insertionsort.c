#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void PrintArray(int arr[], int size, char sep)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d%c ", arr[i], sep);
    }
    printf("\b\b  ");
}

int main(int argc, char *argv[])
{
    int myArr[10] = {15, 51, 2, 5, 3, 6, 52, 8, 12, 41};
    printf("Array: ");
    PrintArray(myArr, 10, ',');
    printf("\nSorting...\n");
    InsertionSort(myArr, 10);
    PrintArray(myArr, 10, ',');
    return 0;
}