#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SelectionSort(int arr[], int size)
{
    int min_index;
    for (int i = 0; i < size - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index == i)
            break;
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
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
    SelectionSort(myArr, 10);
    PrintArray(myArr, 10, ',');
    return 0;
}