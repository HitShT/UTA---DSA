#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node * push(struct node * head,int ele)
{
    /*
        Same idea as before, we take the new node and make it point to head
        Then change head to new node.
        This means we are adding to the front, i.e. how our stacks work
    */
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = ele;
    temp -> next = head;
    return temp;
};

int pop(struct node** head)
{
    /*
        Simple pop operation, we take the node, take its data, make the head as the next node( because we need to remove the value after popping)
        Then return the value of the previous node
    */

    struct node* temp = (*head);
    int val = temp->data;
    struct node* temp2 = temp;
    temp = temp -> next;
    free(temp2);
    return val;
}
int main()
{
    struct node * head = (struct node *)malloc(sizeof(struct node));

    int n,ctr;
    printf("Enter an element to insert:");
    scanf("%d",&n);

    head->data=n;
    head->next=NULL;

    do{
        printf("Enter an element to insert:");
        scanf("%d",&n);
        head = push(head,n);
        printf("Do you want to insert more?");
        scanf("%d",&ctr);
    }while(ctr!=0);

    printf("%d ",pop(&head));
}
