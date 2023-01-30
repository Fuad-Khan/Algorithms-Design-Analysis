#include <stdio.h>
void main()
{
    int n, i, key, a[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the item to be searched: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("%d is present at Position %d.\n", key, i + 1);
            printf("%d is present at Index no %d.\n", key, i);
            break;
        }
    }

    if (i > n)
    {
        printf("\n%d not present.\n", key);
    }

    return 0;
}
