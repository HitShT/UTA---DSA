#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    //Data you want to store in the LL
    struct node *next;
};

//This function returns the head pointer after insertion
struct node * insert_node(struct node * head, int ele)
{
    if(head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head -> data = ele;
        head -> next = NULL;
    }
    else
    {
        struct node * temp = head;
        while(temp->next!=NULL)temp = temp ->next;
        struct node * temp2 = (struct node *)malloc(sizeof(struct node));
        temp2 -> data = ele;
        temp2 -> next = NULL;
        temp -> next = temp2;
    }
    return head;
};

//We can implement the function without returning anything
// We will use pointer to the head of the LL
// i.e. pointer to the pointer, i.e. call by reference

void insert(struct node* * head,int ele)
{
    struct node *temp = (*head); //storing value of pointer to temp
    if(temp == NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp -> data = ele;
        temp -> next = NULL;
    }
    else
    {
        while(temp->next!=NULL)temp = temp -> next;
        struct node * temp2 = (struct node *)malloc(sizeof(struct node));
        temp2 -> data = ele;
        temp2 -> next = NULL;
        temp -> next = temp2;
    }
}

int main()
{
    struct node * head = NULL;
    int ct;
    //To stop the insertion of elements once the user gives any number other than 1
    do
    {
        int ele;
        printf("Enter the element:");
        scanf("%d",&ele);
        head = insert_node(head,ele);
        //insert(&head,ele);
		printf("Do you want to insert more? If yes insert 1");
		scanf("%d",&ct);
    }while(ct==1);

    struct node * temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp -> next;
    }
}
