#include<stdio.h>
#include<stdlib.h>
#define MAX 6

int queue[MAX];
int front=-1,rear=-1;

void insert(int value);
void delete();
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
            delete();
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
    if(rear == MAX-1)
    printf("\n queue overflow");
    else{
        if(front==-1)
        front=0;
        rear++;
        queue[rear]=value;
    }
}

void delete()
{
    if(front==-1)
    printf("\n queue  underflow");
    else
    front++;
    if(front>rear) //resetting the conditions
    front=rear=-1;
}
void display()
{
    if(rear==-1)
    printf("\n queue is underflow");
    else
    {
    for(int i=front;i<=rear;i++)
    {
        printf("\n |%d|",queue[i]);
    }
}
}