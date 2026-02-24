#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node * next;
};
struct node *p;

int main(){
    p = (struct node *)malloc(sizeof(struct node));
    int x, choice; char ans;
    void create(struct node *);
    void push(struct node *, int);
    int pop(struct node *);
    void disp(struct node*);

    printf("Enter the element in the linkedlist, at the end press 999:");
    create(p);
    disp(p);

    do
    {
        printf("\nChoose which operation you want to do with this stack:\n1.PUSH\n2.POP:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element you want to push:");
            scanf("%d", &x);
            push(p, x);
            printf("\nThe updated stack is:\n");
            disp(p);
            break;
        case 2:
            x = pop(p);
            printf("\nThe element popped is : %d", x);
            printf("\nThe updated stack is:\n");
            disp(p);
            break;
        default:
        printf("Invalid choice!");
            disp(p);
            break;
        }
        printf("\nDo you want to do more operation on this stack(Y/N):");
        scanf(" %c", &ans);
    } while(ans == 'Y' || ans == 'y');

    return 0;
}
void create(struct node *q){
    scanf("%d", &q->val);
    if (q->val == 999)
    {
        q->next = '\0';
        return;
    }
    else
    {
        q->next = (struct node *)malloc(sizeof(struct node));
        create(q->next);
    }
}

void disp(struct node *q){
    while (q->val != 999)
    {
        printf(" %d --> ", q->val);
        q = q->next;
    }
}

void push(struct node *q, int y){
    struct node *g;
    g = (struct node *)malloc(sizeof(struct node));
    g->val = y;
    g->next = q;
    p = g;
}

int pop(struct node *q){
    int t;
    t = q->val;
    p = q->next;
    free(q);
    return(t);
}