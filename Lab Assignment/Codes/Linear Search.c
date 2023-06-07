// linear search an elements and delete that element
#include<stdio.h>
void main()
{
int a[100],i,newindex,n,search;
printf("Enter array Size: ");
scanf("%d",&n);
printf("\nEnter %d array elements \n",n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("Array elements are: \n");
for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    printf("\nEnter a number to search: ");
  scanf("%d", &search);

  for (i = 0; i < n; i++)
  {
    if (a[i] == search)    /* If required element is found */
    {
      printf("%d is present at Position %d.\n", search, i+1);
      printf("%d is present at Index no %d.\n", search, i);
      break;
    }
  }

}