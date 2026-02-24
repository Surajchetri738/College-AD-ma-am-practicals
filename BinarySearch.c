#include <stdio.h>

int main() {
    int arr[20], n, i, e, found = -1;
    printf("Enter the no. of elements of the array: ");
    scanf("%d", &n);
    
    printf("\nEnter the elements in the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The entered elements in the array are:\n");
    for(i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }

    printf("\nEnter the element you want to search: ");
    scanf("%d", &e);

    int beg = 0, end = n-1, mid;
    while (beg <= end) {
        mid = (beg + end) / 2;
        if (arr[mid] == e) {
            found = mid;
            break;  
        }
        else if (e < arr[mid]) {
            end = mid - 1;
        }
        else {
            beg = mid + 1;
        }
    }

    if (found != -1) {
        printf("\nThe %d element found at position %d and index %d.\n", e, found+1, found);
    } else {
        printf("\nElement %d not found in the array.\n", e);
    }
    return 0;
}