#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    //Data you want to store in the LL
    struct node *next;
};

int main()
{
    struct node *head,*prev;
    head = (struct node *)malloc(sizeof(struct node));
    int n,ele;
    printf("Enter the number of elements in the LL");
    scanf("%d",&n);
    printf("Enter the element you want to insert:");
    scanf("%d",&ele);

    //Creating the head pointer
    head -> data = ele;
    head -> next = NULL;
    prev = head;

    //Because we already inserted one element
    for(int i=0;i<n-1;i++)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter the element you want to insert:");
        scanf("%d",&ele);
        temp -> data = ele;
        temp -> next =NULL;
        prev -> next = temp;
        prev = temp;
    }

    //Printing the elements of the linked list
    struct node * temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp -> next;
    }

    return 0;
}
