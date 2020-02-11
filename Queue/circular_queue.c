//Circular Queue

#include <stdio.h>
#include <stdlib.h>

void enqueue(int* queue,int* front,int* rear,int* size)
{
    int element;
    printf("Enter an element:");
    scanf("%d",&element);
    if((*size)>=5)
    {
        printf("Queue is full");
    }
    else
    {
        (*size)++;
        if((*rear)<5)
        {
            queue[(*rear)++]=element;
        }
        else
        {
            (*rear)=0;
            queue[(*rear)++]=element;
        }
    }
}

void dequeue(int queue[],int* front,int* rear,int* size)
{
    if((*size)==0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Dequeued Element is:%d \n",queue[(*front)++]);
        (*size)--;
    }
    if((*front)==5)(*front)=0;
}

int main()
{
    int size=0;
    int queue[5];
    int front=0,rear=0;

    enqueue(&queue,&front,&rear,&size);
    enqueue(&queue,&front,&rear,&size);
    enqueue(&queue,&front,&rear,&size);
    enqueue(&queue,&front,&rear,&size);
    enqueue(&queue,&front,&rear,&size);

    dequeue(queue,&front,&rear,&size);
    dequeue(queue,&front,&rear,&size);
    dequeue(queue,&front,&rear,&size);
    dequeue(queue,&front,&rear,&size);
    dequeue(queue,&front,&rear,&size);
    dequeue(queue,&front,&rear,&size);

    enqueue(&queue,&front,&rear,&size);
    enqueue(&queue,&front,&rear,&size);

    dequeue(queue,&front,&rear,&size);
    dequeue(queue,&front,&rear,&size);

}
