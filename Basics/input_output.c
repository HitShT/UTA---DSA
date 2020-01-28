#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("This is how you print statements");
    printf("\nTo input sentences from user, use scanf");

    /*
        %d to read integer
        %f to read float
        %c to read character (But there are complications with some compilers)
        %s to read string
    */

    int n; // To declare a variable datatype variable name
    float n2;
    char n3;

    printf("\nTo take an integer as input:");
    scanf("%d",&n);
    printf("To take float as input:");
    scanf("%f",&n2);
    printf("To take character as input:");
    scanf("%s",&n3);

    /*
        String is a collection of characters
        We dont have string data type, we use a character array
    */

    char n4[10];
    printf("Reading a string as input:");
    scanf("%s",&n4);

    //Printing variables

    printf("%d %f %c %s",n,n2,n3,n4);
    return 0;
}
