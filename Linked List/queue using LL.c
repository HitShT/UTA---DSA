#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node * enqueue(struct node * head,int ele)
{
    /*
        Here we add the new node at the end, this is similar to our normal addition
    */
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = ele;
    temp -> next = NULL;

    struct node *temp2 = head;
    while(temp2->next!=NULL)temp2 = temp2->next;
    temp2->next = temp;

    return head;
};

int dequeue(struct node** head)
{
    /*
        Same code as pop operation
    */

    struct node* temp = (*head);
    int val = temp->data;
    struct node* temp2 = temp;
    temp = temp -> next;
    free(temp2);
    return val;
}

int main()
{struct node * head = (struct node *)malloc(sizeof(struct node));

    int n,ctr;
    printf("Enter an element to insert:");
    scanf("%d",&n);

    head->data=n;
    head->next=NULL;

    do{
        printf("Enter an element to insert:");
        scanf("%d",&n);
        head = enqueue(head,n);
        printf("Do you want to insert more?");
        scanf("%d",&ctr);
    }while(ctr!=0);

    printf("%d ",dequeue(&head));
}
