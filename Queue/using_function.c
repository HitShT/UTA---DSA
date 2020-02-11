#include <stdio.h>
#include <stdlib.h>

void enqueue(int* queue,int* rear)
{
    int element;
    printf("Enter an element:");
    scanf("%d",&element);
    queue[(*rear)++]=element;
}

void dequeue(int queue[],int* front)
{
    printf("%d\n",queue[(*front)++]);
}

int main()
{
    int queue[100];
    int front=0,rear=0;

    enqueue(&queue,&rear);
    enqueue(&queue,&rear);
    enqueue(&queue,&rear);
    enqueue(&queue,&rear);
    enqueue(&queue,&rear);
    enqueue(&queue,&rear);
    enqueue(&queue,&rear);
    enqueue(&queue,&rear);

    dequeue(queue,&front);
    dequeue(queue,&front);
    dequeue(queue,&front);
    dequeue(queue,&front);
    dequeue(queue,&front);
}
