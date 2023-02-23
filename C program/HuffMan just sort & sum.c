#include <stdio.h>
#include <stdlib.h>
void sort_array(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[100] = {4, 2, 8, 5, 9};
    int new_arr[100];
    int i, j, sum, n = 5;
    

    for (j = 0; j < n + 2; j++)
    {
        sort_array(arr, n);

        // Summing the first two elements
        sum = arr[0] + arr[1];

        // Creating the new array
        new_arr[0] = sum;
        for (i = 1; i < n; i++)
        {
            new_arr[i] = arr[i + 1];
        }
        
        printf("Sorted array: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        n = n - 1;
        printf("   New array: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", new_arr[i]);
            arr[i] = new_arr[i];
        }
        printf("\n");
    }

    return 0;
}