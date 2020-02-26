#include<stdio.h>

void push(int ar[],int* top,int ele)
{
	ar[(*top)++]=ele;
}

int pop(int ar[],int* top)
{
	(*top)--;
	return ar[(*top)]	;
}

int main()
{
	int st1[100],top1=0;
	int st2[100],top2=0;

	push(st1,&top1,1);
	push(st1,&top1,2);
	push(st1,&top1,3);
	push(st1,&top1,4);
	push(st1,&top1,5);
	
	push(st2,&top2,pop(st1,&top1));
	push(st2,&top2,pop(st1,&top1));
	push(st2,&top2,pop(st1,&top1));
	push(st2,&top2,pop(st1,&top1));
	push(st2,&top2,pop(st1,&top1));
	
	printf("Printing elements of stack:");
	while(top2>0)
	{
		printf("%d ",pop(st2,&top2));
	}
}
