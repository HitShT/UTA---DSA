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

int get_third_element(int ar[],int top)
{
	int a = pop(ar,&top); //top most element in stack
	int b = pop(ar,&top);//2nd element
	int ret = pop(ar,&top);//3rd element
	push(ar,&top,ret);
	push(ar,&top,b);
	push(ar,&top,a);
	return ret; //3rd element
}

int main()
{
	
	// You need tp check that the stack atleast contains 3 elements
	int st1[100],top1=0;
	
	push(st1,&top1,1);
	push(st1,&top1,2);
	push(st1,&top1,3);
	push(st1,&top1,4);
	push(st1,&top1,5);
	
	printf("%d",get_third_element(st1,top1));	
}
