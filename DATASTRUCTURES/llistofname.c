#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char name[50];
    struct node *next;
} Node;

Node *head = NULL;

void insert(char *name);
void delete(char *name);
void display();

int main(){
    int ch;
    char name[50];
    while(1){
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the name to be inserted: ");
                scanf("%s",name);
                insert(name);
                break;
            case 2:
                printf("Enter the name to be deleted: ");
                scanf("%s",name);
                delete(name);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}

void insert(char *name){
    Node *newNode = (Node *)malloc(sizeof(Node));
    strcpy(newNode->name,name);
    newNode->next = NULL;
    if(head==NULL){
        head = newNode;
    }
    else{
        Node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void delete(char *name){
    if(head==NULL){
        printf("List is empty\n");
        return;
    }
    Node *temp = head;
    Node *prev = NULL;
    while(temp!=NULL){
        if(strcmp(temp->name,name)==0){
            if(prev==NULL){
                head = temp->next;
            }
            else{
                prev->next = temp->next;
            }
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    printf("Name not found\n");
}

void display(){
    Node *temp = head;
    while(temp!=NULL){
        printf("%s\n",temp->name);
        temp = temp->next;
    }
}