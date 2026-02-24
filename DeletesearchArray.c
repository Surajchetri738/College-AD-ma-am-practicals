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
    
    printf("Enter the element you want to delete from the array:");
    scanf("%d", &e);
    
//searching of element position.
    for(i = 0; i < n; i++){
        if(arr[i] == e){
            break;
        }
    }
    p = i;

// deleting the element.
    for (i = p; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    
// displaying the array.
    printf("The uptaded array is:");
    for (i = 0; i < n-1; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}