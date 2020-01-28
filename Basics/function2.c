//Passing parameters by address

#include<stdio.h>

void change(int a)
{
	a=6;
}

void change2(int *a)
{
    (*a)=6;
}

int main()
{
		int a=5;
		change(a);
		printf("%d",a);
		change2(&a);
		printf("\n%d",a);
}
