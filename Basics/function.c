#include <stdio.h>


// Passing parameter as value
int add(int a,int b)
{
    int sum;
    sum = a+b;
    return sum;
}

char character(char st)
{
    return st;
}

float div(float a,float b)
{
    float div;
    div = a/b;
    return div;
}

int main()
{
    int sum;
    char ch;
    float di;

    sum=add(5,6);
    ch=character('z');
    di=div(5,2);

    printf("Sum is %d",sum);
    printf("\nCharacter is %c",ch);
    printf("\nResults of division are %f",di);
    return 0;
}
