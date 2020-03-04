#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node * add_node(struct node * head,int ele)
{
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = ele;
    temp -> next = NULL;

    struct node *temp2 = head;
    while(temp2->next!=NULL)temp2 = temp2->next;
    temp2->next = temp;

    return head;
};


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
        head = add_node(head,n);
        printf("Do you want to insert more?");
        scanf("%d",&ctr);
    }while(ctr!=0);

    struct node * temp = head, *temp2 = head;

    //temp2 moves 2 steps while temp moves 1 step at a time
    while(temp2!=NULL)
    {
        temp2 = temp2->next;
        if(temp2 -> next == NULL) //NULL after 1 step means there are even number of nodes, sooo we have 2 middle elements
        {
            printf("Middle elements are %d %d",temp->data,temp->next->data);
            break;
        }
        temp2 = temp2->next;
        temp = temp -> next;
        if(temp2->next == NULL) //Odd number of nodes
        {
            printf("Middle element is %d",temp->data);
            break;
        }
    }

}
