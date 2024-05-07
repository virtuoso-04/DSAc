#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *left;
    struct node *right;
    int data;
}nod;

nod *root=NULL;

nod *newnode(int data)
{
    nod *temp=(nod*)malloc(sizeof(nod));
    temp->data=data;
    temp->left=temp->right=NULL;
}

nod *insert(nod *node,int data)
{
    if(node==NULL)
    return newnode(data);
    if (data < node->data)
    node->left= insert(node->left,data);
    else
    node->right=insert(node->right,data);
    return node;
}
void inorder(nod *root)
{
    if(root!=NULL)
    
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);
    
}
void preorder(nod *root)
{
    if(root!=NULL)

        printf(" %d ",root->data);
        preorder(root->left);
        preorder(root->right);
    
}
void postorder(nod *root)
{
    if(root!=NULL)
        postorder(root->left);
        postorder(root->right);
        printf(" %d ",root->data);
    
}
int main()
{
    int ch,value;
     while(1)
    {
        printf("\n1. insert value in the tree");
        printf("\n2. preorder");
        printf("\n3. inorder ");
        printf("\n4. postorder");
        printf("\n5. exit");
        printf("\n enter the choice \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            printf("enter the data ");
            scanf("%d",&value);
            root=insert(root,value);
            break;
            case 2:
            printf("\n pre order");
            preorder(root);
            break;
            case 3:
            printf("\n in order");
            inorder(root);
            break;
            case 4:
            printf("\n post order");
            postorder(root);
            break;
            case 5:
            exit(0);
              break;
              default:
              printf("wrong choice");
        }
    }
}
    

           