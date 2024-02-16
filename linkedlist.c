#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void insert(char name[50]);
void delete();
void display();
typedef struct node
{
    char name[50];
    struct node *next;
}Node;

Node *head=NULL; // head of the list

int main()
{
    int ch; 
    char name[50];
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
            scanf("%s",&name);
            insert(name);
            break;
            case 2:
            printf("\n enter the value \n");
            scanf("%s",&name);
            delete(name);
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
void insert(char *name)
{
    Node *newnode = (Node*)malloc(sizeof(Node));
    strcpy(newnode->name,name); //copy name to newnode->name
    newnode->next= NULL; 

    //check if the lsit is empty or new name is smaller than the first name inputted
    if(head == NULL || strcmp(head->name,name)>=0)
    {
        newnode->next=head;  // insert the new node at the beignning
        head=newnode;
    }
    else{
        // locate node after which insertion is to be done
        Node *current=head;
    while(current->next !=NULL && strcmp(current->next->name,name)<0)
    {
        current=current->next; //move to next node
    }
    // insert the new node after the current
    newnode->next =current->next;
    current->next = newnode;
    }
}

void delete(char *name)
{

}
