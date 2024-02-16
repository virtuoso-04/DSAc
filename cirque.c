#include<stdio.h>
#include<stdlib.h>
#define MAX 6

struct circqueue{
    int data; //data to be stored in queue
};

 struct circqueue queue[MAX];
int front=-1,rear=-1;

void insert(int value);
int delete();
void display();

int main()
{
    int ch, value;
    while(1)
    {
        printf("\n1. insert value in the queue");
        printf("\n2. delete the value from the queue");
        printf("\n3. display the element ");
        printf("\n4. exit");
        printf("\n enter the choice \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:printf("\n enter the value \n");
            scanf("%d",&value);
            insert(value);
            break;
            case 2:
            value=delete();
            if (value!=-1)
            {
                printf("deleted element is %d \n",value);
            }
            break;
            case 3:
            display();
            break;
            case 4: exit(0);
            default:
            printf(" \n wrong choice ");
        }
    }
}

void insert(int value)
{
    if((rear+1)%MAX==front)
    printf("\n queue overflow");
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
    }
     else{
         rear=(rear+1)%MAX;
         }
         queue[rear].data =value;   

 }


int delete()
{
    int value;
     if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
     value=queue[front].data;
       if(front==rear )
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%MAX;
        }
        return value;
        if(front>rear)
        front=rear=-1;
}
void display()    
{
    int i=0;
    if(front==-1)
    printf("\n queue is underflow");
    else
    {
        printf("\n front = %d ",front);
        printf("\n ---items---");
    for(int i=front;i!=rear;i=(i+1)%MAX)
    {
        printf("\n |%d|",queue[i].data);
    }
    printf("\n |%d|",queue[i].data);
    printf("\n rear = %d",rear);
    }
}