#include<stdio.h>
int main (){
    int arr[20], n, i, choice; char ans;

    void bsort(int[], int);
    void ssort(int[], int);
    void isort(int[], int);
    void Disp(int[], int);

    printf("Enter the no.s of element of the array:");
    scanf("%d", &n);
    printf("\nEnter the elements in the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\nChoose by which method you want search the element int the array:\n1.Bubble sort\n2.Selection sort\n3.Insertion sort:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            bsort(arr, n);
            Disp(arr, n);
            break;
        case 2:
            ssort(arr, n);
            Disp(arr, n);
            break;
        case 3:
            isort(arr, n);
            Disp(arr, n);
            break;
        
        default:
        printf("Invalid choice!");
            break;

        }

        printf("\nDo you want to search more elements in this array:");
        scanf(" %c", &ans);
    } while (ans == 'Y' || ans == 'y');
    
    return 0;
}

void Disp(int a[], int n){
    printf("\nThe sorted array is:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
}

void bsort(int a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void ssort(int a[], int n){
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
}

void isort(int a[], int n){
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
}