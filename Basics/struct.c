#include <stdio.h>
#include <stdlib.h>

struct Class
{
    char name[100];
    char reg[9];
};

int main()
{
    printf("Structure to store details of students of class:");

    struct Class ob;

    printf("\nEnter name of the student:");
    scanf("%s",&ob.name);
    printf("Enter registration number of the student:");
    scanf("%s",&ob.reg);

    printf("\nName of student in class = %s",ob.name);
    printf("\nHis registration name is %s",ob.reg);
}
