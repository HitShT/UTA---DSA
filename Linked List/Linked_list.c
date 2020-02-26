//Link : notepad.pw/UTA-DSA


#include<stdio.h>
#include<malloc.h>

struct node
{
	int data; // data
	struct node * next; //to find next node
};

int main()
{
	
	// add_node(head,data);
	struct node * head= (struct node *)(malloc(sizeof(struct node)));
	head -> data = 1;
	head -> next = NULL;
	
	struct node * prev = head; // for easier accessing and storing
	
	struct node * temp = (struct node *)(malloc(sizeof(struct node)));
	
	temp -> data =5;
	temp -> next=NULL;
	prev -> next = temp;
	prev = temp;
	
	struct node * temp2 = (struct node *)(malloc(sizeof(struct node)));
	
	temp2 -> data =7;
	temp2 -> next = NULL;
	
	prev->next = temp2;
	prev = next;
	
	//to add 4th npde head->next->next->next
	printf("Data in linked list=> %d %d %d",head->data,head->next->data,head->next->next->data);
}
