#include<stdio.h>
#include<stdlib.h>
#define max 5

int top=-1;
int stack[max];

void push(int);
void pop();
void peek();
void display();


int main()
{
    int ch,item;
    while(1)
    {
        printf("\n1. push an element");
        printf("\n2. pop an element ");
        printf("\n3. peek an element ");
        printf("\n4. display all the elements");
        printf("\n5. exit the program");
        printf("\n enter the choice \n");
        scanf("%d\n",&ch);

        switch(ch)
        {
            case 1:
            printf("enter the element to be pushed \n");
            scanf("%d",&item);
            push(item);
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            default:
            printf("\n wrong choice");           
        }
    }
}
    void push(int item)
    {
        if(top==max-1)
        printf("\n stack is full");
        else
        stack[top++]=item;
        return;
    }
    void pop()
    {
        if(top==-1)
        printf("\n stack is empty");
        else
        stack[top--];
    }
    void peek()
    {
        if(top==-1)
        printf("stack is empty");
        else
        printf("%d",stack[top]);
    }
    void display()
    {
        for(int i=0;i<=top;i++)
        {
            printf("%d\n",stack[i]);
        }
        
    }
