#include<stdio.h>
int main(){
    int arr[20], i, n, e;
    printf("Enter the no.s of elements of the array:");
    scanf("%d", &n);

    printf("Enter the elements in the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    printf("\nEnter the element you want to search in the array:");
    scanf("%d", &e);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == e)
        {
            printf("The %d element found at %d position and %d index.", e, i+1, i);
            break;
        }
    }
    return 0;
}