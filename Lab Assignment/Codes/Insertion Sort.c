// Insertion sort in C
#include <stdio.h>
int main()
{
    int array[100];
    int i, j, key, size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 1; i < size; i++)
    {
        key = array[i];
        j = i - 1;

        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}