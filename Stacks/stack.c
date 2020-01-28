/*
Operations possible on stack

push
pop
peek
isEmpty
isFull

*/

//Stack only using array

#include<stdio.h>

int main()
{
	int stack[10];
	int top=-1;


	//Push
	stack[top+1]=0;
	top++;
	stack[top+1]=1;
	top++;
	stack[top+1]=2;
	top++;
	stack[top+1]=3;
	top++;

	//Pop

	printf("Pop element from stack %d",stack[top]);
	top--;
	printf("\nPop element from stack %d",stack[top]);
	top--;
	printf("\nPop element from stack %d",stack[top]);
	top--;
	printf("\nPop element from stack %d",stack[top]);
	top--;

}
