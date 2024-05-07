#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int items[MAX];
int front=-1,rear=-1;
void insert(int value);
void delete();
void display();

int main()
{
    insert(1);
    insert(6);
    insert(5);
    insert(7);
    display();
    delete();
    display();
    delete();
    display();
}

void insert(int value)
{
    if(rear==MAX-1)
     printf("queue is full");
     else
      if(front=-1)
      front=0;
      rear=rear+1;
      items[rear]=value;
      printf("caller id is added %d",value);

}
void delete()
{
    if(front==-1)
    printf("queue is empty");
    else
    printf("caller id is deleted ",items[front]);
    front++;
    if(front>rear)
    front=rear=-1;
}

void display()
{
    if(rear==-1)
    printf(" call queuee is empty");
    else{
        int i;
        printf(" cqlls hel in queue are \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d",items[i]);

        }
    }
}
