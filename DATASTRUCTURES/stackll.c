#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *top=NULL;
void push(int item);
int pop();
int peek();
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
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            printf("enter the element to be pushed ");
            scanf("%d",&item);
            push(item);
            break;
            case 2:
            item=pop();
            if(item!=-1)
            printf("popped item is %d ",item);
            break;
            case 3:
            item=peek();
            printf("element at top is %d",item);
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
    Node *temp=(Node*)malloc(sizeof(Node));
    temp->data=item;
    temp->next=top;
    top=temp;
}
 //removal of 1st node where top points 

 int pop()
 {
    if(top==NULL)
    {
        printf("stack is empty");
        return -1;
    }
    Node *temp=top;
    top=top->next;  //top is updated to next node
    int item=temp->data;
    free(temp);
    return item;
 }

int peek()
{
    if (top==NULL)
    {
        printf("stack is empty");
    }
  else
  return top->data;
}
void display()
{
    Node *temp=top;
    if(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");

}