#include<stdio.h>
int main(){
    int arr[20], n, i;
    void Ssort(int[], int);
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

    Ssort(arr, n);
    return 0;
}

void Ssort(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        int m = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[m])
            {
                m = j;
            }
            int temp = a[i];
            a[i] = a[m];
            a[m] = temp;
        }
    }
    printf("\nThe  sorted array is:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
}