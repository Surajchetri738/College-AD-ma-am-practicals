#include<stdio.h>
int main(){
    int arr[20], n, i, e, p;
    printf("Enter the no of elements of the array:");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element you want to insert in the array:");
    scanf("%d", &e);
    
    printf("Enter the position of the element you want to inert in the array:");
    scanf("%d", &p);

    for (i = n; i >= p; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[p] = e;

    printf("The uptaded array is:");
    for (i = 0; i <= n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}