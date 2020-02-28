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

struct node * delete(struct node * head,int ele)
{
    struct node * temp = head,*prev=head;
    //To check for 1st element, because to delete the 1st pointer
    //We can just make the head equal to that
    if(head->data == ele)return head->next;
    while(temp->data!=ele)
    {
        prev=temp;
        temp=temp->next;
        if(temp==NULL) //Case for element not found
            return head;
    }
    prev->next=temp->next;
    return head;
};

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

        printf("Do you want to insert more?(1 if you want to insert more, any other number to exit)");
        scanf("%d",&ct);
    }while(ct==1);

    
	printf("Which element do you want to delete?");
	int del;
	scanf("%d",&del);
	
	head = delete(head,del);

    struct node * temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp -> next;
    }
}
