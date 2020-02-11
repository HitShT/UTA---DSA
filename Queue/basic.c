#include <stdio.h>
#include <stdlib.h>

int main()
{
    int queue[100];
    int front=0,rear=0;


    //enqueue
    queue[rear++]=1;
    queue[rear++]=2;
    queue[rear++]=3;
    queue[rear++]=4;
    queue[rear++]=5;
    queue[rear++]=6;
    queue[rear++]=7;
    queue[rear++]=8;
    queue[rear++]=9;
    queue[rear++]=10;

	//dequeue
    printf("%d\n",queue[front++]);
    printf("%d\n",queue[front++]);
    printf("%d\n",queue[front++]);
    printf("%d\n",queue[front++]);
    printf("%d\n",queue[front++]);
}
