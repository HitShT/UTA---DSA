//Insertion Sort

#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int ar[],int ele,int number)
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
    int ar[4] = {53,1,27,-5};
    for(int i=1;i<4;i++)
    {
        insertion_sort(ar,ar[i],i);
    }
    for(int i=0;i<4;i++)printf("%d ",ar[i]);
}
