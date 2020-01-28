/*
	Stack using structures, pointers and Dynamic Memory Allocation

	This is called ADT : Abstract Data Type
	ADT means Data Types but created by us, not defined by language creators

	Using functions
*/

#include<stdio.h>

void push(int* stack,int* top)
{
	int ele;
	printf("Enter the element you want to enter:");
	scanf("%d",&ele);
	stack[(*top)]=ele;
	(*top)+=1;
}

int pop(int* stack,int top)
{
	return stack[top];
}

int main()
{
	int stack[100],top=0;

	for(int i=0;i<5;i++)
	{
		push(&stack,&top);
	}
	top-=1; // Think why
	for(int i=0;i<5;i++)
	{
		printf("\nPopped element is %d",pop(stack,top));
		top-=1;
	}
}
