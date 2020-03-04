#include <stdio.h>
#include <stdlib.h>


//For doubly LL, we need 2 pointers, one to find the next node and to find the previous node
struct node
{
    int data;
    struct node *prev, *next;
};

struct node* add_node(struct node * head,int ele)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = ele;
    temp -> prev = NULL;
    temp -> next = NULL;

    struct node* temp2 = head;
    while(temp2->next!=NULL)temp2=temp2->next;
    temp2 -> next = temp;
    temp -> prev = temp2;

    return head;
};

int main()
{
    int ele,ctr;
    printf("Enter an element to insert:");
    scanf("%d",&ele);

    struct node* head = (struct node*)malloc(sizeof(struct node));
    head -> data = ele;
    head -> prev = NULL;
    head -> next = NULL;

    do
    {
        printf("Enter an element to insert:");
        scanf("%d",&ele);
        head = add_node(head,ele);
        printf("Do you want to insert more elements:");
        scanf("%d",&ctr);
    }while(ctr!=0);

    //Printing in forward order
    struct node * temp = head;
    printf("In forward order:");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp ->next;
    }

    //In reverse order
    printf("\n In reverse order:");
    temp = head;
    while(temp->next!=NULL)temp = temp -> next; //Finding the last node
    //Then we will go back from the last node

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp -> prev;
    }
}
