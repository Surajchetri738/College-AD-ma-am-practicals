#include<stdio.h>
int main(){
    int arr[20], n, i;
    void Isort(int[], int);
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

    Isort(arr, n);
    return 0;
}

void Isort(int a[], int n){
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i-1;
        while (j >= 0 && key < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    printf("\nThe  sorted array is:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
}