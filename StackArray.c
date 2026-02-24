#include<stdio.h>
#define size 20
int st[size];
int top = -1;
int i, n;
int main(){
    int x, y, choice; char ans;
    printf("Enter the no.s of elements of the stack:");
    scanf("%d", &n);
    printf("Enter the elements in the stack:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &st[i]);
        top++;
    }
    
    void push(int[], int);
    int pop(int[]);
    void Disp(int[]);
    
    do{
        printf("\nChoose which you want to do with this Stack\n1.PUSH\n2.POP :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1 :
            printf("Enter the element you want to push:");
            scanf("%d", &x);
            push(st, x);
            Disp(st);
            break;
        case 2 :
            x = pop(st);
            if(x != -999){
                printf("The popped element is: %d\n", x);
            }
            Disp(st);
            break;
            
        default :
            printf("Invalid choice.\n");
            Disp(st);
            break;
        }
        printf("\nDo you want to do more operations on this stack(Y/N):");
        scanf(" %c", &ans);

    } while(ans == 'Y' || ans == 'y');
    
    return 0;
}

void push(int a[], int x1){
    top++;
    if (top >= size)
    {
        printf("Stack is full.");
        return;
    }
    else
    {
        a[top] = x1;
        return;
    }
}

int pop(int a[]){
    if(top < 0){
        printf("Stack is empty.\n");
        return -999;
    }
    int val = a[top];
    top--;
    return val;
}
    

void Disp(int a[]){
    printf("The updated stack is:\n");
    for (i = 0; i <= top; i++)
    {
        printf(" %d ", a[i]);
    }
}