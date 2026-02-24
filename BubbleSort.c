#include<stdio.h>
int main(){
    int arr[20], n, i, j, temp;
    printf("Enter the no.s of elements of array:");
    scanf("%d", &n);

    printf("\nEnter the elements in the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe entered elements are:");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    //bubble sort
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nThe entered elements are:");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}