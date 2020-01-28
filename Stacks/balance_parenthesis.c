/*

	Balancing parenthesis

*/

#include<stdio.h>
#include<string.h>

void push(char* stack,int top)
{
    stack[top]='{';

}

char pop(char* stack,int top)
{
	return stack[top];
}

int main()
{
	char stack[100],top=0;
	char expression[100];

	int choice=-1;

	scanf("%s",&expression);

    for(int i=0;i<strlen(expression);i++)
    {
        if(expression[i]=='{')
        {
            push(&stack,top);
            top++;
        }
        if(expression[i]=='}')
        {
            if(top==0)
            {
                choice=0;
                break;
            }
            else
            {
                pop(&stack,top);
                top--;
            }
        }
    }
    if(top==0 && choice==-1)
    {
        printf("Balanced");
    }
    else
    {
        printf("Not Balanced");
    }
}
