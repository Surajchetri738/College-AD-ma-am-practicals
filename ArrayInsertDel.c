#include<stdio.h>
int main(){
    int arr[20], n, i, e, p, choice; char ans;
    printf("Enter the no. of elements of the array:");
    scanf("%d", &n);

    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    do
    {
        printf("\n Choose which you want to do with this array\n1.Insertion\n2.Deletion:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (n >= 20) {
                printf("Array Overflow!\n");
                break;
            }
            printf("Enter the element you want to insert in the array:");
            scanf("%d", &e);
            printf("Enter the position of the  element you want to insert in the array:");
            scanf("%d", &p);
            for (i = n; i >= p; i--)
            {
                arr[i] = arr[i-1];
            }
            arr[p] = e;
            n++;
            printf("The updated array is:");
            for (i = 0; i < n; i++)
            {
                printf("%d", arr[i]);
            }
            break;
        
        case 2:
            if (n == 0) {
                printf("Array Empty!\n");
                break;
            }
            printf("Enter the element you want to delete from the array:");
            scanf("%d", &e);
            // searching of element's position
            for (i = 0; i < n; i++)
            {
                if (arr[i] == e)
                {
                    break;
                }
            }
            p = i;
            n--;
            // Deleting the element
            for (i = p; i < n; i++)
            {
                arr[i] = arr[i+1];
            }
            printf("The updated array is:");
            for (i = 0; i < n; i++)
            {
                printf("%d", arr[i]);
            }
            break;
        default:
            printf("Invalid choice!\n");
            printf("The array is:");
            for (i = 0; i <= n; i++)
            {
                printf("%d", arr[i]);
            }
            break;
        }
        printf("\nDo you want to do more operations on this LinkedList(Y/N):");
        scanf(" %c", &ans);
    } while (ans == 'Y' || ans == 'y');
    
    return 0;
}