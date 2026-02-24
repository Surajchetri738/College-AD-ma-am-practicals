#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node * next;
};

void create(struct node *);
void disp(struct node *);
void insert(struct node *, int x1, int ps);
int del(struct node *, int x2);

int main(){
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));

    printf("Enter the element in the LL, at the end press 999:");
    create(p);
    disp(p);
    int num, pos, choice; char ans;
    do
    {
        printf("\nChoose which you want to do with this LL\n1.Insert\n2.Deletion :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1 :
            printf("\nEnter the element and the element after which you want to insert new element:");
            scanf("%d %d", &num, &pos);
            insert(p, num, pos);
            printf("The updated LL is:");
            disp(p);
            break;
        case 2 :
            printf("\nEnter the element after which the next element will be delete:");
            int dnum;
            scanf("%d", &dnum);
            del(p, dnum);
            printf("The updated LL is:");
            disp(p);
            break;
        default:
            printf("Invalid number.");
            break;
        }
        printf("\nDo you want to do more operations on this LinkedList(Y/N):");
        scanf(" %c", &ans);

    } while (ans == 'Y' || ans == 'y');
    
    
    
    return 0;
}
void create(struct node *q){
    scanf("%d", &q->val);
    if (q->val == 999)
    {
        q->next = '\0';
        return ;
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
void insert(struct node *q, int x1, int ps){
    struct node *g;
    if(q->val == ps){
        g = (struct node *)malloc(sizeof(struct node));
        g->val = x1;
        g->next = q->next;
        q->next = g;
    }
    else{
        insert(q->next, x1, ps);
    }
}
int del(struct node *q, int ps){
    int x1;
    struct node *g;
    if (q->val == ps)
    {
        g = q->next;
        x1 = g->val;
        q->next = g->next;
        free(g);
    }
    else
    {
        x1 = del(q->next, ps);
    }
    return(x1);
    
}