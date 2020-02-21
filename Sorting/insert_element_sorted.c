//Insert an element to sorted array

#include <stdio.h>
#include <stdlib.h>

void insert(int ar[],int ele,int number)
{
    int j;
    for(j=number-1;j>=0;j--)
    {
        if(ar[j]<ele)break;
        else
        {
            ar[j+1]=ar[j];
        }
    }
    ar[j+1]=ele;
}

int main()
{
    int ar[6] = {3,5,8,11,14};
    int ele = 12; //Element to insert
    insert(ar,ele,5);
    for(int i=0;i<6;i++)printf("%d ",ar[i]);
}
